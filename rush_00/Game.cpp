/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 14:08:38 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/14 23:12:56 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Game.hpp"

/*
 * CONSTRUCTOR DESTRUCTOR
 */

Game::Game() {
	srand ( time(NULL) );
	initscr();
	keypad(stdscr, TRUE);
	nodelay(stdscr, TRUE);
	noecho();
	cbreak();
	curs_set(0);
	start_color();
	init_pair(1, COLOR_BLUE, COLOR_BLACK);
	init_pair(2, COLOR_GREEN, COLOR_BLACK);
	init_pair(3, COLOR_CYAN, COLOR_BLACK);
	init_pair(4, COLOR_RED, COLOR_BLACK);
	init_pair(5, COLOR_MAGENTA, COLOR_BLACK);

	_board = subwin(stdscr, LINES - 5, COLS, 0, 0);
	_panel  = subwin(stdscr, 5, COLS, LINES -5, 0);

	_points = 0;
	_level = 1;

	updateFrame(_board);
	updateFrame(_panel);

	wattron(_board, COLOR_PAIR(3));
	printTitle( name, nameW, nameH);
	wattroff(_board, COLOR_PAIR(3));

	for (int i = 0; i < 100; i++) {
		_objects[i] = nullptr;
		_bullets[i] = nullptr;
		_enemies[i] = nullptr;
	}
}

Game::Game(Game const & src) {
	*this = src;
}

Game::~Game() {
	keypad(stdscr, FALSE);
	nodelay(stdscr, FALSE);
	nocbreak();
	curs_set(0);
	endwin();
}

Game &		Game::operator=( Game const & src ) {
	if ( this != &src ) {
		//do something
	}
	return *this;
}

/*
 * PUBLIC
 */

void			Game::exitGame() {
	keypad(stdscr, FALSE);
	nodelay(stdscr, FALSE);
	nocbreak();
	curs_set(0);
	endwin();
	exit(0);
}

void			Game::startGame() {
	short		keyCode;
	long int 	nbLoop = 0;

	while (1) {
		keyCode = getch();
		switch (keyCode) {
			case ESC :
				printTitle(gOver, gOverW, gOverH);
				endwin();
				usleep(1000);
				return ;
			case P2_SHOOT :
				eventLoop();
				werase(_board);
				printTitle(gOver, gOverW, gOverH);
				break;
			default : break;
		}
		nbLoop++;
	}
}

/*
 * EVENT LOOP ACTIONS
 */

void			Game::keyActions(int keyCode) {
	switch(keyCode) {
		case KEY_UP:
			updatePlayer(top);
			break;
		case KEY_DOWN:
			updatePlayer(bottom);
			break;
		case KEY_LEFT:
			updatePlayer(left);
			break;
		case KEY_RIGHT:
			updatePlayer(right);
			break;
		case P2_SHOOT:
			generateBullet();
			break;
		case ESC:
			exitGame();
			break;
	}
}

void			Game::eventLoop() {
	long int 		nbLoop = 0;
	double 			diffTime;

	werase(_board);
	mvwaddch(_board, _player.getPosY(), _player.getPosX(), _player.getIcon());

	updateFrame(_board);

	Action keyPressedTimer(20);
	Action updateBulletsTimer(20);
	Action updateCollisionsTimer(10);
	Action updateObjectsTimer(100);
	Action updateEnemiesTimer(50);
	Action generateObjectsTimer(300);
	Action generateEnemiesTimer(500);

	while (_player.getHP() > 0) {
		if (keyPressedTimer.update())
			keyActions(getch());
		if (updateBulletsTimer.update()) {
			updateBullets();
		}
		if (updateCollisionsTimer.update()) {
			updatePanel();
			detectColisions();
		}
		if (updateObjectsTimer.update()) {
			updateObject();
		}
		if (updateEnemiesTimer.update()) {
			updateEnemies();
		}
		if (generateEnemiesTimer.update()) {
			generateEnemies();
		}
		if (generateObjectsTimer.update()) {
			generateObject();
		}
	}
}

void			Game::detectColisions() {
	for (int i = 0; i < 100; i++) {
		if (_bullets[i] == nullptr)
			continue ;
		if (_player.getPosX() == _bullets[i]->getPosX()  && _player.getPosY() == _bullets[i]->getPosY()) {
			_player.takeDamage(_bullets[i]->getDamage());
			mvwaddch(_board, _player.getPosY(), _player.getPosX(), _player.getIcon());
			delete _bullets[i];
			_bullets[i] = nullptr;
		}
	}

	for (int i = 0; i < 100; i++) {
		if (_objects[i] == nullptr)
			continue ;
		if (_player.getPosX() == _objects[i]->getPosX()  && _player.getPosY() == _objects[i]->getPosY()) {
			_player.takeDamage(_objects[i]->getDamage());
			mvwaddch(_board, _player.getPosY(), _player.getPosX(), _player.getIcon());
			delete _objects[i];
			_objects[i] = nullptr;
		}
	}

	for (int i = 0; i < 100; i++) {
		if (_enemies[i] == nullptr)
			continue ;
		if (_player.getPosX() == _enemies[i]->getPosX()  && _player.getPosY() == _enemies[i]->getPosY()) {
			_player.takeDamage(_enemies[i]->getDamage());
			mvwaddch(_board, _player.getPosY(), _player.getPosX(), _player.getIcon());
			delete _enemies[i];
			_enemies[i] = nullptr;
		}
	}

	for (int i = 0; i < 100; i++) {
		if (_bullets[i] == nullptr)
			continue ;
		for (int j = 0; j < 100; j++) {
			if (_objects[j] == nullptr)
				continue ;
			if (_bullets[i]->getPosY() == _objects[j]->getPosY() && (_bullets[i]->getPosX() == _objects[j]->getPosX() || _bullets[i]->getPosX() + 1 == _objects[j]->getPosX())) {
				if (_objects[j]->takeDamage(_bullets[i]->getDamage()) == 0) {
					mvwaddch(_board, _objects[j]->getPosY(), _objects[j]->getPosX(), ' ');
					mvwaddch(_board, _bullets[i]->getPosY(), _bullets[i]->getPosX(), ' ');
					delete _objects[j];
					_objects[j] = nullptr;
					if (_bullets[i]->getIcon() == '-') {
						updatePoints();
					}
				} else {
					mvwaddch(_board, _bullets[i]->getPosY(), _bullets[i]->getPosX(), ' ');
					mvwaddch(_board, _objects[j]->getPosY(), _objects[j]->getPosX(), _objects[j]->getIcon());
				}
				delete _bullets[i];
				_bullets[i] = nullptr;
				updateFrame(_board);
				return ;
			}
		}
	}

	for (int i = 0; i < 100; i++) {
		if (_bullets[i] == nullptr)
			continue ;
		for (int j = 0; j < 100; j++) {
			if (_enemies[j] == nullptr)
				continue ;
			if (_bullets[i]->getPosY() == _enemies[j]->getPosY() && (_bullets[i]->getPosX() == _enemies[j]->getPosX() || _bullets[i]->getPosX() - 1 == _enemies[j]->getPosX())) {
				if (_enemies[j]->takeDamage(_bullets[i]->getDamage()) == 0) {
					mvwaddch(_board, _enemies[j]->getPosY(), _enemies[j]->getPosX(), ' ');
					mvwaddch(_board, _bullets[i]->getPosY(), _bullets[i]->getPosX(), ' ');
					delete _enemies[j];
					_enemies[j] = nullptr;
					if (_bullets[i]->getIcon() == '-') {
						updatePoints();
					}
				} else {
					mvwaddch(_board, _bullets[i]->getPosY(), _bullets[i]->getPosX(), ' ');
					mvwaddch(_board, _enemies[j]->getPosY(), _enemies[j]->getPosX(), _enemies[j]->getIcon());
				}
				delete _bullets[i];
				_bullets[i] = nullptr;
				updateFrame(_board);
				return ;
			}
		}
	}
}

void			Game::updatePoints() {
	_points += (10 * _level * 0.8);
	if (_points > 100 * (_level * 1.5)) {
		_level++;
	}
}

void			Game::updateObject() {
	for (int i = 0; i < 100; i++) {
		if (_objects[i] != nullptr) {
			mvwaddch(_board, _objects[i]->getPosY(), _objects[i]->getPosX(), ' ');
			_objects[i]->move();
			if (_objects[i]->getPosX() < 1) {
				delete _objects[i];
				_objects[i] = nullptr;
			} else {
				wattron(_board, COLOR_PAIR(_objects[i]->getColor()));
				mvwaddch(_board, _objects[i]->getPosY(), _objects[i]->getPosX(), _objects[i]->getIcon());
				wattroff(_board, COLOR_PAIR(_objects[i]->getColor()));
			}
		}
	}

	updateFrame(_board);
}

void			Game::updateBullets() {
	for (int i = 0; i < 100; i++) {
		if (_bullets[i] != nullptr) {
			mvwaddch(_board, _bullets[i]->getPosY(), _bullets[i]->getPosX(), ' ');
			_bullets[i]->move();
			if (_bullets[i]->getPosX() > COLS || _bullets[i]->getPosX() < 1) {
				delete _bullets[i];
				_bullets[i] = nullptr;
			} else {
				wattron(_board, COLOR_PAIR(_bullets[i]->getColor()));
				mvwaddch(_board, _bullets[i]->getPosY(), _bullets[i]->getPosX(), _bullets[i]->getIcon());
				wattroff(_board, COLOR_PAIR(_bullets[i]->getColor()));
			}
		}
	}
	updateFrame(_board);
}

void			Game::updateEnemies() {
	int shootTrigger;
	for (int i = 0; i < 100; i++) {
		if (_enemies[i] != nullptr) {
			mvwaddch(_board, _enemies[i]->getPosY(), _enemies[i]->getPosX(), ' ');
			_enemies[i]->move();
			shootTrigger = rand() % 20;
			if (shootTrigger == 4) {
				Bullet* bullet = _enemies[i]->shoot();
				addBullet(bullet);
			}
			if (_enemies[i]->getPosX() <= 1) {
				delete _enemies[i];
				_enemies[i] = nullptr;
			} else {
				wattron(_board, COLOR_PAIR(_enemies[i]->getColor()));
				mvwaddch(_board, _enemies[i]->getPosY(), _enemies[i]->getPosX(), _enemies[i]->getIcon());
				wattroff(_board, COLOR_PAIR(_enemies[i]->getColor()));
			}
		}
	}
	updateFrame(_board);
}


void			Game::updatePlayer(Direction d) {
	mvwaddch(_board, _player.getPosY(), _player.getPosX(), ' ');
	_player.move(d);
	mvwaddch(_board, _player.getPosY(), _player.getPosX(), _player.getIcon());
	updateFrame(_board);
}

void			Game::updatePanel() const {
	std::stringstream	ss1;
	std::stringstream	ss2;
	std::stringstream	ss3;
	std::string			string;
	std::string			level;
	std::string			hp;
	std::string			points;

	ss1 << _level;
	ss1 >> level;

	ss2 << _player.getHP();
	ss2 >> hp;

	ss3 << _points;
	ss3 >> points;

	string =  "\tLevel : " + level + " \tLife : " + hp + " \tPoints : " + points + "\t\t\t";
	mvwprintw(_panel , 2, 1, string.c_str());
	updateFrame(_panel);
}

/*
 * GENERATORS
 */

void			Game::generateBullet() {
	Bullet* bullet = _player.shoot();
	addBullet(bullet);
}


void			Game::generateObject() {
	int 		randomY = rand() % LINES -7;
	int			randomSpeed = rand () % 3 + 1;
	int 		color = 1;
	int			lifepoint = 10 * _level;
	Object 		*newObject = new Object(COLS - 2, randomY, '*', 1, color, lifepoint);
	addObject(newObject);
	return ;
}

void			Game::generateEnemies() {
	int 		randomY = rand() % LINES -7;
	int			lifepoint = 10 * _level;
	int 		color = 4;

	Enemy		*newEnemy = new Enemy(COLS - 2, randomY, '[', -1, color, lifepoint);
	addEnemies(newEnemy);
	return ;
}

/*
 * ADD OBJECT IN ARRAYS
 */

void			Game::addObject(Object* src) {
	for (int i = 0; i < 100; i++) {
		if (_objects[i] == nullptr) {
			_objects[i] = src;
			return ;
		}
	}
}

void			Game::addBullet(Bullet* src) {
	for (int i = 0; i < 100; i++) {
		if (_bullets[i] == nullptr) {
			_bullets[i] = src;
			return ;
		}
	}
}

void			Game::addEnemies(Enemy* src) {
	for (int i = 0; i < 100; i++) {
		if (_enemies[i] == nullptr) {
			_enemies[i] = src;
			return ;
		}
	}
}

/*
 * HELPERS
 */

void			Game::printTitle(const char **str, int width, int height) {
	werase(_board);
	box(_board, ACS_VLINE, ACS_HLINE);
	int yStartingPoint =(LINES - height - 5) / 2;
	int xStartingPoint =(COLS - width) / 2;
	for (int i = 0; i < height; i++) {
		mvwprintw(_board, yStartingPoint + i, xStartingPoint, str[i]);
	}
	updateFrame(_board);
}

void			Game::updateFrame(WINDOW* src) const {
	box(src, ACS_VLINE, ACS_HLINE);
	wrefresh(src);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 14:09:03 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/14 21:50:58 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_HPP
# define GAME_HPP

# include <iostream>
# include <string>
# include <ncurses.h>
# include <sstream>

# include <unistd.h>
# include <stdlib.h>
# include <time.h>
# include <sys/timeb.h>

# include "Spaceship.hpp"
# include "Weapon.hpp"
# include "Bullet.hpp"
# include "Object.hpp"
# include "Action.hpp"
# include "Enemy.hpp"

# include "ascii.hpp"
# include "Keycodes.hpp"

# define FRAME_RATE(X) (abs((long long int)difftime(old, now)) % (X * 5)) < 5 || (abs((long long int)difftime(old, now)) % (X * 5)) > ((X * 5) - 5)

class Spaceship;

class Game {

	private:
		Spaceship		_player;
		Object			*_objects[100];
		Bullet			*_bullets[100];
		Enemy 			*_enemies[100];

		int				_points;
		int				_level;

		WINDOW*			_board;
		WINDOW*			_panel;

		void			eventLoop();

		void			detectColisions();
		void			keyActions(int keycode);

		void			updateObject();
		void			updateBullets();
		void			updateEnemies();
		void			updatePlayer(Direction d);
		void			updatePanel() const;
		void			updatePoints();

		void			updateFrame(WINDOW* src) const;

		void			generateObject();
		void			generateBullet();
		void			generateEnemies();

		void			addObject(Object* src);
		void			addBullet(Bullet* src);
		void			addEnemies(Enemy* src);

		void 			printTitle(const char **str, int width, int height);

	public:

		Game();
		Game(Game const & src);
		~Game();

		Game &			operator=( Game const & rhs );

		void			startGame();
		void			exitGame();

};

#endif

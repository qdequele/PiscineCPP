/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Spaceship.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 13:28:22 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/14 20:50:52 by kwiessle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Spaceship.hpp"
#include "Game.hpp"

Spaceship::Spaceship(): Object() {
	_posX = 2;
	_icon = '>';
	_posY = 12;
	_hp = 50;
	_speed = 1;
	_weapon = new Weapon("Basic", 10, '-', COLOR_GREEN, _speed);
}

Spaceship::Spaceship(Spaceship const & src): Object() {
	*this = src;
}

Spaceship::~Spaceship() {
}

Spaceship &		Spaceship::operator=( Spaceship const & src ) {
	if ( this != &src ) {
		//do something
	}
	return *this;
}

bool		Spaceship::operator==( Spaceship const & src ) {
	return Object::operator==(src);
}

void			Spaceship::move() {
	return ;
}

void			Spaceship::move(Direction d) {
	// std::cout << "Spaceship::move : " << _posX << std::endl;
	switch(d)
	{
		case top	:
			_posY = std::max(1, _posY - _speed);
			break;
		case bottom	:
			_posY = std::min(LINES - 7, _posY + _speed);
			break;
		case left	:
			_posX = std::max(1, _posX - _speed);
			break;
		case right	:
			_posX = std::min(COLS - 2, _posX + _speed);
			break;
	}
}

Bullet*			Spaceship::shoot() {
	return _weapon->shoot(_posX + 1, _posY);
}

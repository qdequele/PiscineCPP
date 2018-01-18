/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwiessle <kwiessle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/14 19:28:06 by kwiessle          #+#    #+#             */
/*   Updated: 2018/01/14 21:35:24 by kwiessle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"
#include "Game.hpp"

Enemy::Enemy(): Object() {
	_icon = '[';
	_hp = 50;

	_weapon = new Weapon("Basic", 10, '=', COLOR_RED, _speed);
}

Enemy::Enemy(Enemy const & src): Object() {
	*this = src;
}

Enemy::~Enemy() {
}

Enemy::Enemy(int x, int y, int icon, int speed, int color, int lifepoint) {
	_posX = x;
	_posY = y;
	_icon = icon;
	_speed = speed;
	_color = color;
	_hp = lifepoint;
	_weapon = new Weapon("Basic", 10, '=', 5, _speed);
}

Enemy &		Enemy::operator=( Enemy const & src ) {
	if ( this != &src ) {
	}
	return *this;
}

bool		Enemy::operator==( Enemy const & src ) {
	return Object::operator==(src);
}

void			Enemy::move() {
	_posX = std::max(1, _posX + _speed);
	return ;
}


Bullet*			Enemy::shoot() {
	return _weapon->shoot(_posX - 1, _posY);
}

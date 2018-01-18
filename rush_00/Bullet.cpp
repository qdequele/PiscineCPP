/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bullet.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 13:36:32 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/14 20:54:14 by kwiessle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bullet.hpp"

Bullet::Bullet() : Object() {
}

Bullet::Bullet(int icon, int damage, int color, int posX, int posY, int speed) : Object() {
	_icon = icon;
	_damage = damage;
	_color = color;
	_posX = posX;
	_posY = posY;
	_speed = speed;
}

Bullet::Bullet(Bullet const & src) {
	*this = src;
}

Bullet::~Bullet() {
}

Bullet &		Bullet::operator=( Bullet const & src ) {
	if ( this != &src ) {
		//do something
	}
	return *this;
}

void			Bullet::move() {
	_posX += _speed;
}

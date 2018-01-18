/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 13:33:35 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/14 20:49:58 by kwiessle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {
}
Weapon::Weapon(std::string name, int damage, int icon, int color, int speed)
	: _name(name), _damage(damage), _icon(icon), _color(color), _speed(speed) {

}

Weapon::Weapon(Weapon const & src) {
	*this = src;
}

Weapon::~Weapon() {
}

Weapon &		Weapon::operator=( Weapon const & src ) {
	if ( this != &src ) {
		//do something
	}
	return *this;
}

Bullet*			Weapon::shoot(int posX, int posY) {
	return new Bullet(_icon, _damage, _color, posX, posY, _speed);
}

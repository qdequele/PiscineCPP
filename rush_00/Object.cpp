/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Object.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 11:19:06 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/14 18:47:12 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Object.hpp"

Object::Object()
	: _speed(1), _color(COLOR_RED), _hp(10) {

	_icon = '0';
	_posX = COLS - 1;
	_posY = _getRandomLine();

}

Object::Object(int x, int y, int icon, int speed, int color, int hp) :
	_posX(x),
	_posY(y),
	_icon(icon),
	_speed(speed),
	_color(color),
	_hp(hp),
	_damage(10)
	{return;}

Object::Object(Object const & src) {
	*this = src;
}

Object::~Object() {
}

Object &		Object::operator=( Object const & src ) {
	if ( this != &src ) {
		//do something
	}
	return *this;
}

bool			Object::operator ==	( Object const & rhs ) {
	if (this->_posX == rhs._posX && this->_posY == rhs._posY)
		return true;
	return false;
}

int				Object::_getRandomLine() const {
	return rand() % 50 - 5 + 1;
}

void			Object::move() {
	// std::cout << "Move called";
	_posX = _posX - _speed;
	// std::cout << " " << _posX;
}

int				Object::takeDamage( int damage ) {
	_hp = std::max(0, _hp - damage);
	return _hp;
}

int				Object::getDamage() const {
	return _damage;
}

void			Object::description() const {
	std::cout << _hp << std::endl;
}

int 			Object::getPosX(void) const {
	return (this->_posX);
}

int 			Object::getPosY(void) const {
	// std::cout << _icon << " Object::getPosY :"<< _posY << std::endl;
	return (this->_posY);
}

int				Object::getIcon(void) const {
	return (this->_icon);
}

int			Object::getColor(void) const {
	return (this->_color);
}

int		Object::getHP(void) const {
	return _hp;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 13:56:50 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/12 18:08:30 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy() {}

Enemy::Enemy(int hp, std::string const & type)
	: _hp(hp), _type(type) {

}

Enemy::Enemy(Enemy const & src) {
	*this = src;
}

Enemy::~Enemy() {
}

Enemy &		Enemy::operator=( Enemy const & src ) {
	if ( this != &src ) {
		//do something
	}
	return *this;
}

std::string	const &	Enemy::getType() const {
	return _type;
}
int 			Enemy::getHP() const {
	return _hp;
}

void			Enemy::takeDamage(int d) {
	int damage = std::max(0, d);
	int hp = std::max(0, _hp - damage);
	_hp = hp;
}

std::ostream & operator<<( std::ostream & o, Enemy const & src) {
	o << src.getType() << " as " << src.getHP() << " HP" << std::endl;
	return o;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 13:56:05 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/12 18:05:49 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
}

Character::Character(std::string const & name): _name(name), _ap(40), _weapon(NULL) {
}

Character::Character(Character const & src) {
	*this = src;
}

Character::~Character() {
}

Character &		Character::operator=( Character const & src ) {
	if ( this != &src ) {
		//do something
	}
	return *this;
}

void			Character::recoverAP() {
	_ap = std::min(40, _ap + 10);
}

void			Character::equip(AWeapon* src) {
	_weapon = src;
}

void			Character::attack(Enemy* src) {


	if (_weapon == nullptr) {
		std::cout << "No weapon equiped" << std::endl;
		return ;
	}
	if ((_ap - _weapon->getAPCost()) < 0) {
		std::cout << "No enought actions points" << std::endl;
		return ;
	}

	// std::cout << _ap << ":" << _weapon->getAPCost() << std::endl;

	_ap = std::max(0, _ap - _weapon->getAPCost());

	// std::cout << _ap << std::endl;

	src->takeDamage(_weapon->getDamage());


	std::cout << _name << " attacks " << src->getType() << " with a " << _weapon->getName() << std::endl;
	_weapon->attack();

	if (src->getHP() <= 0) {
		delete src;
		src = NULL;
	}
}

std::string		Character::getName() const {
	return _name;
}

int				Character::getAP() const {
	return _ap;
}

AWeapon*		Character::getWeapon() const {
	return _weapon;
}


std::ostream & operator<<( std::ostream & o, Character const & src) {
	if (src.getWeapon() == NULL) {
		o << src.getName() << " as " << src.getAP() << " AP and is unarmed" << std::endl;
	} else {
		o << src.getName() << " as " << src.getAP() << " AP and wields a " << src.getWeapon()->getName() << std::endl;
	}
	return o;
}

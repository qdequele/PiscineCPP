/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 13:14:13 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/09 13:46:23 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name, Weapon& weapon)
	: _weapon(&weapon), _name(name) {}

HumanB::HumanB(std::string name)
	: _name(name) {
		Weapon weapon = Weapon("nothing");
		this->_weapon = &weapon;
	}

HumanB::~HumanB() {}

void HumanB::attack() {
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& weapon) {
	this->_weapon = &weapon;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 13:14:08 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/09 13:45:27 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon)
	: _weapon(&weapon), _name(name) {}

HumanA::HumanA(std::string name)
	: _name(name) {
		Weapon weapon = Weapon("nothing");
		this->_weapon = &weapon;
	}

HumanA::~HumanA() {}

void HumanA::attack() {
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}

void HumanA::setWeapon(Weapon& weapon) {
	this->_weapon = &weapon;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 09:52:28 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/09 11:17:56 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


const std::string	Zombie::possibleNames[] = {
	"Leo",
	"Lucas",
	"Adam",
	"Louis",
	"Liam",
	"Ethan",
	"Hugo",
	"Marie",
	"Camille",
	"Léa",
	"Manon",
	"Chloé",
	"Laura",
	"Julie"
};

Zombie::Zombie(std::string name, std::string type)
	: _name(name), _type(type) {

	std::cout << "Zombie " << this->_name << " approach" << std::endl;
}

Zombie::Zombie(std::string type)
	: _type(type) {
	std::string name = this->getRandomName();
	this->_name = name;
	std::cout << "Zombie " << this->_name << " approach" << std::endl;
}

Zombie::Zombie() {
	std::string name = this->getRandomName();
	this->_name = name;
	this->_type = "jumper";
	std::cout << "Zombie " << this->_name << " approach" << std::endl;
}

Zombie::~Zombie() {
	std::cout << "Zombie " << this->_name << " died, again..." << std::endl;
}

void Zombie::announce() {
	std::cout << "<" << this->_name << " (" << this->_type<< ")> Braiiiiiiinnnssss..." << std::endl;
}

std::string Zombie::getRandomName() const {
	int randNum = 0;

	randNum = rand() % 12 + 1;

	return Zombie::possibleNames[randNum];
}
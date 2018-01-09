/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 09:52:23 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/09 11:14:17 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(std::string type): _type(type) {
	std::cout << "ZombieEvent created some " << type << "s are comming... Run !!!" << std::endl;
}

ZombieEvent::~ZombieEvent() {
	std::cout << "You are now safe the zombies are gone +1" << std::endl;
}

void ZombieEvent::setZombieType(std::string type) {
	std::cout << "A new wave of " << type << "s was comming" << std::endl;
	this->_type = type;
}

Zombie* ZombieEvent::newZombie(std::string name) {
	return new Zombie(name, this->_type);
}

Zombie* ZombieEvent::randomChump() {
	Zombie	*zombie = new Zombie(this->_type);
	zombie->announce();
	return zombie;
}


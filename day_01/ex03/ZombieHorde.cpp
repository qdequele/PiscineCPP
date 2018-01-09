/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 10:59:56 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/09 11:57:36 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) {
	std::cout << "An huge horde of zombies arrive, they are " << n << std::endl;
	this->_zombieHorde = new Zombie[n];
	this->_numberOfZombies = n;
}

ZombieHorde::~ZombieHorde() {
	delete [] this->_zombieHorde;
	std::cout << "All zombies in the horde are died" << std::endl;
}

void ZombieHorde::announce() {
	for (int i = 0; i < this->_numberOfZombies; i++) {
		this->_zombieHorde[i].announce();
	}
}
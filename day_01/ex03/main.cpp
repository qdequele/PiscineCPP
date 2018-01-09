/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 09:52:38 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/09 11:57:06 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "ZombieHorde.hpp"


int main () {

	srand ( time(NULL) );

	ZombieEvent		*zombieEvent = new ZombieEvent("Walker");
	Zombie 			*bob = zombieEvent->newZombie("bob");
	Zombie 			*marley = zombieEvent->newZombie("marley");

	ZombieHorde		*horde = new ZombieHorde(5);

	bob->announce();
	marley->announce();

	horde->announce();

	delete horde;

	zombieEvent->setZombieType("Runner");

	for (int i = 0; i < 10; i++) {
		Zombie rand = *zombieEvent->randomChump();
	}

	delete marley;
	delete bob;
	delete zombieEvent;

	return (0);
}
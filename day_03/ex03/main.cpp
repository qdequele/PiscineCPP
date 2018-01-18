/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 09:30:08 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/11 15:54:19 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main() {
	srand ( time(NULL) );

	std::cout << "Start of game" << std::endl;

	FragTrap frap("Bob");
	std::cout << std::endl;
	frap.meleeAttack("Alice");
	std::cout << std::endl;
	frap.beRepared(30);
	std::cout << std::endl;
	frap.rangedAttack("Patrick");
	std::cout << std::endl;
	frap.takeDamage(60);
	std::cout << std::endl;
	frap.beRepared(30);
	std::cout << std::endl;
	frap.vaulthunter_dot_exe("Alice");
	std::cout << std::endl;
	frap.vaulthunter_dot_exe("Alice");
	std::cout << std::endl;
	frap.vaulthunter_dot_exe("Alice");
	std::cout << std::endl;
	frap.vaulthunter_dot_exe("Alice");
	std::cout << std::endl;
	frap.vaulthunter_dot_exe("Alice");
	std::cout << std::endl;
	frap.takeDamage(20);
	std::cout << std::endl;
	frap.status();
	std::cout << std::endl;
	frap.takeDamage(30);
	std::cout << std::endl;
	frap.takeDamage(40);

	std::cout << std::endl;
	ScavTrap scav("Marie");
	std::cout << std::endl;
	scav.meleeAttack("Margaux");
	std::cout << std::endl;
	scav.beRepared(30);
	std::cout << std::endl;
	scav.rangedAttack("Bastien");
	std::cout << std::endl;
	scav.takeDamage(70);
	std::cout << std::endl;
	scav.beRepared(20);
	std::cout << std::endl;
	scav.challengeNewcomer();
	std::cout << std::endl;
	scav.challengeNewcomer();
	std::cout << std::endl;
	scav.challengeNewcomer();
	std::cout << std::endl;
	scav.status();
	std::cout << std::endl;
	scav.takeDamage(70);

	std::cout << std::endl;
	NinjaTrap ninja("Fu Yi");
	std::cout << std::endl;
	ninja.meleeAttack("Morgane");
	std::cout << std::endl;
	ninja.beRepared(30);
	std::cout << std::endl;
	ninja.rangedAttack("Alex");
	std::cout << std::endl;
	ninja.takeDamage(20);
	std::cout << std::endl;
	ninja.beRepared(30);
	std::cout << std::endl;
	ninja.ninjaShoebox("Alex");
	std::cout << std::endl;
	ninja.ninjaShoebox("Morgane");
	std::cout << std::endl;
	ninja.status();
	std::cout << std::endl;
	ninja.takeDamage(70);


	std::cout << "End of game" << std::endl;
	return 0;
}

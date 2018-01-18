/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 09:30:08 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/11 15:15:20 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

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
	ScavTrap marie("Marie");
	std::cout << std::endl;
	marie.meleeAttack("Alice");
	std::cout << std::endl;
	marie.beRepared(30);
	std::cout << std::endl;
	marie.rangedAttack("Patrick");
	std::cout << std::endl;
	marie.takeDamage(70);
	std::cout << std::endl;
	marie.beRepared(20);
	std::cout << std::endl;
	marie.challengeNewcomer();
	std::cout << std::endl;
	marie.challengeNewcomer();
	std::cout << std::endl;
	marie.challengeNewcomer();
	std::cout << std::endl;
	marie.status();
	std::cout << std::endl;
	marie.takeDamage(70);
	std::cout << "End of game" << std::endl;
	return 0;
}

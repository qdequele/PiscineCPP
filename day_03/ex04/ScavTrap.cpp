/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 14:21:13 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/11 16:50:11 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"

const std::string 	ScavTrap::_missionsName[] = {
	"released Court-Sur-Pattes",
	"Kill constructor 1340",
	"Find the Repair Kit and repair this Claptrap.",
	"Find a house for Dukino ",
	"Assist to the Great Fire"
};

const int 			ScavTrap::_missionsNb = 5;

ScavTrap::ScavTrap() {
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 50;
	_maxEnergyPoints = 50;
	_meleeAttackDamage = 20;
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;
	std::cout << "-> SC4V-TP " << _name << " is created" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
	: ClapTrap(name) {
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 50;
	_maxEnergyPoints = 50;
	_meleeAttackDamage = 20;
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;

	std::cout << "-> SC4V-TP " << _name << " is created" << std::endl;

	this->status();
}


ScavTrap::ScavTrap(ScavTrap const & src): ClapTrap(src) {
	*this = src;

	std::cout << "-> SC4V-TP " << _name << " is created by copy" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "-> SC4V-TP " << _name << " is deleted" << std::endl;
}

ScavTrap &		ScavTrap::operator=( ScavTrap const & src ) {
	if ( this != &src ) {
		_hitPoints = src._hitPoints;
		_maxHitPoints = src._maxHitPoints;
		_energyPoints = src._energyPoints;
		_maxEnergyPoints = src._maxEnergyPoints;
		_level = src._level;
		_meleeAttackDamage = src._meleeAttackDamage;
		_rangedAttackDamage = src._rangedAttackDamage;
		_armorDamageReduction = src._armorDamageReduction;
		_name = src._name;
	}

	return *this;
}

void		ScavTrap::challengeNewcomer() {
	int randNum = 0;
	randNum = rand() % (ScavTrap::_missionsNb - 1) + 1;

	std::cout << "-> SC4V-TP " << _name << " have a new chalange ! " << ScavTrap::_missionsName[randNum] << std::endl;
}

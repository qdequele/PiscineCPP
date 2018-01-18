/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 09:30:01 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/11 16:52:46 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() {
	_energyPoints = 120;
	_maxEnergyPoints = 120;
	_meleeAttackDamage = 60;
	std::cout << "-> NINJ4-TP " << _name << " is created" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name): ClapTrap(name) {
	_name = name;
	_hitPoints = 60;
	_maxHitPoints = 60;
	_energyPoints = 120;
	_maxEnergyPoints = 120;
	_level = 1;
	_meleeAttackDamage = 60;
	_rangedAttackDamage = 6;
	_armorDamageReduction = 0;

	_ninjaShoeboxPower = 80;

	std::cout << "-> NINJ4-TP " << _name << " is created" << std::endl;

	this->status();
}


NinjaTrap::NinjaTrap(NinjaTrap const & src): ClapTrap(src) {
	*this = src;

	std::cout << "-> NINJ4-TP " << _name << " is created by copy" << std::endl;
}

NinjaTrap::~NinjaTrap() {
	std::cout << "-> NINJ4-TP " << _name << " is deleted" << std::endl;
}

NinjaTrap &		NinjaTrap::operator=( NinjaTrap const & src ) {
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

void	NinjaTrap::meleeAttack(std::string const & target) {
	std::cout << _name << " say: " <<_getRandomQuote(ClapTrap::_criticalHit, ClapTrap::_criticalHitNb) << std::endl;

	std::cout << "-> NINJ4-TP " << _name << " attacks " << target << " at melee, causing " << _meleeAttackDamage << " points of damage !" << std::endl;
}

void	NinjaTrap::ninjaShoebox(std::string const & target) {
	std::cout << _name << " say: " <<_getRandomQuote(NinjaTrap::_vaultHunter, NinjaTrap::_vaultHunterNb) << std::endl;

	std::cout << "-> NINJ4-TP " << _name << " attacks " << target << " with his special attack \"Ninja Shoes\", causing " << _ninjaShoeboxPower << " points of damage !" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 09:30:01 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/12 09:55:31 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(): ClapTrap(), FragTrap(), NinjaTrap() {
	_name = "";
	_hitPoints = FragTrap::_hitPoints;
	_maxHitPoints = FragTrap::_maxHitPoints;
	_energyPoints = NinjaTrap::_energyPoints;
	_maxEnergyPoints = NinjaTrap::_maxEnergyPoints;
	_level = 1;
	_meleeAttackDamage = NinjaTrap::_meleeAttackDamage;
	_rangedAttackDamage = FragTrap::_rangedAttackDamage;
	_armorDamageReduction = FragTrap::_armorDamageReduction;

	std::cout << "-> SUPER-TP " << _name << " is created" << std::endl;

}

SuperTrap::SuperTrap(std::string name): ClapTrap(name), FragTrap(), NinjaTrap() {
	_name = name;
	_hitPoints = FragTrap::_hitPoints;
	_maxHitPoints = FragTrap::_maxHitPoints;
	_energyPoints = NinjaTrap::_energyPoints;
	_maxEnergyPoints = NinjaTrap::_maxEnergyPoints;
	_level = 1;
	_meleeAttackDamage = NinjaTrap::_meleeAttackDamage;
	_rangedAttackDamage = FragTrap::_rangedAttackDamage;
	_armorDamageReduction = FragTrap::_armorDamageReduction;

	std::cout << "-> SUPER-TP " << _name << " is created" << std::endl;

	this->status();
}


SuperTrap::SuperTrap(SuperTrap const & src): ClapTrap(src), FragTrap(), NinjaTrap() {
	*this = src;

	std::cout << "-> SUPER-TP " << _name << " is created by copy" << std::endl;
}

SuperTrap::~SuperTrap() {
	std::cout << "-> SUPER-TP " << _name << " is deleted" << std::endl;
}

SuperTrap &		SuperTrap::operator=( SuperTrap const & src ) {
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


void		SuperTrap::rangedAttack(std::string const & target) {
	FragTrap::rangedAttack(target);
}
void		SuperTrap::meleeAttack(std::string const & target) {
	NinjaTrap::meleeAttack(target);
}

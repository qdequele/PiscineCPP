/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 09:30:01 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/11 16:52:54 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

const std::string 	FragTrap::_vaultHunterAttackName[] = {
	"Hyperion Reaper",
	"Hyperion Nemesis",
	"Torgue Violator",
	"Repeater",
	"Swatter"
};

const int 			FragTrap::_vaultHunterAttackDamage[] = {
	40, 35, 30, 25, 20
};
const int 			FragTrap::_vaultHunterAttackNb = 5;

FragTrap::FragTrap() {
	_hitPoints = 100;
	_maxHitPoints = 100;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
	std::cout << "-> FR4G-TP " << _name << " is created" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name) {
	_name = name;
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 100;
	_maxEnergyPoints = 100;
	_level = 1;
	_meleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;

	_vaulthunterCost = 25;

	std::cout << "-> FR4G-TP " << _name << " is created" << std::endl;

	this->status();
}


FragTrap::FragTrap(FragTrap const & src): ClapTrap(src) {
	*this = src;

	std::cout << "-> FR4G-TP " << _name << " is created by copy" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "-> FR4G-TP " << _name << " is deleted" << std::endl;
}

FragTrap &		FragTrap::operator=( FragTrap const & src ) {
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

void	FragTrap::rangedAttack(std::string const & target) {
	std::cout << _name << " say: " <<_getRandomQuote(ClapTrap::_hit, ClapTrap::_hitNb) << std::endl;

	std::cout << "-> FR4G-TP " << _name << " attacks " << target << " at range, causing " << _rangedAttackDamage << " points of damage !" << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target) {
	std::cout << _name << " say: " <<_getRandomQuote(FragTrap::_vaultHunter, FragTrap::_vaultHunterNb) << std::endl;

	if (_energyPoints - _vaulthunterCost < 0) {
		std::cout << _name << " say: Oops not enougth energy" << std::endl;
		return ;
	}

	int randNum = 0;
	randNum = rand() % (FragTrap::_vaultHunterAttackNb - 1) + 1;
	_energyPoints -= _vaulthunterCost;
	std::cout << "-> FR4G-TP " << _name << " attacks " << target << " with " << FragTrap::_vaultHunterAttackName[randNum] << ", causing " << FragTrap::_vaultHunterAttackDamage[randNum] << " points of damage !" << std::endl;

}

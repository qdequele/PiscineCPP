/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 09:30:01 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/12 10:00:34 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

const int 			FragTrap::_startingNb = 6;
const std::string	FragTrap::_starting[] = {
	"Hey everybody! Check out my package!",
	"Let's get this party started!",
	"Glitching weirdness is a term of endearment, right?",
	"Recompiling my combat code!",
	"This time it'll be awesome, I promise!",
	"Look out everybody! Things are about to get awesome!"
};

const int 			FragTrap::_healNb = 5;
const std::string	FragTrap::_heal[] = {
	"Health! Eww, what flavor is red?",
	"Health over here!",
	"Sweet life juice!",
	"I found health!",
	"Healsies!"
};

const int 			FragTrap::_ammoNb = 10;
const std::string	FragTrap::_ammo[] = {
	"Where'd all my bullets go?",
	"Bullets are dumb.",
	"Who needs ammo anyway, am I right?",
	"I need tiny death pellets!",
	"Need some ammo!",
	"Dangit, I'm out!",
	"Ammo reserves are spent!",
	"Crap, no more shots left!",
	"Hnngh! Empty!",
	"Coming up empty!"
};

const int 			FragTrap::_hitNb = 11;
const std::string	FragTrap::_hit[] = {
	"Step right up, to the Bulletnator 9000!",
	"I am a tornado of death and bullets!",
	"Stop me before I kill again, except don't!",
	"Hehehehe, mwaa ha ha ha, MWAA HA HA HA!",
	"I'm on a roll!",
	"Unts unts unts unts!",
	"Ha ha ha! Fall before your robot overlord!",
	"Can't touch this!",
	"Ha! Keep 'em coming!",
	"There is no way this ends badly!",
	"This is why I was built!"
};

const int 			FragTrap::_criticalHitNb = 15;
const std::string	FragTrap::_criticalHit[] = {
	"Flesh fireworks!",
	"Oh, quit falling to pieces.",
	"Is that what people look like inside?",
	"Ooh, squishy bits!",
	"Meat confetti!",
	"Huh, robot's don't do that.",
	"Exploded!",
	"Eww! Cool.",
	"Heh heh heh, squishy bits!",
	"Disgusting. I love it!",
	"Personfetti.",
	"There is now gunk on my chassis.",
	"Oooh! Gigabits!",
	"Ooooh! Terrabits!",
	"Meatsplosion!"
};

const int 			FragTrap::_vaultHunterNb = 25;
const std::string	FragTrap::_vaultHunter[] = {
	"This time it'll be awesome, I promise!",
	"Hey everybody, check out my package!",
	"Place your bets!",
	"Defragmenting!",
	"Recompiling my combat code!",
	"Running the sequencer!",
	"It's happening... it's happening!",
	"It's about to get magical!",
	"I'm pulling tricks outta my hat!",
	"You can't just program this level of excitement!",
	"What will he do next?",
	"Things are about to get awesome!",
	"Let's get this party started!",
	"Glitchy weirdness is term of endearment, right?",
	"Push this button, flip this dongle, voila! Help me!",
	"square the I, carry the 1... YES!",
	"Resequencing combat protocols!",
	"Look out everybody, things are about to get awesome!",
	"I have an IDEA!",
	"Round and around and around she goes!",
	"It's like a box of chocolates...",
	"Step right up to the sequence of Trapping!",
	"Hey everybody, check out my package!",
	"Loading combat packages!",
	"F to the R to the 4 to the G to the WHAAT!"
};

const int 			FragTrap::_diedNb = 23;
const std::string	FragTrap::_died[] = {
	"I'll stop talking when I'm dead!",
	"I'll die the way I lived: annoying!",
	"Come back here! I'll gnaw your legs off!",
	"This could've gone better!",
	"You look like something a skag barfed up!",
	"What's that smell? Oh wait, it's just you!",
	"Yo momma's so dumb, she couldn't think of a good ending for this 'yo momma' joke!",
	"You're one screw short of a screw!",
	"I bet your mom could do better!",
	"You look like something a skag barfed up!",
	"Oh yeah? Well, uh... yeah.",
	"What is that smell? Oh, never mind... it's just you!",
	"I'm leaking!",
	"Good thing I don't have a soul!",
	"Aww!",
	"Aww! Come on!",
	"You can't kill me!",
	"I'm too pretty to die!",
	"Crap!",
	"Robot down!",
	"No, nononono NO!",
	"I'll never go back to the bad place!",
	"I have many regrets!"
};

const int 			FragTrap::_levelUpNb = 3;
const std::string	FragTrap::_levelUp[] = {
	"Check me out!",
	"Now I will dominate!",
	"I'm so sexy!"
};

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

FragTrap::FragTrap()
	: _name() {
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 100;
	_maxEnergyPoints = 100;
	_level = 1;
	_meleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;

	_vaulthunterCost = 25;

	std::cout << _name << " say: " <<_getRandomQuote(FragTrap::_starting, FragTrap::_startingNb) << std::endl;

	std::cout << "-> FR4G-TP " << _name << " is created" << std::endl;

	this->status();
}

FragTrap::FragTrap(std::string name)
	: _name(name) {
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 100;
	_maxEnergyPoints = 100;
	_level = 1;
	_meleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;

	_vaulthunterCost = 25;

	std::cout << _name << " say: " <<_getRandomQuote(FragTrap::_starting, FragTrap::_startingNb) << std::endl;

	std::cout << "-> FR4G-TP " << _name << " is created" << std::endl;

	this->status();
}


FragTrap::FragTrap(FragTrap const & src) {
	*this = src;
	std::cout << _name << " say: " <<_getRandomQuote(FragTrap::_starting, FragTrap::_startingNb) << std::endl;

	std::cout << "-> FR4G-TP " << _name << " is created by copy" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << _name << " say: " <<_getRandomQuote(FragTrap::_died, FragTrap::_diedNb) << std::endl;
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
	std::cout << _name << " say: " <<_getRandomQuote(FragTrap::_hit, FragTrap::_hitNb) << std::endl;

	std::cout << "-> FR4G-TP " << _name << " attacks " << target << " at range, causing " << _rangedAttackDamage << " points of damage !" << std::endl;
}
void	FragTrap::meleeAttack(std::string const & target) {
	std::cout << _name << " say: " <<_getRandomQuote(FragTrap::_criticalHit, FragTrap::_criticalHitNb) << std::endl;

	std::cout << "-> FR4G-TP " << _name << " attacks " << target << " at range, causing " << _meleeAttackDamage << " points of damage !" << std::endl;
}
void	FragTrap::takeDamage(unsigned int amount) {

	int damage = ((int(amount) - _armorDamageReduction) > 0) ? int(amount) - _armorDamageReduction : 0;

	if (_hitPoints > 0) {
		std::cout << _name << " say: " <<_getRandomQuote(FragTrap::_ammo, FragTrap::_ammoNb) << std::endl;
	} else {
		std::cout << _name << " is already died" << std::endl;
		return ;
	}
	if ((_hitPoints - damage) <= 0) {
		_hitPoints = 0;
		std::cout << _name << " say: " <<_getRandomQuote(FragTrap::_died, FragTrap::_diedNb) << std::endl;
		std::cout << "-> FR4G-TP " << _name << " died" << std::endl;
	} else {
		_hitPoints -= damage;
		std::cout << "-> FR4G-TP " << _name << " loose " << damage << std::endl;
	}
}

void	FragTrap::beRepared(unsigned int amount) {

	if (_hitPoints == 0) {
		std::cout << _name << " is already died" << std::endl;
		return ;
	}
	if (_hitPoints >= _maxHitPoints) {
		std::cout << _name << " have nothing broken" << std::endl;
		return ;
	}
	std::cout << _name << " say: " <<_getRandomQuote(FragTrap::_heal, FragTrap::_healNb) << std::endl;
	int gain = (_maxHitPoints - _hitPoints < int(amount)) ? _maxHitPoints - _hitPoints : int(amount);
	_hitPoints += gain;
	std::cout << "-> FR4G-TP " << _name << " gain " << gain << " life points" << std::endl;
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

void	FragTrap::status() const {
	std::cout << "-----------------------------------------------" << std::endl;
	std::cout << "| " << _name << std::string(43 - _name.size(), ' ') << " |" << std::endl;
	std::cout << "-----------------------------------------------" << std::endl;
	std::cout << "| " << std::setw(30) << "Level" << " | " << std::setw(10) << _level << " |" << std::endl;
	std::cout << "| " << std::setw(30) << "Hit points" << " | " << std::setw(10) << _hitPoints << " |" << std::endl;
	std::cout << "| " << std::setw(30) << "Max hit points" << " | " << std::setw(10) << _maxHitPoints << " |" << std::endl;
	std::cout << "| " << std::setw(30) << "Energy points" << " | " << std::setw(10) << _energyPoints << " |" << std::endl;
	std::cout << "| " << std::setw(30) << "max energy points" << " | " << std::setw(10) << _maxEnergyPoints << " |" << std::endl;
	std::cout << "| " << std::setw(30) << "Melee attack damage" << " | " << std::setw(10) << _meleeAttackDamage << " |" << std::endl;
	std::cout << "| " << std::setw(30) << "Ranged attack damage" << " | " << std::setw(10) << _rangedAttackDamage << " |" << std::endl;
	std::cout << "| " << std::setw(30) << "Armor damage reduction" << " | " << std::setw(10) << _armorDamageReduction << " |" << std::endl;
	std::cout << "-----------------------------------------------" << std::endl;
}

std::string FragTrap::_getRandomQuote(std::string const quotes[], int size) const {
	int randNum = 0;
	randNum = rand() % (size - 1) + 1;
	return "\" " + quotes[randNum] + " \"";
}

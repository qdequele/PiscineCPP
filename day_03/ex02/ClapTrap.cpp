/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 09:30:01 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/12 09:59:11 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

const int 			ClapTrap::_startingNb = 6;
const std::string	ClapTrap::_starting[] = {
	"Hey everybody! Check out my package!",
	"Let's get this party started!",
	"Glitching weirdness is a term of endearment, right?",
	"Recompiling my combat code!",
	"This time it'll be awesome, I promise!",
	"Look out everybody! Things are about to get awesome!"
};

const int 			ClapTrap::_healNb = 5;
const std::string	ClapTrap::_heal[] = {
	"Health! Eww, what flavor is red?",
	"Health over here!",
	"Sweet life juice!",
	"I found health!",
	"Healsies!"
};

const int 			ClapTrap::_ammoNb = 10;
const std::string	ClapTrap::_ammo[] = {
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

const int 			ClapTrap::_hitNb = 11;
const std::string	ClapTrap::_hit[] = {
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

const int 			ClapTrap::_criticalHitNb = 15;
const std::string	ClapTrap::_criticalHit[] = {
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

const int 			ClapTrap::_vaultHunterNb = 25;
const std::string	ClapTrap::_vaultHunter[] = {
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

const int 			ClapTrap::_diedNb = 23;
const std::string	ClapTrap::_died[] = {
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

const int 			ClapTrap::_levelUpNb = 3;
const std::string	ClapTrap::_levelUp[] = {
	"Check me out!",
	"Now I will dominate!",
	"I'm so sexy!"
};

ClapTrap::ClapTrap()
	: _name() {
	_hitPoints = 0;
	_maxHitPoints = 0;
	_energyPoints = 0;
	_maxEnergyPoints = 0;
	_level = 1;
	_meleeAttackDamage = 0;
	_rangedAttackDamage = 0;
	_armorDamageReduction = 0;

	std::cout << _name << " say: " <<_getRandomQuote(ClapTrap::_starting, ClapTrap::_startingNb) << std::endl;

	std::cout << "-> CL4P-TP " << _name << " is created" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
	: _name(name) {
	_hitPoints = 0;
	_maxHitPoints = 0;
	_energyPoints = 0;
	_maxEnergyPoints = 0;
	_level = 1;
	_meleeAttackDamage = 0;
	_rangedAttackDamage = 0;
	_armorDamageReduction = 0;

	std::cout << _name << " say: " <<_getRandomQuote(ClapTrap::_starting, ClapTrap::_startingNb) << std::endl;

	std::cout << "-> CL4P-TP " << _name << " is created" << std::endl;
}


ClapTrap::ClapTrap(ClapTrap const & src) {
	*this = src;
	std::cout << _name << " say: " <<_getRandomQuote(ClapTrap::_starting, ClapTrap::_startingNb) << std::endl;

	std::cout << "-> CL4P-TP " << _name << " is created by copy" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << _name << " say: " <<_getRandomQuote(ClapTrap::_died, ClapTrap::_diedNb) << std::endl;
	std::cout << "-> CL4P-TP " << _name << " is deleted" << std::endl;
}

ClapTrap &		ClapTrap::operator=( ClapTrap const & src ) {
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

void	ClapTrap::rangedAttack(std::string const & target) {
	std::cout << _name << " say: " <<_getRandomQuote(ClapTrap::_hit, ClapTrap::_hitNb) << std::endl;

	std::cout << "-> CL4P-TP " << _name << " attacks " << target << " at range, causing " << _rangedAttackDamage << " points of damage !" << std::endl;
}
void	ClapTrap::meleeAttack(std::string const & target) {
	std::cout << _name << " say: " <<_getRandomQuote(ClapTrap::_criticalHit, ClapTrap::_criticalHitNb) << std::endl;

	std::cout << "-> CL4P-TP " << _name << " attacks " << target << " at range, causing " << _meleeAttackDamage << " points of damage !" << std::endl;
}
void	ClapTrap::takeDamage(unsigned int amount) {

	int damage = ((int(amount) - _armorDamageReduction) > 0) ? int(amount) - _armorDamageReduction : 0;

	if (_hitPoints > 0) {
		std::cout << _name << " say: " <<_getRandomQuote(ClapTrap::_ammo, ClapTrap::_ammoNb) << std::endl;
	} else {
		std::cout << _name << " is already died" << std::endl;
		return ;
	}
	if ((_hitPoints - damage) <= 0) {
		_hitPoints = 0;
		std::cout << _name << " say: " <<_getRandomQuote(ClapTrap::_died, ClapTrap::_diedNb) << std::endl;
		std::cout << "-> CL4P-TP " << _name << " died" << std::endl;
	} else {
		_hitPoints -= damage;
		std::cout << "-> CL4P-TP " << _name << " loose " << damage << std::endl;
	}
}

void	ClapTrap::beRepared(unsigned int amount) {

	if (_hitPoints == 0) {
		std::cout << _name << " is already died" << std::endl;
		return ;
	}
	if (_hitPoints >= _maxHitPoints) {
		std::cout << _name << " have nothing broken" << std::endl;
		return ;
	}
	std::cout << _name << " say: " <<_getRandomQuote(ClapTrap::_heal, ClapTrap::_healNb) << std::endl;
	int gain = (_maxHitPoints - _hitPoints < int(amount)) ? _maxHitPoints - _hitPoints : int(amount);
	_hitPoints += gain;
	std::cout << "-> CL4P-TP " << _name << " gain " << gain << " life points" << std::endl;
}

void	ClapTrap::status() const {
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

std::string ClapTrap::_getRandomQuote(std::string const quotes[], int size) const {
	int randNum = 0;
	randNum = rand() % (size - 1) + 1;
	return "\" " + quotes[randNum] + " \"";
}

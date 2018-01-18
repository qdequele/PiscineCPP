/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 14:21:26 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/12 10:00:53 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

# include <iostream>
# include <iomanip>

class ScavTrap {
	private:

		static const std::string 	_starting[];
		static const int 			_startingNb;
		static const std::string 	_heal[];
		static const int 			_healNb;
		static const std::string 	_ammo[];
		static const int 			_ammoNb;
		static const std::string 	_hit[];
		static const int 			_hitNb;
		static const std::string 	_criticalHit[];
		static const int 			_criticalHitNb;
		static const std::string 	_died[];
		static const int 			_diedNb;
		static const std::string 	_levelUp[];
		static const int 			_levelUpNb;

		static const std::string 	_missionsName[];
		static const int 			_missionsNb;

		int			_hitPoints;
		int			_maxHitPoints;
		int			_energyPoints;
		int			_maxEnergyPoints;
		int			_level;

		std::string	_name;

		int			_meleeAttackDamage;
		int			_rangedAttackDamage;
		int			_armorDamageReduction;

		std::string	_getRandomQuote(std::string const quotes[], int size) const;

	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & src);
		~ScavTrap();

		ScavTrap &		operator=( ScavTrap const & src );

		void		rangedAttack(std::string const & target);
		void		meleeAttack(std::string const & target);
		void		takeDamage(unsigned int amount);
		void		beRepared(unsigned int amount);

		void		challengeNewcomer();

		void		status() const;

};

#endif

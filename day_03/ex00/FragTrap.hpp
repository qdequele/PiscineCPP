/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 09:29:53 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/12 10:01:19 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include <iostream>
# include <iomanip>

class FragTrap {
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
		static const std::string 	_vaultHunter[];
		static const int 			_vaultHunterNb;
		static const std::string 	_died[];
		static const int 			_diedNb;
		static const std::string 	_levelUp[];
		static const int 			_levelUpNb;

		static const std::string 	_vaultHunterAttackName[];
		static const int 			_vaultHunterAttackDamage[];
		static const int 			_vaultHunterAttackNb;

		int			_hitPoints;
		int			_maxHitPoints;
		int			_energyPoints;
		int			_maxEnergyPoints;
		int			_level;

		std::string	_name;

		int			_meleeAttackDamage;
		int			_rangedAttackDamage;
		int			_armorDamageReduction;

		int			_vaulthunterCost;

		std::string	_getRandomQuote(std::string const quotes[], int size) const;

	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const & src);
		~FragTrap();

		FragTrap &		operator=( FragTrap const & src );

		void		rangedAttack(std::string const & target);
		void		meleeAttack(std::string const & target);
		void		takeDamage(unsigned int amount);
		void		beRepared(unsigned int amount);

		void		vaulthunter_dot_exe(std::string const & target);

		void		status() const;

};

#endif

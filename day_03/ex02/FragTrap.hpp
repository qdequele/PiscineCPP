/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 09:29:53 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/12 09:59:18 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include <iostream>
# include <iomanip>

# include "ClapTrap.hpp"

class FragTrap: public ClapTrap {
	private:

		static const std::string 	_vaultHunterAttackName[];
		static const int 			_vaultHunterAttackDamage[];
		static const int 			_vaultHunterAttackNb;

		int			_vaulthunterCost;

	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const & src);
		~FragTrap();

		FragTrap &		operator=( FragTrap const & src );

		void		vaulthunter_dot_exe(std::string const & target);

};

#endif

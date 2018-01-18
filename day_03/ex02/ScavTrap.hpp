/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 14:21:26 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/12 09:59:43 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

# include <iostream>
# include <iomanip>
# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
	private:

		static const std::string 	_missionsName[];
		static const int 			_missionsNb;

	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & src);
		~ScavTrap();

		ScavTrap &		operator=( ScavTrap const & src );

		void		challengeNewcomer();

};

#endif

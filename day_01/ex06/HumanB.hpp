/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 13:13:48 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/09 13:43:39 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

# include <string>
# include <iostream>

# include "Weapon.hpp"

class HumanB {
	private:
		Weapon		*_weapon;
		std::string	_name;

	public:
		HumanB(std::string name, Weapon& weapon);
		HumanB(std::string name);
		~HumanB();

		void attack();
		void setWeapon(Weapon& weapon);
};

#endif

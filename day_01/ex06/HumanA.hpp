/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 13:12:03 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/09 13:44:38 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

# include <string>
# include <iostream>

# include "Weapon.hpp"

class HumanA {
	private:
		Weapon		*_weapon;
		std::string	_name;

	public:
		HumanA(std::string name, Weapon& weapon);
		HumanA(std::string name);
		~HumanA();

		void attack();
		void setWeapon(Weapon& weapon);
};

#endif

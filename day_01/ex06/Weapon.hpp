/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 13:13:55 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/09 13:25:36 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

class Weapon {
	private:
		std::string _type;
	public:
		Weapon(std::string type);
		~Weapon();

		std::string	getType();
		void		setType(std::string type);
};

#endif

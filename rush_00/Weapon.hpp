/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 13:30:56 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/14 20:52:04 by kwiessle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

# include "Bullet.hpp"

class Weapon {
	protected:
		std::string _name;
		int			_damage;
		int			_icon;
		int			_color;
		int 		_speed;

	public:
		Weapon();
		Weapon(std::string name, int damage, int icon, int color, int speed);
		Weapon(Weapon const & src);
		~Weapon();

		Weapon &			operator=( Weapon const & rhs );

		Bullet*				shoot(int posX, int posY);
};

#endif

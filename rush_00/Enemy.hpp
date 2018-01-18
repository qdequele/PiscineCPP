/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwiessle <kwiessle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/14 19:26:31 by kwiessle          #+#    #+#             */
/*   Updated: 2018/01/14 20:10:00 by kwiessle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>
# include <string>

# include "Object.hpp"
# include "Weapon.hpp"
# include "Bullet.hpp"

class Enemy: public Object {

	private:
		Weapon*		_weapon;

	public:
		Enemy();
		Enemy(Enemy const & src);
		Enemy(int x, int y, int icon, int speed, int color, int lifepoint);
		~Enemy();

		Enemy &			operator=( Enemy const & rhs );
		bool				operator==( Enemy const & src );

		void				move();
		// void				move(Direction d);
		Bullet*				shoot();
};

#endif

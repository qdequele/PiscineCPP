/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Spaceship.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 13:27:37 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/14 11:28:47 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPACESHIP_HPP
# define SPACESHIP_HPP

# include <iostream>
# include <string>

# include "Object.hpp"
# include "Weapon.hpp"
# include "Bullet.hpp"

enum Direction { top, bottom, left, right };

class Spaceship: public Object {

	private:
		Weapon*		_weapon;

	public:
		Spaceship();
		Spaceship(Spaceship const & src);
		~Spaceship();

		Spaceship &			operator=( Spaceship const & rhs );
		bool				operator==( Spaceship const & src );

		void				move();
		void				move(Direction d);
		Bullet*				shoot();
};

#endif

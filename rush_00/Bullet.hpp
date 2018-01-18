/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bullet.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 13:36:02 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/14 20:53:03 by kwiessle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BULLET_HPP
# define BULLET_HPP

# include <iostream>
# include <string>

#include "Object.hpp"

class Bullet: public Object {

	public:
		Bullet();
		Bullet(int icon, int damage, int color, int posX, int posY, int speed);
		Bullet(Bullet const & src);
		~Bullet();

		Bullet &			operator=( Bullet const & rhs );

		void				move();
};

#endif

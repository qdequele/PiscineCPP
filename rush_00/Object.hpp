/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Object.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 11:18:35 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/14 16:16:34 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OBJECT_HPP
# define OBJECT_HPP

# include <iostream>
# include <string>
# include <ncurses.h>

class Object {

	protected:
		int			_speed;
		int			_posX;
		int			_posY;
		int			_icon;
		int			_color;
		int			_hp;
		int			_damage;

		int		_getRandomLine() const;

	public:
		Object();
		Object(Object const & src);
		Object(int x, int y, int icon, int speed, int color, int hp);
		~Object();

		Object &			operator=( Object const & rhs );
		bool				operator==( Object const & rhs );

		void	move();
		int		takeDamage( int damage);

		int		getDamage() const;

		void 	description() const;
		int		getPosX(void) const;
		int 	getPosY(void) const;
		int 	getIcon(void) const;
		int		getColor(void) const;
		int		getHP(void) const;
};

#endif

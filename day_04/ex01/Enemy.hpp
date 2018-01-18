/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 13:53:23 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/12 18:08:20 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>
# include <string>

class Enemy {
	private:
		int			_hp;
		std::string	_type;

	public:
		Enemy();
		Enemy(int hp, std::string const & type);
		Enemy(Enemy const & src);
		virtual ~Enemy();

		Enemy &			operator =	( Enemy const & rhs );

		std::string	const &	getType() const;
		int 				getHP() const;

		virtual void	takeDamage(int);
};

std::ostream & operator<<( std::ostream & o, Enemy const & src);

#endif

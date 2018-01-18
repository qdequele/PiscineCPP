/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 13:52:57 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/12 16:40:52 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character {
	private:
		std::string	_name;
		int			_ap;
		AWeapon*	_weapon;

	public:
		Character();
		Character(std::string const & name);
		Character(Character const & src);
		~Character();

		Character &		operator =	( Character const & rhs );
		void			recoverAP();
		void			equip(AWeapon*);
		void			attack(Enemy*);

		std::string		getName() const;
		int				getAP() const;
		AWeapon*		getWeapon() const;

};

std::ostream & operator<<( std::ostream & o, Character const & src);

#endif

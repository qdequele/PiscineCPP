/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 13:52:23 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/12 17:49:47 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>
# include <string>

class AWeapon {
	private:
		std::string	_name;
		int			_apcost;
		int			_damage;

	public:
		AWeapon();
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon(AWeapon const & src);
		virtual ~AWeapon();

		AWeapon &			operator=( AWeapon const & rhs );

		virtual void 		attack() const = 0;

		std::string	const &	getName() const;
		int 				getAPCost() const;
		int 				getDamage() const;
	};

#endif

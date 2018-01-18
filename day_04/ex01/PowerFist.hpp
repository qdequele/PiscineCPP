/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 13:54:19 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/12 15:26:58 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWER_FIST_HPP
# define POWER_FIST_HPP

# include <iostream>
# include <string>

#include "AWeapon.hpp"

class PowerFist: public AWeapon {

	public:
		PowerFist();
		PowerFist(PowerFist const & src);
		~PowerFist();

		PowerFist &			operator =	( PowerFist const & rhs );

		void 		attack() const;
};

#endif

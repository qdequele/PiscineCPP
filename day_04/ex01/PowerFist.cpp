/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 13:57:24 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/12 17:30:28 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(): AWeapon("Power Fist", 8, 50) {
}

PowerFist::PowerFist(PowerFist const & src) {
	*this = src;
}

PowerFist::~PowerFist() {
}

PowerFist &		PowerFist::operator=( PowerFist const & src ) {
	if ( this != &src ) {
		//do something
	}
	return *this;
}

void 		PowerFist::attack() const {
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

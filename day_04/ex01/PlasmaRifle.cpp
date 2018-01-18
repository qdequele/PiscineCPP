/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 13:57:04 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/12 17:30:32 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(): AWeapon("Plasma Rifle", 5, 21) {
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & src) {
	*this = src;
}

PlasmaRifle::~PlasmaRifle() {
}

PlasmaRifle &		PlasmaRifle::operator=( PlasmaRifle const & src ) {
	if ( this != &src ) {
	}
	return *this;
}

void 		PlasmaRifle::attack() const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

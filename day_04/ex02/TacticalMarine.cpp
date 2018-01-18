/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 18:16:17 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/12 19:10:15 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine() {
	std::cout << "Tactical Marine ready for battle" << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const & src) {
	*this = src;
	std::cout << "Tactical Marine ready for battle" << std::endl;
}

TacticalMarine::~TacticalMarine() {
	std::cout << "Aaargh ..." << std::endl;
}

TacticalMarine &		TacticalMarine::operator=( TacticalMarine const & src ) {
	if ( this != &src ) {

	}
	return *this;
}

ISpaceMarine* 	TacticalMarine::clone() const {
	return new TacticalMarine(*this);
}

void 			TacticalMarine::battleCry() const {
	std::cout << "For the holy PLOT !" << std::endl;
}

void 			TacticalMarine::rangedAttack() const {
	std::cout << "“* attacks with bolter *" << std::endl;
}

void 			TacticalMarine::meleeAttack() const {
	std::cout << "* attacks with chainsword *" << std::endl;
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 10:59:41 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/12 13:24:48 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(): Victim("noname") {
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(std::string name): Victim(name) {
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const & src) {
	*this = src;
}

Peon::~Peon() {
	std::cout << "Bleuark.." << std::endl;
}

Peon &		Peon::operator=( Peon const & src ) {
	if ( this != &src ) {
		_name = src._name;
	}
	return *this;
}

void 			Peon::getPolymorphed() const {
	std::cout << _name << " has been turned into a pink pony !" << std::endl;
}

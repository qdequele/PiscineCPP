/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peonne.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 13:40:55 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/12 13:43:07 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peonne.hpp"

Peonne::Peonne(): Victim("noname") {
	std::cout << "Zig zig." << std::endl;
}

Peonne::Peonne(std::string name): Victim(name) {
	std::cout << "Zig zig." << std::endl;
}

Peonne::Peonne(Peonne const & src) {
	*this = src;
}

Peonne::~Peonne() {
	std::cout << "Haouuuuu.." << std::endl;
}

Peonne &		Peonne::operator=( Peonne const & src ) {
	if ( this != &src ) {
		_name = src._name;
	}
	return *this;
}

void 			Peonne::getPolymorphed() const {
	std::cout << _name << " has been turned into a dog !" << std::endl;
}

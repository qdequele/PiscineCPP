/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 11:10:02 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/12 12:53:00 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim() : _name("noname") {
	std::cout << "Some random victim called " << _name << " just popped !" << std::endl;
}

Victim::Victim(std::string name) : _name(name) {
	std::cout << "Some random victim called " << _name << " just popped !" << std::endl;
}

Victim::Victim(Victim const & src) {
	*this = src;
}

Victim::~Victim() {
	std::cout << "Victim " << _name << " just died for no apparent reason !" << std::endl;
}

Victim &		Victim::operator=( Victim const & src ) {
	if ( this != &src ) {
		_name = src._name;
	}
	return *this;
}

std::string		Victim::introduce() const {
	return "I am " + _name + " and I like otters !";
}

void 			Victim::getPolymorphed() const {
	std::cout << _name << " has been turned into a cute little sheep !" << std::endl;
}

std::ostream & operator<<( std::ostream & o, Victim const & f) {
	o << f.introduce() << std::endl;
	return o;
}

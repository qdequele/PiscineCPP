/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 11:09:22 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/12 12:53:44 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
	: _name("noname"), _title("notitle") {
	std::cout << _name << ", " << _title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(std::string name, std::string title)
	: _name(name), _title(title) {
		std::cout << _name << ", " << _title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const & src) {
	*this = src;
}

Sorcerer::~Sorcerer() {
	std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same !" << std::endl;
}

Sorcerer &		Sorcerer::operator=( Sorcerer const & src ) {
	if ( this != &src ) {
		_name = src._name;
		_title = src._title;
	}
	return *this;
}

std::string		Sorcerer::introduce() const {
	return "I am " + _name + ", " + _title + ", and I like ponies !";
}

void 			Sorcerer::polymorph(Victim const & src) const {
	src.getPolymorphed();
}


std::ostream & operator<<( std::ostream & o, Sorcerer const & f) {
	o << f.introduce() << std::endl;
	return o;
}

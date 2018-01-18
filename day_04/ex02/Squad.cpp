/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 18:16:03 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/12 20:03:51 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(): _nbMember(0) {}

Squad::Squad(Squad const & src) {

	for (int i = 0; i < _nbMember; i++) {
		delete _crew[i];
	}

	_nbMember = src.getCount();

	for (int i = 0; i < _nbMember; i++) {
		_crew[i] = src.getUnit(i)->clone();
	}
}

Squad::~Squad() {

	for (int i = 0; i < _nbMember; i++) {
		delete _crew[i];
	}
}

Squad &		Squad::operator=( Squad const & src ) {
	if ( this != &src ) {
		*_crew = *(src._crew);
		_nbMember = src._nbMember;
	}
	return *this;
}
int 			Squad::getCount() const {
	return _nbMember;
}

ISpaceMarine* 	Squad::getUnit(int n) const {
	if (n > _nbMember || _crew[n] == nullptr) {
		std::cout << "Not enought units in this Squad" << n << std::endl;
		return nullptr;
	}
	return _crew[n];
}

int 			Squad::push(ISpaceMarine* src) {
	if (_nbMember == 19) {
		std::cout << "We have reached the maximum of mumber in this squad" << std::endl;
		return 20;
	}
	for (int i = 0; i < _nbMember; i++) {
		if (_crew[i] == src) {
			std::cout << "This Space Marine was already in the squad" << std::endl;
			return _nbMember;
		}
	}
	if (src != nullptr) {
		_crew[_nbMember] = src;
		_nbMember++;
		return _nbMember ;
	} else {
		std::cout << "Impossible this is no a Space Marine" << std::endl;
	}
	return _nbMember;
}


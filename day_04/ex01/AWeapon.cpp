/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 13:55:49 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/12 17:53:34 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon() {
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
	: _name(name), _apcost(apcost), _damage(damage) {

}

AWeapon::AWeapon(AWeapon const & src) {
	*this = src;
}

AWeapon::~AWeapon() {
}

AWeapon &		AWeapon::operator=( AWeapon const & src ) {
	if ( this != &src ) {
		_name = src._name;
		_damage = src._damage;
		_apcost = src._apcost;
	}
	return *this;
}


std::string	const &	AWeapon::getName() const {
	return _name;
}

int 				AWeapon::getAPCost() const {
	return _apcost;
}

int 				AWeapon::getDamage() const {
	return _damage;
}

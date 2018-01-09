/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 13:14:20 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/09 13:25:53 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
	: _type(type) {}

Weapon::~Weapon() {}

std::string Weapon::getType() {
	return this->_type;
}

void		Weapon::setType(std::string type) {
	this->_type = type;
}

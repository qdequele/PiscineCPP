/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 09:52:28 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/09 10:41:49 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type)
	: _name(name), _type(type) {

	std::cout << "Zombie " << this->_name << " approach" << std::endl;
}

Zombie::~Zombie() {
	std::cout << "Zombie " << this->_name << " died, again..." << std::endl;
}

void Zombie::announce() {
	std::cout << "<" << this->_name << " (" << this->_type<< ")> Braiiiiiiinnnssss..." << std::endl;
}
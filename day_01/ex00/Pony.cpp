/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 09:25:08 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/09 09:42:26 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name, int age, int size, std::string color)
	: _name(name), _age(age), _size(size), _color(color) {
		std::cout << name << " - age: " << age << " - size: " << size << " - color: " << color << " was created" << std::endl;
	}

Pony::~Pony() {
	std::cout << this->_name  << " - age: " << this->_age << " - size: " << this->_size << " - color: " << this->_color <<" was deleted" << std::endl;
}
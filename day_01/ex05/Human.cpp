/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 12:33:25 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/09 13:08:53 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human() {
	std::cout << "Human created" << std::endl;
	this->brain = new Brain();
	this->brain->setMem(this->brain);
}

Human::~Human() {
	delete brain;
	std::cout << "Human deleted" << std::endl;
}

std::string	Human::identify() {
	return this->brain->identify();
}

Brain& Human::getBrain(){
	return *this->brain;
}
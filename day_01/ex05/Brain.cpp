/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 12:33:11 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/09 13:03:39 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain created" << std::endl;
}

Brain::~Brain() {
	std::cout << "Brain deleted" << std::endl;
}

std::string	Brain::identify() {
	std::stringstream	ss;
	std::string			string;

	ss << this->mem;
	ss >> string;
	return string;
}

void	Brain::setMem(void *addr) {
	this->mem = addr;
}
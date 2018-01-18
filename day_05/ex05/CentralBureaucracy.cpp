/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CentralBureaucracy.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 19:12:46 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/15 19:34:00 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CentralBureaucracy.hpp"

CentralBureaucracy::CentralBureaucracy() {
	for (int i = 0; i < 20; i++) {
		_offices[i] = new OfficeBlock();
		Intern intern = new Intern();
		_offices[i]->setIntern(intern);
	}
}

CentralBureaucracy::CentralBureaucracy(std::string target) {

}

CentralBureaucracy::CentralBureaucracy(CentralBureaucracy const & src) {
	*this = src;
}

CentralBureaucracy::~CentralBureaucracy() {

}

CentralBureaucracy &			CentralBureaucracy::operator=( CentralBureaucracy const & rhs ) {
	if ( this != &rhs ) {
		Form::operator=(rhs);
	}
	return *this;
}

void				addAgent(Bureaucrat* agent) {
	for (int i = 0; i < 20; i++) {
		if (!_offices[i]->haveSigner()) {
			_offices[i]->setSigner(agent);
			return;
		} else if (!_offices[i]->haveExecutor()) {
			!_offices[i]->setExecutor();
			return;
		}
	}
	for (int i = 0; i < 10; i++) {
		if (_waitingAgents[i] == nullptr) {
			_waitingAgents[i] = agent;
			return;
		}
	}
}

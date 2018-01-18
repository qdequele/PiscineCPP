/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Request.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 19:39:00 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/15 19:45:23 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Request.hpp"

Request::Request(std::string name, std::string target)
	:_name(name), _target(target) {

}

Request::Request(Request const & src) {
	_name = src.getName();
	_target = src.getTarget();
}

Request::~Request() {

}


Request &			Request::operator=( Request const & rhs ) {
	if ( this != &rhs ) {
		_name = rhs.getName();
		_target = rhs.gettarget();
	}
	return *this;
}

bool				Request::operator==( Request const & src) {
	if (_name == src.getName() && _target == src.getTarget()) {
		return true;
	}
	return false;
}

std::string			Request::getName() {
	return _name;
}

std::string			Request::getTarget() {
	return _target;
}

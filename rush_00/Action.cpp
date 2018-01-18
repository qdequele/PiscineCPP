/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Action.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/14 13:54:09 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/14 14:41:58 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Action.hpp"

Action::Action() {
	_refTimer = _getMilliCount();
	_newTimer = _getMilliCount();
	_diffTime = 1000;
}

Action::Action(int diff): _diffTime(diff){
	_refTimer = _getMilliCount();
}

Action::Action(Action const & src) {
	*this = src;
}

Action::~Action() {
}

Action &		Action::operator=( Action const & src ) {
	if ( this != &src ) {
		//do something
	}
	return *this;
}


int 		Action::_getMilliCount() {
	timeb tb;
	ftime(&tb);
	int nCount = tb.millitm + (tb.time & 0xfffff) * 1000;
	return nCount;
}


bool		Action::update() {
	_newTimer = _getMilliCount();
	if (difftime(_newTimer, _refTimer) > _diffTime) {
		_refTimer = _getMilliCount();
		_newTimer = _getMilliCount();
		return true;
	}
	return false;
}

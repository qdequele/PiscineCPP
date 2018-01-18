/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 17:08:55 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/15 19:25:03 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "OfficeBlock.hpp"

OfficeBlock::OfficeBlock()
	: _intern(nullptr), _signinBureaucrat(nullptr), _executiveBureaucrat(nullptr) {
}

OfficeBlock::OfficeBlock(Intern* intern, Bureaucrat* sb, Bureaucrat* eb)
	: _intern(intern), _signinBureaucrat(sb), _executiveBureaucrat(eb) {
}

OfficeBlock::~OfficeBlock() {

}

const char* OfficeBlock::PeopleOnVacationException::what() const throw() {
	return "Some people on office are missing. They are probably on vacation";
}

void				OfficeBlock::doBureaucracy(std::string name, std::string target) {

	if ( _intern == nullptr || _signinBureaucrat == nullptr || _executiveBureaucrat == nullptr ) {
		throw OfficeBlock::PeopleOnVacationException();
	} else {
		Form* form = _intern->makeForm(name, target);
		if (form == nullptr) {
			std::cout << "The intern is an asshole. He didn't found the right form" << std::endl;
			return;
		}
		_signinBureaucrat->signForm(*form);
		if (!form->getIsSigned()) {
			std::cout << "A non-signed form cannot be executed" << std::endl;
			return;
		}
		_executiveBureaucrat->executeForm(*form);
	}
}

void				OfficeBlock::setIntern(Intern * intern) {
	_intern = intern;
}

void				OfficeBlock::setSigner(Bureaucrat * bureaucrat) {
	_signinBureaucrat = bureaucrat;
}

void				OfficeBlock::setExecutor(Bureaucrat * bureaucrat) {
	_executiveBureaucrat = bureaucrat;
}

bool				OfficeBlock::haveSigner() {
	if (_signinBureaucrat == nullptr) {
		return false;
	}
	return true;
}

bool				OfficeBlock::haveExecutor() {
	if (_executiveBureaucrat == nullptr) {
		return false;
	}
	return true;
}


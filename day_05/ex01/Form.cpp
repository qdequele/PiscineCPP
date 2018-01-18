/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 11:38:58 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/15 13:11:11 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()
	: _name("noname"), _gradeSign(150), _gradeUse(150), _signed(false) {
}

Form::Form(std::string name, int gradeToSign, int gradeToUse)
	: _name(name), _gradeSign(gradeToSign), _gradeUse(gradeToUse), _signed(false) {

	if (gradeToSign < 1 || gradeToUse < 1) {
		throw Form::GradeTooHighException();
	} else if (gradeToSign > 150 || gradeToUse > 150){
		throw Form::GradeTooLowException();
	}

}

Form::Form(Form const & src)
	: _name(src.getName()),
	_gradeSign(src.getGradeToSign()),
	_gradeUse(src.getGradeToExecute()),
	_signed(src.getIsSigned()) {
	*this = src;
}

Form::~Form() {
}

Form &		Form::operator=( Form const & src ) {
	if ( this != &src ) {
		//do something
	}
	return *this;
}

/*
 * EXCEPTION
*/

const char* Form::GradeTooHighException::what() const throw() {
	return ("The Grade is too high.");
}

const char* Form::GradeTooLowException::what() const throw() {
	return ("The Grade is too low.");
}

/*
 * GETTERS
*/

const std::string		Form::getName() const {
	return _name;
}

int						Form::getGradeToSign() const {
	return _gradeSign;
}

int						Form::getGradeToExecute() const {
	return _gradeUse;
}

bool					Form::getIsSigned() const {
	return _signed;
}

/*
 * SETTERS
*/

void					Form::beSigned(Bureaucrat& b) {
	if (b.getGrade() > _gradeSign) {
		throw Form::GradeTooLowException();
	} else {
		_signed = true;
	}
}

/*
 * EXTERNAL OVERLORD
*/


std::ostream & operator<<( std::ostream & o, Form const & f) {
	std::string isSigned = (f.getIsSigned()) ? ". Is signed" : ". Is not signed";
	o << f.getName() << " must be sign by grade : " << f.getGradeToSign() << " or mode and must be executed by grade : " << f.getGradeToExecute() << isSigned;
	return o;
}

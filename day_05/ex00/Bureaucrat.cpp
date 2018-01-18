/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 10:58:22 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/15 11:33:37 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*
 * COMPLIANCE FORM CONSTRUCTOR / DESTRUCTOR
*/

Bureaucrat::Bureaucrat()
	: _name("noname"), _grade(150) {

}

Bureaucrat::Bureaucrat(std::string name, int grade)
	: _name(name) {

	if (grade < 1) {
		throw Bureaucrat::GradeTooHighException();
	} else if (grade > 150){
		throw Bureaucrat::GradeTooLowException();
	} else {
		_grade = grade;
	}

}

Bureaucrat::Bureaucrat(Bureaucrat const & src) {
	*this = src;
}

Bureaucrat::~Bureaucrat() {
}

Bureaucrat &		Bureaucrat::operator=( Bureaucrat const & src ) {
	if ( this != &src ) {
		//do something
	}
	return *this;
}

/*
 * EXCEPTION
*/

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Err: The Grade is too high. Please enter a grade between 1 and 150");
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Err: The Grade is too low. Please enter a grade between 1 and 150");
}

/*
 * GETTERS
*/

const std::string	Bureaucrat::getName() const {
	return _name;
}

int					Bureaucrat::getGrade() const {
	return _grade;
}


/*
 * SETTERS
*/

void				Bureaucrat::upgrade() {
	if (_grade - 1 < 1) {
		throw Bureaucrat::GradeTooHighException();
	} else {
		_grade--;
	}
}

void				Bureaucrat::downgrade() {
	if (_grade + 1 > 150) {
		throw Bureaucrat::GradeTooLowException();
	} else {
		_grade++;
	}
}

/*
 * EXTERNAL OVERLORD
*/


std::ostream & operator<<( std::ostream & o, Bureaucrat const & f) {
	o << f.getName() << ", bureaucrat grade " << f.getGrade() << ".";
	return o;
}


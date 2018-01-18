/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 15:52:32 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/15 17:04:41 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Intern.hpp"

Intern::Intern() {

}

Intern::Intern(Intern const & src) {
	*this = src;
}

Intern::~Intern() {

}

Intern &			Intern::operator=( Intern const & rhs ) {
	if ( this != &rhs ) {
	}
	return *this;
}


Form *				Intern::makeForm(std::string name, std::string target) {
	Form*	form = nullptr;
	if (name == "presidential pardon") {
		form = new PresidentialPardonForm(target);
	} else if (name == "robotomy request") {
		form = new RobotomyRequestForm(target);
	} else if (name == "shrubbery creation") {
		form = new ShrubberyCreationForm(target);
	}

	if (form == nullptr) {
		std::cout << "Form \"" << name << "\" not found" << std::endl;
	} else {
		std::cout << "Intern creates " << form->getName() << std::endl;
	}

	return form;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 13:14:56 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/15 15:34:49 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
	: Form(), _target("notarget") {

}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: Form("Presidential Pardon Form", 25, 5), _target(target) {

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) {
	*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm() {

}

PresidentialPardonForm &			PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs ) {
	if ( this != &rhs ) {
		Form::operator=(rhs);
	}
	return *this;
}

const std::string				PresidentialPardonForm::getTarget() {
	return _target;
}


void							PresidentialPardonForm::execute(Bureaucrat const & executor) {
	if (executor.getGrade() > getGradeToExecute()) {
		throw Form::GradeTooLowException();
	} else {
		std::cout << _target << " has been pardoned by Zafod Beeblebrox" << std::endl;
	}
}

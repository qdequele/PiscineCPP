/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 13:14:53 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/15 15:50:54 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
	: Form(), _target("notarget") {

}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: Form("Robotomy Request Form", 72, 45), _target(target) {

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) {
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm() {

}

RobotomyRequestForm &			RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs ) {
	if ( this != &rhs ) {
		Form::operator=(rhs);
	}
	return *this;
}

const std::string				RobotomyRequestForm::getTarget() {
	return _target;
}

const char* RobotomyRequestForm::RandomException::what() const throw() {
	return ("It’s a failure");
}

void							RobotomyRequestForm::execute(Bureaucrat const & executor) {
	if (executor.getGrade() > getGradeToExecute()) {
		throw Form::GradeTooLowException();
	} else {
		int random = rand() % 2;
		system("say 'beep'");
		if (random == 1) {
			std::cout << _target << " as been robotomized successfully" << std::endl;;
		} else {
			throw RobotomyRequestForm::RandomException();
		}
	}
}

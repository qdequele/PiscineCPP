/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 10:58:05 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/15 13:10:04 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {

	Form* form = nullptr;

	try {
		std::cout << "FORM: AES - 0 - 140" << std::endl;
		form = new Form("AES", 0, 140);
		std::cout << *form << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
		form = nullptr;
	}

	try {
		std::cout << "FORM: AES - 20 - 151" << std::endl;
		form = new Form("AES", 20, 151);
		std::cout << *form << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
		form = nullptr;
	}

	try {
		std::cout << "FORM: AES - 20 - 140" << std::endl;
		form = new Form("AES", 20, 140);
		std::cout << *form << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
		form = nullptr;
	}

	try {
		std::cout << "BUREAUCRAT: Bob - 151" << std::endl;
		Bureaucrat bob("Bob", 151);
		std::cout << bob << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << "BUREAUCRAT: Bob - 0" << std::endl;
		Bureaucrat bob("Bob", 0);
		std::cout << bob << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << "BUREAUCRAT: Bob - 150 > downgrade" << std::endl;
		Bureaucrat bob("Bob", 150);
		std::cout << bob << std::endl;
		bob.downgrade();
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << "BUREAUCRAT: Bob - 1 > upgrade" << std::endl;
		Bureaucrat bob("Bob", 1);
		std::cout << bob << std::endl;
		bob.upgrade();
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << "BUREAUCRAT: Bob - 19 > sign FORM : AES - 20 - 140" << std::endl;
		Bureaucrat bob("Bob", 19);
		std::cout << bob << std::endl;
		if (form != nullptr) {
			bob.signForm(*form);
		}
	} catch (Bureaucrat::GradeTooHighException& e) {
		std::cout << "GradeTooHighException" << std::endl;
		std::cout << e.what() << std::endl;
	} catch (Bureaucrat::GradeTooLowException& e) {
		std::cout << "GradeTooLowException" << std::endl;
		std::cout << e.what() << std::endl;
	} catch (std::exception& e) {
		std::cout << "exception" << std::endl;
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << "BUREAUCRAT: Bob - 21 > sign FORM : AES - 20 - 140" << std::endl;
		Bureaucrat bob("Bob", 21);
		std::cout << bob << std::endl;
		if (form != nullptr) {
			bob.signForm(*form);
		}
	} catch (Bureaucrat::GradeTooHighException& e) {
		std::cout << "GradeTooHighException" << std::endl;
		std::cout << e.what() << std::endl;
	} catch (Bureaucrat::GradeTooLowException& e) {
		std::cout << "GradeTooLowException" << std::endl;
		std::cout << e.what() << std::endl;
	} catch (std::exception& e) {
		std::cout << "exception" << std::endl;
		std::cout << e.what() << std::endl;
	}

	if (form != nullptr) {
		delete form;
	}

	return 0;
}

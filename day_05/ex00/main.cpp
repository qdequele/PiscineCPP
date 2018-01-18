/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 10:58:05 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/15 11:33:06 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {

	try {
		Bureaucrat bob("Bob", 151);
		std::cout << bob << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Bureaucrat bob("Bob", 0);
		std::cout << bob << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Bureaucrat bob("Bob", 150);
		std::cout << bob << std::endl;
		bob.downgrade();
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Bureaucrat bob("Bob", 1);
		std::cout << bob << std::endl;
		bob.upgrade();
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Bureaucrat bob("Bob", 1);
		std::cout << bob << std::endl;
		bob.upgrade();
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

	return 0;
}

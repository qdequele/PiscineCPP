/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 10:59:23 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/08 15:22:17 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.class.hpp"

int main ( void ) {

	char	buff[512];
	Contact	contact[8];
	int		nbContacts = 0;
	int 	contactSelected = 0;

	std::cout << "Hello !" << std::endl << "Welcome on your phonebook." << std::endl;

	while (1) {
		std::cout << "Please choose an option : (ADD | SEARCH | EXIT)" << std::endl;
		std::cin >> buff;

		if (strcmp(buff, "EXIT") == 0) {
			break ;
		} else if (strcmp(buff, "ADD") == 0) {
			if (nbContacts < 8) {
				contact[nbContacts].add();
				if (contact[nbContacts].isEmpty()) {
					std::cout << "Not enought information <!>" << std::endl;
					continue;
				}
				contact[nbContacts].index = nbContacts;
				nbContacts++;
				std::cout << "... Contact saved ! " << std::endl;
			} else {
				std::cout << "You have too much contact in the book" << std::endl;
				continue ;
			}
		} else if (strcmp(buff, "SEARCH") == 0) {
			if (nbContacts == 0) {
				std::cout << "Sorry you have 0 contact saved. Please add one and retry!" << std::endl;
				continue ;
			}
			for (int i=0; i<nbContacts; i++) {
				contact[i].show();
			}
			do {
				std::cout << "Select one of them and enter his id: ";
				std::cin >> contactSelected;
			} while (contactSelected > nbContacts - 1);
			contact[contactSelected].showComplete();
			continue ;
		} else {
			std::cout << "This action is not valid" << std::endl;
		}
	}
	std::cout << "Exit..."<< std::endl;
	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 11:03:01 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/08 15:23:04 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Contact.class.hpp"

Contact::Contact(void) {
	return ;
}

Contact::~Contact(void) {
	return ;
}

void Contact::add(void) {

	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	std::cout << "Enter a first name: ";
	std::getline(std::cin, this->firstName);

	std::cout << "Enter a last name: ";
	std::getline(std::cin, this->lastName);

	std::cout << "Enter a nickname: ";
	std::getline(std::cin, this->nickname);

	std::cout << "Enter a login name: ";
	std::getline(std::cin, this->login);

	std::cout << "Enter a postal address: ";
	std::getline(std::cin, this->postalAddress);

	std::cout << "Enter an email address: ";
	std::getline(std::cin, this->emailAddress);

	std::cout << "Enter a phone number: ";
	std::getline(std::cin, this->phoneNumber);

	std::cout << "Enter a birth date: ";
	std::getline(std::cin, this->birthdayDate);

	std::cout << "Enter a favorite meal: ";
	std::getline(std::cin, this->favoriteMeal);

	std::cout << "Enter an underwear color: ";
	std::getline(std::cin, this->underwearColor);

	std::cout << "Enter a darknest secret: ";
	std::getline(std::cin, this->darkestSecret);
}

void Contact::show(void) {
	std::cout << "         " << this->index << "|";
	this->showString(this->firstName);
	std::cout << "|";
	this->showString(this->lastName);
	std::cout << "|";
	this->showString(this->nickname);
	std::cout << std::endl;
}

void Contact::showComplete(void) {
	std::cout << " Index" << ": " << this->index << std::endl;
	std::cout << " First name" << ": " << this->firstName << std::endl;
	std::cout << " Last name" << ": " << this->lastName << std::endl;
	std::cout << " Nickname" << ": " << this->nickname << std::endl;
	std::cout << " Login" << ": " << this->login << std::endl;
	std::cout << " Postal address" << ": " << this->postalAddress << std::endl;
	std::cout << " Email address" << ": " << this->emailAddress << std::endl;
	std::cout << " Phone number" << ": " << this->phoneNumber << std::endl;
	std::cout << " Birthday date" << ": " << this->birthdayDate << std::endl;
	std::cout << " Favorite meal" << ": " << this->favoriteMeal << std::endl;
	std::cout << " Underwear color" << ": " << this->underwearColor << std::endl;
	std::cout << " Darknest secret" << ": " << this->darkestSecret << std::endl;
}

bool Contact::isEmpty(void) {
	if ((this->firstName.size()
		+ this->lastName.size()
		+ this->nickname.size()
		+ this->login.size()
		+ this->postalAddress.size()
		+ this->emailAddress.size()
		+ this->phoneNumber.size()) == 0) {
		return true;
	}
	return false;
}

void Contact::showString(std::string s) {
	int i = 0;

	if (s.size() > 10) {
		std::cout << s.substr(0, 9) << ".";
	} else {
		std::cout << std::setw(10) << s;
	}
}


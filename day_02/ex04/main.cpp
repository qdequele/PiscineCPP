/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 10:33:54 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/10 17:11:10 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>
#include <stdlib.h>
#include "Fixed.hpp"

int main( void ) {

	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	return 0;
}


Fixed	calcul(std::string str) {
	std::stringstream	ss;
	std::string			tmp;
	Fixed				result;

	ss << str;

	while (ss >> tmp) {
		if (tmp == "(") {
			std::string sub;
			do {
				ss >> tmp;

			} while (tmp != ")");
			calcul(sub);
		}
	}
}

bool isOperation(std::string str) {
	if ( str.size() == 1 && ( str == "+" || str == "-" || str == "*" || str == "/" ) ) {
		return true;
	}
	return false;
}

bool isInt(std::string str) {
	for (int i = 0; i < str.size(); i++ ) {
		if (!isdigit(str[i])) {
			return false;
		}
	}
	return true;
}

bool isFloat(std::string str) {
	int num = 0;
	for (int i = 0; i < str.size(); i++ ) {
		if (!isdigit(str[i]) && str[i] != '.') {
			return false;
		} else if (str[i] == '.') {
			num++;
		}
	}
	if (num == 1) {
		return true;
	}
	return false;
}

Fixed	val(std::string str) {
	if (isInt(str))
		return Fixed(stoi(str));
	else if (isFloat(str))
		return Fixed(stof(str));
	return Fixed(0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 09:57:56 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/16 14:56:15 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include <iomanip>
# include <limits>
#include <stdlib.h>


bool isInt(char *src) {
	for (unsigned long i = 0; i <= strlen(src); i++) {
		if (i == 0 && src[i] == '-') {
			continue ;
		}
		if (src[i] < 48 || src[i] > 57)
			return false;
	}
	std::cout << "isInt" << std::endl;
	return true;
}

bool isFloat(char *src) {
	bool haveDot = false;
	for (unsigned long i = 0; i <= strlen(src); i++) {
		if (i == strlen(src) - 1  && src[i] == 'f') {
			return true;
		}
		if (i == 0 && src[i] == '-') {
			continue ;
		}
		if (src[i] == '.' && haveDot) {
			return false;
		} else if (src[i] == '.') {
			haveDot = true;
		} else if (src[i] < 48 || src[i] > 57)
			return false;
	}
	std::cout << "isFloat" << std::endl;
	return true;
}

bool isDouble(char *src) {
	bool haveDot = false;
	for (unsigned long i = 0; i <= strlen(src) - 1; i++) {
		if (i == 0 && src[i] == '-') {
			continue ;
		}
		if (src[i] == '.' && haveDot) {
			return false;
		} else if (src[i] == '.') {
			haveDot = true;
		} else if (src[i] < 48 || src[i] > 57) {
			return false;
		}
	}
	return true;
}

bool isChar(char *src) {
	if (strlen(src) != 1 || src[0] < 33 || src[0] > 126)
		return false;
	return true;
}


int		main(int ac, char ** av) {
	if (ac != 2) {
		std::cout << "Require 1 param" << std::endl;
		return (1);
	}

	char	c;
	int		i;
	float	f;
	double	d;

	if (isInt(av[1])) {
		i = std::atoi(av[1]);
		c = static_cast<char>(i);
		d = static_cast<double>(i);
		f = static_cast<float>(d);
		if (i < 33 || i > 126)
			std::cout << "char: Not displayable" << std::endl;
		else
			std::cout << "char: " << c << std::endl;
		std::cout << "int: " << i << std::endl;
		std::cout <<  "float: " << f << "f" << std::endl;
		std::cout << "double: " << d << std::endl;
	} else if (isFloat(av[1]) || isDouble(av[1])) {
		f = std::atof(av[1]);
		i = static_cast<int>(f);
		c = static_cast<char>(i);
		d = static_cast<double>(f);
		if (i < 33 || i > 126)
			std::cout << "char: Not displayable" << std::endl;
		else
			std::cout << "char: " << c << std::endl;
		std::cout << "int: " << i << std::endl;
		std::cout <<  "float: " << std::fixed << std::setprecision( 1 ) << std::setfill( '0' ) << f << "f" << std::endl;
		std::cout << "double: " << std::fixed << std::setprecision( 1 ) << std::setfill( '0' ) << d << std::endl;
	} else if (isChar(av[1])) {
		c = static_cast<char>(av[1][0]);
		i = static_cast<int>(c);
		f = static_cast<float>(i);
		d = static_cast<double>(f);
		std::cout << "char: " << c << std::endl;
		std::cout << "int: " << i << std::endl;
		std::cout << "float: " << std::fixed << std::setprecision( 1 ) << std::setfill( '0' ) << f << "f" << std::endl;
		std::cout << "double: " << std::fixed << std::setprecision( 1 ) << std::setfill( '0' ) << d << std::endl;
	} else if (strcmp(av[1], "nan") == 0 || strcmp(av[1], "nanf") == 0) {
		std::cout << "char: Impossible" << std::endl;
		std::cout << "int: : Impossible"<< std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan"<< std::endl;
	} else if (strcmp(av[1], "-inff") == 0) {
		std::cout << "char: Impossible" << std::endl;
		f = -std::numeric_limits<float>::infinity();
		i = static_cast<int>(f);
		c = static_cast<char>(i);
		d = static_cast<double>(f);
		std::cout << "int: " << i << std::endl;
		std::cout << "float: " << std::fixed << std::setprecision( 1 ) << std::setfill( '0' ) << f << "f" << std::endl;
		std::cout << "double: " << std::fixed << std::setprecision( 1 ) << std::setfill( '0' ) << d << std::endl;
	} else if (strcmp(av[1], "+inff") == 0) {
		std::cout << "char: Impossible" << std::endl;
		f = std::numeric_limits<float>::infinity();
		i = static_cast<int>(f);
		c = static_cast<char>(i);
		d = static_cast<double>(f);
		std::cout << "int: " << i << std::endl;
		std::cout << "float: " << std::fixed << std::setprecision( 1 ) << std::setfill( '0' ) << f << "f" << std::endl;
		std::cout << "double: " << std::fixed << std::setprecision( 1 ) << std::setfill( '0' ) << d << std::endl;
	} else if (strcmp(av[1], "-inf") == 0) {
		std::cout << "char: Impossible" << std::endl;
		d = -std::numeric_limits<double>::infinity();
		i = static_cast<int>(d);
		c = static_cast<char>(i);
		f = static_cast<double>(d);
		std::cout << "int: " << i << std::endl;
		std::cout << "float: " << std::fixed << std::setprecision( 1 ) << std::setfill( '0' ) << f << "f" << std::endl;
		std::cout << "double: " << std::fixed << std::setprecision( 1 ) << std::setfill( '0' ) << d << std::endl;
	} else if (strcmp(av[1], "+inf") == 0) {
		std::cout << "char: Impossible" << std::endl;
		d = std::numeric_limits<double>::infinity();
		i = static_cast<int>(d);
		c = static_cast<char>(i);
		f = static_cast<double>(d);
		std::cout << "int: " << i << std::endl;
		std::cout << "float: " << std::fixed << std::setprecision( 1 ) << std::setfill( '0' ) << f << "f" << std::endl;
		std::cout << "double: " << std::fixed << std::setprecision( 1 ) << std::setfill( '0' ) << d << std::endl;
	}
	else {
		std::cout << "String not convertible" << std::endl;
	}

	return (0);
}

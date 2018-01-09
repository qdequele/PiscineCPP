/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 14:55:04 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/09 17:06:50 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main (int ac, char **av) {
	if (ac != 4) {
		std::cout << "You should have 3 params. 1 filename and 2 strings ( from - to )" << std::endl;
		return (1);
	}

	std::string		inputFilename = std::string(av[1]);
	std::string		s1 = av[2];
	std::string		s2 = av[3];
	std::string		outputFilename = inputFilename+".replace";
	std::string		line;

	std::ifstream	ifs(inputFilename);
	std::ofstream	ofs(outputFilename);

	if (ifs == 0) {
		std::cout << "no such file \"" << inputFilename << "\" found" << std::endl;
		return (1);
	}

	while (getline(ifs, line)) {
		size_t pos = line.find(s1);
		if (pos != -1) {
			line.replace(pos, s1.size(), s2);
		}
		ofs << line << std::endl;
	}

	ifs.close();
	ofs.close();

	return (0);

}

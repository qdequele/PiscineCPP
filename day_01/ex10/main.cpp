/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 17:22:00 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/09 17:49:24 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <iostream>
# include <fstream>
# include <sstream>
# include <ctime>
# include <iomanip>

int main (int ac, char **av) {
	if (ac == 1) {
		std::string line;
		while (1) {
			if (std::getline(std::cin, line) == 0) {
				return (0);
			}
			std::cout << line << std::endl;
		}
	} else {
		for (int i = 1; i < ac; i++) {
			std::string		filename = av[i];
			std::ifstream	ifs(filename);
			std::string 	line;

			if (ifs == 0) {
				std::cout << "cat: " << filename << ": No such file or directory" << std::endl;
				continue ;
			}

			while (getline(ifs, line)) {
				std::cout << line << std::endl;
			}

		}
	}
}

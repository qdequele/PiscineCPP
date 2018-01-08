/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 09:35:58 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/08 14:42:31 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main ( int ac, char **av){

	if (ac == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	} else {
		for(int i = 1; av[i] != 0; i++) {
			for(int j = 0; av[i][j] != 0; j++)
				if(av[i][j] <= 122 && av[i][j] >= 97)
					av[i][j] -= 32;
			std::cout << av[i];
		}
		std::cout << std::endl;
	}

	return 0;
}
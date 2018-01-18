/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 14:16:54 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/17 15:13:31 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.tpp"

int main () {

	Array<int> * array = new Array<int>(12);

	for (unsigned int i = 0; i < 12; i++) {
		(*array)[i] = i;
	}

	std::cout << (*array).size() << std::endl;

	for (unsigned int i = 0; i < 12; i++) {
		int j = (*array)[i];
		std::cout << j << std::endl;
	}

	try {
		std::cout << (*array)[20] << std::endl;
	} catch (Array<int>::OutOfBounds & e) {
		std::cout << e.what() << std::endl;
	}

	return (0);
}

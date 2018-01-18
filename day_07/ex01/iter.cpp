/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 12:59:35 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/17 13:16:27 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template <typename T>
void	iter(T* tab, unsigned int nb, void (*f)(T & a)) {
	for (unsigned int i = 0; i < nb; i++) {
		f(tab[i]);
	}
}

template <typename T>
void	print(T obj) {
	std::cout << obj << std::endl;
}


int main () {
	int	tabInt[5] = {0,1,2,3,4};
	std::string	tabString[5] = {"Hello","Holla","Bonjour","もしもし","Bok"};

	iter(tabInt, 5, ::print);
	std::cout << std::endl;
	iter(tabString, 5, ::print);
	return (0);
}

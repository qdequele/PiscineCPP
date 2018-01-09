/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 09:45:49 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/09 09:51:29 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

void memoryLeak () {
	std::string* panthere = new std::string("String panthere");

	std::cout << *panthere << std::endl;

	delete panthere;
}

int main () {
	memoryLeak();
	return (0);
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 11:58:31 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/09 12:01:32 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main () {
	std::string	str = "HI THIS IS BRAIN";

	std::string* strPtr = &str;
	std::string& strRef = str;

	std::cout << str << " | " << *strPtr << " | " << strRef << std::endl;

	return (0);
}
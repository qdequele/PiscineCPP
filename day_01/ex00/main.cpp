/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 09:25:12 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/09 09:46:12 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Pony.hpp"

int main () {
	Pony	bob = Pony("bob", 3, 150, "brown");
	Pony	*marley = new Pony("marley", 2, 130, "black");

	delete marley;

	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 11:02:00 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/12 13:44:02 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Peonne.hpp"

int main() {

	Sorcerer robert("Robert","the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	Peon noname;
	Victim jimCopy(jim);

	Victim	*tom = new Peon("Tom");
	Victim	*alice = new Peonne("Alice");

	noname = joe;

	std::cout << robert << jim << joe << noname << jimCopy << *tom << *alice;
	robert.polymorph(jim);
	robert.polymorph(joe);

	robert.polymorph(*tom);
	robert.polymorph(*alice);

	delete tom;
	delete alice;

	return 0;
}

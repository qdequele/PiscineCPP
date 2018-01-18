/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 15:26:02 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/16 15:54:16 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <time.h>
#include <stdlib.h>
#include <iostream>

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base *		generate(void) {
	int random = rand() % 3;

	if (random == 0) {
		A* a = new A();
		std::cout << "Type generated: A" << std::endl;
		return static_cast<Base *>(a);
	} else if (random == 1) {
		B* b = new B();
		std::cout << "Type generated: B" << std::endl;
		return static_cast<Base *>(b);
	} else if (random == 2) {
		C* c = new C();
		std::cout << "Type generated: C" << std::endl;
		return static_cast<Base *>(c);
	} else {
		A* a = new A();
		std::cout << "Type generated: A" << std::endl;
		return static_cast<Base *>(a);
	}
}


void identify_from_pointer( Base * p ) {
	A * a = dynamic_cast<A *>(p);
	if (a != NULL) {
		std::cout << "Type found : A" << std::endl;
		return ;
	}
	B * b = dynamic_cast<B *>(p);
	if (b != NULL) {
		std::cout << "Type found : B" << std::endl;
		return ;
	}
	C * c = dynamic_cast<C *>(p);
	if (c != NULL) {
		std::cout << "Type found : C" << std::endl;
		return ;
	}
}

void identify_from_reference( Base & p ) {
	try {
		A & a = dynamic_cast<A &>(p);
		a = a;
		std::cout << "Type found : A" << std::endl;
	} catch (std::bad_cast & _) {}

	try {
		B & b = dynamic_cast<B &>(p);
		b = b;
		std::cout << "Type found : B" << std::endl;
	} catch (std::bad_cast & _) {}

	try {
		C & c = dynamic_cast<C &>(p);
		c = c;
		std::cout << "Type found : C" << std::endl;
	} catch (std::bad_cast & _) {}
}

int main () {
	srand (time(NULL));

	for (int i = 0; i < 10; i++) {
		std::cout << "Generate type" << std::endl;
		Base* p = generate();
		std::cout << "Identify from pointer" << std::endl;
		identify_from_pointer(p);
		std::cout << "Identify from ref" << std::endl;
		identify_from_reference(*p);
		std::cout << std::endl;
	}

	return 0;
}

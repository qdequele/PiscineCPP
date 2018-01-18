/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 14:17:36 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/12 18:07:33 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Enemy.hpp"
#include "AWeapon.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"

int main() {

	Character* zaz = new Character("zaz");

	std::cout << *zaz;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	zaz->equip(pr);
	std::cout << *zaz;
	zaz->equip(pf);
	zaz->attack(b);
	std::cout << *zaz;
	zaz->equip(pr);
	std::cout << *zaz;
	zaz->attack(b);
	Enemy* sm = new SuperMutant();
	zaz->attack(sm);
	std::cout << *zaz;
	std::cout << *sm;
	zaz->attack(sm);
	std::cout << *zaz;
	std::cout << *sm;
	zaz->attack(sm);
	std::cout << *zaz;
	std::cout << *sm;
	zaz->equip(pf);
	std::cout << *zaz;
	zaz->recoverAP();
	std::cout << *zaz;
	zaz->recoverAP();
	std::cout << *zaz;
	zaz->attack(sm);
	std::cout << *zaz;
	std::cout << *sm;
	zaz->attack(sm);
	std::cout << *sm;
	std::cout << *zaz;
	zaz->attack(sm);
	std::cout << *zaz;
	zaz->attack(b);

	std::cout << *zaz;

	delete zaz;
	delete pr;
	delete pf;
	delete sm;

	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 15:49:02 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/09 16:22:49 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int main () {

	Human human;

	human.action("meleeAttack", "Bob");
	human.action("rangedAttack", "Patrick");
	human.action("intimidatingShout", "Jean Michel");
	return (0);
}

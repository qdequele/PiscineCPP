/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 15:48:50 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/09 16:23:50 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Human.hpp"

Human::Human() {}

Human::~Human() {}

void Human::action(std::string const& action_name, std::string const& target) {
	typedef void (Human::*Actions)(std::string const & target);

	std::string actionsStr[3] = {"meleeAttack", "rangedAttack", "intimidatingShout"};
	Actions actions[3] = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};

	for (int i = 0; i < 3; i++) {
		if (actionsStr[i] == action_name)
		{
			(this->*(actions[i]))(target);
			break;
		}
	}
}

void Human::meleeAttack(std::string const& target) {
	std::cout << "meleeAttack to " << target << std::endl;
}

void Human::rangedAttack(std::string const& target) {
	std::cout << "rangedAttack to " << target << std::endl;
}

void Human::intimidatingShout(std::string const& target) {
	std::cout << "intimidatingShout to " << target << std::endl;
}


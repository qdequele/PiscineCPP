/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 15:48:58 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/09 15:52:14 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMAN_HPP
# define HUMAN_HPP

# include <string>
# include <iostream>

class Human {
	private:
		void meleeAttack(std::string const& target);
		void rangedAttack(std::string const& target);
		void intimidatingShout(std::string const& target);

	public:
		Human();
		~Human();
		void action(std::string const& action_name, std::string const& target);
};

#endif

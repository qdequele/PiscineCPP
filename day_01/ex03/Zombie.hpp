/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 09:52:11 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/09 11:17:15 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>


class Zombie {
	private:
		static const std::string	possibleNames[];

		std::string	_name;
		std::string	_type;

		std::string	getRandomName() const;

	public:
		Zombie(std::string name, std::string type);
		Zombie(std::string type);
		Zombie();
		~Zombie();

		void announce();
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 09:52:06 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/09 11:13:50 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_HPP
# define ZOMBIE_EVENT_HPP

# include <string>
# include <iostream>
# include <time.h>
# include "Zombie.hpp"

class ZombieEvent {
	private:
		std::string 				_type;

	public:
		ZombieEvent(std::string type);
		~ZombieEvent();
		void setZombieType(std::string type);
		Zombie* newZombie(std::string name);
		Zombie* randomChump();
};

#endif
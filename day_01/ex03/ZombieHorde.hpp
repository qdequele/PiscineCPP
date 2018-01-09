/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 10:59:50 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/09 11:55:08 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE_HPP
# define ZOMBIE_HORDE_HPP

# include <string>
# include <iostream>
# include "ZombieEvent.hpp"

class ZombieHorde {
	private:
		Zombie	*_zombieHorde;
		int		_numberOfZombies;

	public:
		ZombieHorde(int n);
		~ZombieHorde();

		void announce();

};

#endif
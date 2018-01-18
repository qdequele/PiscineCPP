/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 13:55:10 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/12 15:44:22 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPER_MUTANT_HPP
# define SUPER_MUTANT_HPP

# include <iostream>
# include <string>

#include "Enemy.hpp"

class SuperMutant : public Enemy {

	public:
		SuperMutant();
		SuperMutant(SuperMutant const & src);
		~SuperMutant();

		SuperMutant &	operator =	( SuperMutant const & rhs );

		void			takeDamage(int d);
};

#endif

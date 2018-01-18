/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 11:07:12 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/12 13:19:07 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include <string>

#include "Victim.hpp"

class Peon: virtual public Victim {
	public:
		Peon();
		Peon(std::string name);
		Peon(Peon const & src);
		~Peon();

		Peon &			operator =	( Peon const & rhs );

		virtual void 				getPolymorphed() const;
};

#endif

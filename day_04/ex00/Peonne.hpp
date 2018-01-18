/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peonne.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 13:40:17 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/12 13:40:48 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEONNE_HPP
# define PEONNE_HPP

# include <iostream>
# include <string>

#include "Victim.hpp"

class Peonne: virtual public Victim {
	public:
		Peonne();
		Peonne(std::string name);
		Peonne(Peonne const & src);
		~Peonne();

		Peonne &			operator =	( Peonne const & rhs );

		virtual void 				getPolymorphed() const;
};

#endif

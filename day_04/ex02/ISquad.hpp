/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 18:14:55 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/12 18:18:18 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef I_SQUAD_HPP
# define I_SQUAD_HPP

# include <iostream>
# include <string>

# include "ISpaceMarine.hpp"

class ISquad
{
	public:
		virtual ~ISquad() {}

		virtual int 			getCount() const = 0;
		virtual ISpaceMarine* 	getUnit(int) const = 0;
		virtual int 			push(ISpaceMarine*) = 0;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 18:15:25 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/12 19:24:49 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <iostream>
# include <string>

# include "ISquad.hpp"

class Squad : public ISquad {
	private:
		ISpaceMarine	*_crew[20];
		int				_nbMember;

	public:
		Squad();
		Squad(Squad const & src);
		~Squad();

		Squad &			operator=( Squad const & rhs );

		int 			getCount() const;
		ISpaceMarine* 	getUnit(int) const;
		int 			push(ISpaceMarine*);
};

#endif

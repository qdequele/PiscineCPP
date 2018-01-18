/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 18:14:11 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/12 18:19:21 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef I_SPACE_MARINE_HPP
# define I_SPACE_MARINE_HPP

# include <iostream>
# include <string>

class ISpaceMarine
{
	public:
		virtual ~ISpaceMarine() {}
		virtual ISpaceMarine* 	clone() const = 0;
		virtual void 			battleCry() const = 0;
		virtual void 			rangedAttack() const = 0;
		virtual void 			meleeAttack() const = 0;
};

#endif

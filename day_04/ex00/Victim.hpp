/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 11:09:44 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/12 13:22:20 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <string>

class Victim {
	protected:
		std::string		_name;

	public:
		Victim();
		Victim(std::string name);
		Victim(Victim const & src);
		virtual ~Victim();

		Victim &			operator =	( Victim const & rhs );

		std::string			introduce() const;

		virtual void 		getPolymorphed() const;
};

std::ostream & operator<<( std::ostream & o, Victim const & f);

#endif

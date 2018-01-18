/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 11:08:50 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/12 13:19:04 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include <string>

# include "Victim.hpp"

class Sorcerer {
	private:
		std::string		_name;
		std::string		_title;

	public:
		Sorcerer();
		Sorcerer(std::string name, std::string title);
		Sorcerer(Sorcerer const & src);
		~Sorcerer();

		Sorcerer &			operator =	( Sorcerer const & rhs );

		std::string			introduce() const;
		void 				polymorph(Victim const & v) const;
};

std::ostream & operator<<( std::ostream & o, Sorcerer const & f);

#endif

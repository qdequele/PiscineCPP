/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 09:29:53 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/12 09:57:43 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJA_TRAP_HPP
# define NINJA_TRAP_HPP

# include <iostream>
# include <iomanip>

# include "ClapTrap.hpp"

class NinjaTrap: public ClapTrap {
	private:

		int			_ninjaShoeboxPower;

	public:
		NinjaTrap();
		NinjaTrap(std::string name);
		NinjaTrap(NinjaTrap const & src);
		~NinjaTrap();

		NinjaTrap &		operator=( NinjaTrap const & src );

		void		ninjaShoebox(std::string const & target);

};

#endif

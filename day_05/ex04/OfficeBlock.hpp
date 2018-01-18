/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 17:08:10 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/15 17:45:10 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OFFICE_BLOCK_HPP
# define OFFICE_BLOCK_HPP

# include <iostream>
# include <string>

#include "Intern.hpp"
#include "Bureaucrat.hpp"

class OfficeBlock {

	private:
		Intern*			_intern;
		Bureaucrat*		_signinBureaucrat;
		Bureaucrat*		_executiveBureaucrat;

	public:
		OfficeBlock();
		OfficeBlock(Intern* intern, Bureaucrat* sb, Bureaucrat* eb);
		~OfficeBlock();

		class PeopleOnVacationException: public std::exception {
			public:
				virtual const char* what() const throw();
		};

		void				doBureaucracy(std::string name, std::string target);

		void				setIntern(Intern * intern);
		void				setSigner(Bureaucrat * bureaucrat);
		void				setExecutor(Bureaucrat * bureaucrat);
};

#endif

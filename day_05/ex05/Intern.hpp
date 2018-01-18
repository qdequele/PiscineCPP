/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 15:51:37 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/15 17:36:42 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {


	public:
		Intern();
		Intern(Intern const & src);
		~Intern();

		class FormNotFoundException: public std::exception {
			public:
				virtual const char* what() const throw();
		};

		Intern &			operator=( Intern const & rhs );

		Form *				makeForm(std::string name, std::string target);

};

#endif

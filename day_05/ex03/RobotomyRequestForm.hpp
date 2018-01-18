/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 13:14:28 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/15 15:51:09 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP

# include <iostream>
# include <string>
# include <time.h>
#include <stdlib.h>

# include "Form.hpp"

class RobotomyRequestForm: public Form {

	private:
		const std::string			_target;

	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const & src);
		~RobotomyRequestForm();

		RobotomyRequestForm &			operator=( RobotomyRequestForm const & rhs );

		class RandomException: public std::exception {
			public:
				virtual const char* what() const throw();
		};

		const std::string				getTarget();

		void							execute(Bureaucrat const & executor);
};

#endif

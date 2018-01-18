/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 11:38:52 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/15 13:09:46 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	private:
		const std::string		_name;
		const int				_gradeSign;
		const int				_gradeUse;
		bool					_signed;

	public:
		Form();
		Form(std::string name, int gradeToSign, int gradeToUse);
		Form(Form const & src);
		~Form();

		Form &			operator=( Form const & rhs );

		class GradeTooHighException: public std::exception {
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException: public std::exception {
			public:
				virtual const char* what() const throw();
		};

		const std::string		getName() const;
		int						getGradeToSign() const;
		int						getGradeToExecute() const;
		bool					getIsSigned() const;

		void					beSigned(Bureaucrat& b);
};

std::ostream &		operator<<( std::ostream & o, Form const & f);

#endif

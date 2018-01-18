/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 10:58:05 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/15 18:53:51 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"


int main() {

	srand ( time(NULL) );

	Form* form = nullptr;

	Form* pres = new PresidentialPardonForm("B52");
	Form* robot = new RobotomyRequestForm("A28");
	Form* shrub = new ShrubberyCreationForm("C80");

	try {
		std::cout << "FORM: AES - 0 - 140" << std::endl;
		form = new Form("AES", 0, 140);
		std::cout << *form << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
		form = nullptr;
	}

	try {
		std::cout << "FORM: AES - 20 - 151" << std::endl;
		form = new Form("AES", 20, 151);
		std::cout << *form << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
		form = nullptr;
	}

	try {
		std::cout << "FORM: AES - 20 - 140" << std::endl;
		form = new Form("AES", 20, 140);
		std::cout << *form << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
		form = nullptr;
	}

	try {
		std::cout << "BUREAUCRAT: Bob - 151" << std::endl;
		Bureaucrat bob("Bob", 151);
		std::cout << bob << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << "BUREAUCRAT: Bob - 0" << std::endl;
		Bureaucrat bob("Bob", 0);
		std::cout << bob << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << "BUREAUCRAT: Bob - 150 > downgrade" << std::endl;
		Bureaucrat bob("Bob", 150);
		std::cout << bob << std::endl;
		bob.downgrade();
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << "BUREAUCRAT: Bob - 1 > upgrade" << std::endl;
		Bureaucrat bob("Bob", 1);
		std::cout << bob << std::endl;
		bob.upgrade();
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << std::endl;

	try {
		std::cout << "BUREAUCRAT: Bob - 19 > sign FORM : AES - 20 - 140" << std::endl;
		Bureaucrat bob("Bob", 19);
		std::cout << bob << std::endl;
		if (form != nullptr) {
			bob.signForm(*form);
		}
	} catch (Bureaucrat::GradeTooHighException& e) {
		std::cout << "GradeTooHighException" << std::endl;
		std::cout << e.what() << std::endl;
	} catch (Bureaucrat::GradeTooLowException& e) {
		std::cout << "GradeTooLowException" << std::endl;
		std::cout << e.what() << std::endl;
	} catch (std::exception& e) {
		std::cout << "exception" << std::endl;
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << "BUREAUCRAT: Bob - 21 > sign FORM : AES - 20 - 140" << std::endl;
		Bureaucrat bob("Bob", 21);
		std::cout << bob << std::endl;
		if (form != nullptr) {
			bob.signForm(*form);
		}
	} catch (Bureaucrat::GradeTooHighException& e) {
		std::cout << "GradeTooHighException" << std::endl;
		std::cout << e.what() << std::endl;
	} catch (Bureaucrat::GradeTooLowException& e) {
		std::cout << "GradeTooLowException" << std::endl;
		std::cout << e.what() << std::endl;
	} catch (std::exception& e) {
		std::cout << "exception" << std::endl;
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << std::endl;

	try {
		std::cout << "BUREAUCRAT: Bob - 21 > execute FORM : A28" << std::endl;
		Bureaucrat bob("Bob", 21);
		std::cout << bob << std::endl;
		std::cout << *robot << std::endl;
		if (form != nullptr) {
			bob.executeForm(*robot);
		}
	} catch (Bureaucrat::GradeTooHighException& e) {
		std::cout << "GradeTooHighException" << std::endl;
		std::cout << e.what() << std::endl;
	} catch (Bureaucrat::GradeTooLowException& e) {
		std::cout << "GradeTooLowException" << std::endl;
		std::cout << e.what() << std::endl;
	} catch (std::exception& e) {
		std::cout << "exception" << std::endl;
		std::cout << e.what() << std::endl;
	}


	try {
		std::cout << "BUREAUCRAT: Bob - 21 > execute FORM : B52" << std::endl;
		Bureaucrat bob("Bob", 21);
		std::cout << bob << std::endl;
		std::cout << *pres << std::endl;
		if (form != nullptr) {
			bob.executeForm(*pres);
		}
	} catch (Bureaucrat::GradeTooHighException& e) {
		std::cout << "GradeTooHighException" << std::endl;
		std::cout << e.what() << std::endl;
	} catch (Bureaucrat::GradeTooLowException& e) {
		std::cout << "GradeTooLowException" << std::endl;
		std::cout << e.what() << std::endl;
	} catch (std::exception& e) {
		std::cout << "exception" << std::endl;
		std::cout << e.what() << std::endl;
	}


	try {
		std::cout << "BUREAUCRAT: Bob - 21 > execute FORM : C80" << std::endl;
		Bureaucrat bob("Bob", 21);
		std::cout << bob << std::endl;
		std::cout << *shrub << std::endl;
		if (form != nullptr) {
			bob.executeForm(*shrub);
		}
	} catch (Bureaucrat::GradeTooHighException& e) {
		std::cout << "GradeTooHighException" << std::endl;
		std::cout << e.what() << std::endl;
	} catch (Bureaucrat::GradeTooLowException& e) {
		std::cout << "GradeTooLowException" << std::endl;
		std::cout << e.what() << std::endl;
	} catch (std::exception& e) {
		std::cout << "exception" << std::endl;
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << std::endl;

	{
		Intern  someRandomIntern;
		Form*   rff;
		try {
			rff = someRandomIntern.makeForm("robotomy request", "Bender");
			std::cout << *rff << std::endl;
			rff = someRandomIntern.makeForm("presidential pardon", "Somewhere");
			std::cout << *rff << std::endl;
			rff = someRandomIntern.makeForm("robotomy request", "Trash");
			std::cout << *rff << std::endl;
			rff = someRandomIntern.makeForm("Trololol", "Trash");
		} catch (Intern::FormNotFoundException & e) {
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << std::endl << std::endl;

	{
		Intern idiotOne;
		Bureaucrat  hermes = Bureaucrat("Hermes Conrad", 37);
		Bureaucrat  bob = Bureaucrat("Bobby Bobson", 123);
		OfficeBlock ob;
		ob.setIntern(&idiotOne);
		ob.setSigner(&bob);
		ob.setExecutor(&hermes);
		std::cout << "Lets get started with some stuff" << std::endl;
		try {
			ob.doBureaucracy("mutant pig termination", "Pigley");
		} catch (OfficeBlock::PeopleOnVacationException & e) {
			std::cout << e.what() << std::endl;
		}  catch (Intern::FormNotFoundException & e) {
			std::cout << e.what() << std::endl;
		} catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}

		std::cout << std::endl ;

		try {
			ob.doBureaucracy("robotomy request", "Pigley");
		} catch (OfficeBlock::PeopleOnVacationException & e) {
			std::cout << e.what() << std::endl;
		}  catch (Intern::FormNotFoundException & e) {
			std::cout << e.what() << std::endl;
		} catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}

		std::cout << std::endl ;

		Bureaucrat  jean = Bureaucrat("Jean Michel", 20);
		ob.setSigner(&jean);

		try {
			ob.doBureaucracy("robotomy request", "Pigley");
		} catch (OfficeBlock::PeopleOnVacationException & e) {
			std::cout << e.what() << std::endl;
		}  catch (Intern::FormNotFoundException & e) {
			std::cout << e.what() << std::endl;
		} catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}

	if (form != nullptr) {
		delete form;
	}
	if (pres != nullptr) {
		delete pres;
	}
	if (robot != nullptr) {
		delete robot;
	}
	if (shrub != nullptr) {
		delete shrub;
	}

	return 0;
}

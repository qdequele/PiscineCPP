/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 13:14:50 by qdequele          #+#    #+#             */
/*   Updated: 2018/01/15 15:46:56 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
	: Form(), _target("notarget") {

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: Form("Shrubbery Creation Form", 145, 137), _target(target) {

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) {
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {

}

ShrubberyCreationForm &			ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs ) {
	if ( this != &rhs ) {
		Form::operator=(rhs);
	}
	return *this;
}

const std::string				ShrubberyCreationForm::getTarget() {
	return _target;
}

void							ShrubberyCreationForm::execute(Bureaucrat const & executor) {
	if (executor.getGrade() > getGradeToExecute()) {
		throw Form::GradeTooLowException();
	} else {
		std::string tree[] = {
			"          .     .  .      +     .      .          .         ",
			"     .       .      .     #       .           .             ",
			"        .      .         ###            .      .      .     ",
			"      .      .   \"#:. .:##\"##:. .:#\"  .      .              ",
			"          .      . \"####\"###\"####\"  .                       ",
			"       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       .",
			"  .             \"#########\"#########\"        .        .     ",
			"        .    \"#:.  \"####\"###\"####\"  .:#\"   .       .        ",
			"     .     .  \"#######\"\"##\"##\"\"#######\"                  .  ",
			"                .\"##\"#####\"#####\"##\"           .      .     ",
			"    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     .         ",
			"      .     \"#######\"##\"#####\"##\"#######\"      .     .      ",
			"    .    .     \"#####\"\"#######\"\"#####\"    .      .          ",
			"            .     \"      000      \"    .     .              ",
			"       .         .   .   000     .        .       .         ",
			".. .. ..................O000O........................ ......"
		};

		std::string name = _target + "_shrubbery";
		std::ofstream	ofs(name , std::ios::out);

		for (int i = 0; i < 16; i++) {
			ofs <<  tree[i] << std::endl;
		}
	}
}

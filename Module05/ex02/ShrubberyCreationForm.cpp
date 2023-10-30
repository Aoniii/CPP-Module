/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:14:42 by snourry           #+#    #+#             */
/*   Updated: 2022/10/20 18:14:42 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void):
	AForm("ShrubberyCreationForm", 145, 137), target("") {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &cpy):
	AForm(cpy), target(cpy.target) {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
	AForm("ShrubberyCreationForm", 145, 137), target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src) {
	this->target = src.target;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	std::ofstream	out;

	AForm::execute(executor);
	out.open((target + "_shrubbery").c_str());
	if (out.fail())
		return ;
	out <<
	"                                                         .\n"
	"                                              .         ;\n"
	"                 .              .              ;%     ;;\n"
	"                   ,           ,                :;%  %;\n"
	"                    :         ;                   :;%;'     .,\n"
	"           ,.        %;     %;            ;        %;'    ,;\n"
	"             ;       ;%;  %%;        ,     %;    ;%;    ,%'\n"
	"              %;       %;%;      ,  ;       %;  ;%;   ,%;'\n"
	"               ;%;      %;        ;%;        % ;%;  ,%;'\n"
	"                `%;.     ;%;     %;'         `;%%;.%;'\n"
	"                 `:;%.    ;%%. %@;        %; ;@%;%'\n"
	"                    `:%;.  :;bd%;          %;@%;'\n"
	"                      `@%:.  :;%.         ;@@%;'\n"
	"                        `@%.  `;@%.      ;@@%;\n"
	"                          `@%%. `@%%    ;@@%;\n"
	"                            ;@%. :@%%  %@@%;\n"
	"                              %@bd%%%bd%%:;\n"
	"                                #@%%%%%:;;\n"
	"                                %@@%%%::;\n"
	"                                %@@@%(o);  . '\n"
	"                                %@@@o%;:(.,'\n"
	"                            `.. %@@@o%::;\n"
	"                               `)@@@o%::;\n"
	"                                %@@(o)::;\n"
	"                               .%@@@@%::;\n"
	"                               ;%@@@@%::;.\n"
	"                              ;%@@@@%%:;;;.\n"
	"                          ...;%@@@@@%%:;;;;,.."
	<< std::endl;
	out.close();
}
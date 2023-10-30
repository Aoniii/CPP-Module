/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 20:18:44 by snourry           #+#    #+#             */
/*   Updated: 2022/10/20 20:18:44 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

AForm	*createPresidential(std::string const target) { return (new PresidentialPardonForm(target)); }
AForm	*createRobotomy(std::string const target) { return (new RobotomyRequestForm(target)); }
AForm	*createShrubbery(std::string const target) { return (new ShrubberyCreationForm(target)); }

Intern::Intern(void) {}

Intern::Intern(const Intern &intern) { (void)intern; }

Intern::~Intern(void) {}

Intern &Intern::operator=(const Intern &intern) {
	(void)intern;
	return (*this);
}

AForm	*Intern::makeForm(std::string const form, std::string const target) {
	FormType	forms[] = {
		{"presidential pardon", &createPresidential},
		{"robotomy request", &createRobotomy},
		{"shrubbery creation", &createShrubbery}
	};
	for (int i = 0; i < 3; i++) {
		if (forms[i].name == form)
		{
			std::cout << "Intern creates " << form << std::endl;
			return (forms[i].function(target));
		}
	}
	std::cout << "This form doesn't exist ! (" << form << ")" << std::endl;
	return (NULL);
}

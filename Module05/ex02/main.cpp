/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:01:04 by snourry           #+#    #+#             */
/*   Updated: 2022/10/15 15:01:04 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void) {
	Bureaucrat sacha("Sacha", 1);
	ShrubberyCreationForm form1("Jardin");
	RobotomyRequestForm form2("Perceuse");
	PresidentialPardonForm form3("Zaphod Beeblebrox");

	sacha.executeForm(form1);
	sacha.executeForm(form2);
	sacha.executeForm(form3);

	return (0);
}

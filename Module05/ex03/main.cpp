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
#include "Intern.hpp"

int main(void) {
	Bureaucrat	sacha("Sacha", 1);
	Intern		intern;
	std::string	formList[] = {"presidential pardon", "robotomy request", "shrubbery creation", "moi"};

	for (int i = 0; i < 4; i++) {
		AForm		*tmp;

		tmp = intern.makeForm(formList[i], "target");
		if (tmp)
			sacha.executeForm(*tmp);
	}

	return (0);
}

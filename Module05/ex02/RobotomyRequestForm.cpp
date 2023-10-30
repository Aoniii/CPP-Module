/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:29:29 by snourry           #+#    #+#             */
/*   Updated: 2022/10/20 18:29:29 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(void):
	AForm("ShrubberyCreationForm", 72, 45), target("") {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &cpy):
	AForm(cpy), target(cpy.target) {}

RobotomyRequestForm::RobotomyRequestForm(std::string target):
	AForm("RobotomyRequestForm", 72, 45), target(target) {}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &src) {
	this->target = src.target;
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const {
	AForm::execute(executor);
	std::cout << "*drilling noise*" << std::endl;
	srand(time(NULL));
	if (rand() % 2 == 1)
		std::cout << this->target << " has been robotomized" << std::endl;
	else
		std::cout <<  "The operation failed" << std::endl;
}

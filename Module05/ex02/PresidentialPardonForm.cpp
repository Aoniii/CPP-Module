/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:32:12 by snourry           #+#    #+#             */
/*   Updated: 2022/10/20 18:32:12 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void):
	AForm("PresidentialPardonForm", 25, 5), target("") {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &cpy):
	AForm(cpy), target(cpy.target) {}

PresidentialPardonForm::PresidentialPardonForm(std::string target):
	AForm("PresidentialPardonForm", 25, 5), target(target) {}

PresidentialPardonForm::~PresidentialPardonForm(void) {}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &src) {
	this->target = src.target;
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	AForm::execute(executor);
	std::cout << target << " has been forgiven by Zaphod Beeblebrox." << std::endl;
}

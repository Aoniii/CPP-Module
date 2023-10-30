/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:58:30 by snourry           #+#    #+#             */
/*   Updated: 2022/10/20 17:58:30 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

AForm::AForm(void): name(""), sign(false), gradeToSign(150), gradeToExecute(150) {}

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute):
	name(name), sign(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute) {
	if (gradeToSign < 1)
		throw AForm::GradeTooHighException();
	else if (gradeToSign > 150)
		throw AForm::GradeTooLowException();
	else if (gradeToExecute < 1)
		throw AForm::GradeTooHighException();
	else if (gradeToExecute > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm &form):
	name(form.name), sign(false), gradeToSign(form.gradeToSign), gradeToExecute(form.gradeToExecute) {
    *this = form;
}

AForm::~AForm(void) {}

AForm &AForm::operator=(const AForm &form) {
    this->sign = form.sign;
    return (*this);
}

std::string AForm::getName(void) const {
	return (this->name);
}

bool AForm::isSigned(void) {
	return (this->sign);
}

void AForm::setSigned(bool sign) {
	this->sign = sign;
}

int AForm::getGradeToSign(void) {
	return (this->gradeToSign);
}

int AForm::getGradeToExecute(void) {
	return (this->gradeToExecute);
}

void AForm::beSigned(Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() > this->gradeToSign)
		throw AForm::GradeTooLowException();
	else
		sign = true;
}

void	AForm::execute(Bureaucrat const &executor) const {
	if (executor.getGrade() > this->gradeToExecute && !this->sign)
		throw AForm::UnenforceableException();
}

const char* AForm::GradeTooHighException::what() const throw() {
    return ("Grade too High !");
}

const char* AForm::GradeTooLowException::what() const throw() {
    return ("Grade too Low !");
}

const char* AForm::UnenforceableException::what() const throw() {
    return ("The Form isn't Sign or your Grade is too Low !");
}

std::ostream &operator<<(std::ostream &os, AForm &form) {
	os << form.getName() << (form.isSigned() ? " is" : " isn't") <<
	" signed (Grade For Sign : " << form.getGradeToSign() <<
	", Grade For Execute : " << form.getGradeToExecute() << ")";
	return (os);
}



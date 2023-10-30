/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 23:49:15 by snourry           #+#    #+#             */
/*   Updated: 2022/10/16 23:49:15 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Form::Form(void): name(""), sign(false), gradeToSign(150), gradeToExecute(150) {}

Form::Form(std::string name, int gradeToSign, int gradeToExecute):
	name(name), sign(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute) {
	if (gradeToSign < 1)
		throw Form::GradeTooHighException();
	else if (gradeToSign > 150)
		throw Form::GradeTooLowException();
	else if (gradeToExecute < 1)
		throw Form::GradeTooHighException();
	else if (gradeToExecute > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &form):
	name(form.name), sign(false), gradeToSign(form.gradeToSign), gradeToExecute(form.gradeToExecute) {
    *this = form;
}

Form::~Form(void) {}

Form &Form::operator=(const Form &form) {
    this->sign = form.sign;
    return (*this);
}

std::string Form::getName(void) {
	return (this->name);
}

bool Form::isSigned(void) {
	return (this->sign);
}

void Form::setSigned(bool sign) {
	this->sign = sign;
}

int Form::getGradeToSign(void) {
	return (this->gradeToSign);
}

int Form::getGradeToExecute(void) {
	return (this->gradeToExecute);
}

void Form::beSigned(Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() > this->gradeToSign)
		throw Form::GradeTooLowException();
	else
		sign = true;
}

const char* Form::GradeTooHighException::what() const throw() {
    return ("Grade too High !");
}

const char* Form::GradeTooLowException::what() const throw() {
    return ("Grade too Low !");
}

std::ostream &operator<<(std::ostream &os, Form &form) {
	os << form.getName() << (form.isSigned() ? " is" : " isn't") <<
	" signed (Grade For Sign : " << form.getGradeToSign() <<
	", Grade For Execute : " << form.getGradeToExecute() << ")";
	return (os);
}

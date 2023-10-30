/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:22:15 by snourry           #+#    #+#             */
/*   Updated: 2022/10/15 15:22:15 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(): name(""), grade(150) {}

Bureaucrat::Bureaucrat(std::string name, int grade): name(name), grade(grade) {
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat) {
    *this = bureaucrat;
}

Bureaucrat::~Bureaucrat(void) {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bureaucrat) {
    this->grade = bureaucrat.grade;
    return (*this);
}

std::string	Bureaucrat::getName(void) {
    return (this->name);
}

int Bureaucrat::getGrade(void) {
    return (this->grade);
}

void Bureaucrat::addGrade(int amount) {
    if (this->grade - amount < 1)
        throw Bureaucrat::GradeTooHighException();
    else
        this->grade -= amount;
}

void Bureaucrat::removeGrade(int amount) {
    if (this->grade + amount > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->grade += amount;
}

void Bureaucrat::signForm(Form &form) {
    try {
        form.beSigned(*this);
        std::cout << this->name << " signed " << form.getName() << std::endl;
    } catch (std::exception &e) {
        std::cout << this->name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
    }
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return ("Grade too High !");
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return ("Grade too Low !");
}

std::ostream &operator<<(std::ostream &os, Bureaucrat &bureaucrat) {
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
    return (os);
}

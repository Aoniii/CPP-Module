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
#include "Form.hpp"

int main(void) {
	Bureaucrat sacha("Sacha", 1);
	Bureaucrat killian("Killian", 70);
	Form form("Blabla", 50, 100);
	killian.signForm(form);
	std::cout << form << std::endl;
	sacha.signForm(form);
	std::cout << form << std::endl;
	return (0);
}

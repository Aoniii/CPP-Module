/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 02:45:15 by snourry           #+#    #+#             */
/*   Updated: 2022/10/30 02:45:15 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base	*generate(void) {
	int		r;

	r = rand() % 3;
	if (r == 1)
		return (new A());
	else if (r == 2)
		return (new B());
	return (new C());
}

void	identify(Base *p) {
	std::string	str = "";

	if (dynamic_cast<A *>(p) != NULL)
		str = "A";
	else if (dynamic_cast<B *>(p) != NULL)
		str = "B";
	else if (dynamic_cast<C *>(p) != NULL)
		str = "C";
	std::cout << "Base class: " << str << std::endl;
}

void	identify(Base &p) {
	std::string	str = "";

	try {
		(void) dynamic_cast<A &>(p);
		str = "A";
	} catch (std::exception & error) {
		(void) error;
	}
	try {
		(void) dynamic_cast<B &>(p);
		str = "B";
	} catch (std::exception & error) {
		(void) error;
	}
	try {
		(void) dynamic_cast<C &>(p);
		str = "C";
	} catch (std::exception & error) {
		(void) error;
	}
	std::cout << "Base class: " << str << std::endl;
}

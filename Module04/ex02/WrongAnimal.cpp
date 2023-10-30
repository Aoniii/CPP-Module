/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 17:44:55 by snourry           #+#    #+#             */
/*   Updated: 2022/10/01 17:44:55 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("") {
	std::cout << "[WrongAnimal] Default constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "[WrongAnimal] Destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wrongAnimal) {
	std::cout << "[WrongAnimal] Copy constructor called" << std::endl;
	*this = wrongAnimal;
}

WrongAnimal::WrongAnimal(std::string type): type(type) {
	std::cout << "[WrongAnimal] String constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &wrongAnimal) {
	this->type = wrongAnimal.type;
	return (*this);
}

std::string WrongAnimal::getType(void) const {
	return (this->type);
}

void WrongAnimal::makeSound(void) const {
	std::cout << "WrongAnimal make a sound." << std::endl;
}

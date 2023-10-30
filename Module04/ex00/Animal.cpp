/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 23:31:03 by snourry           #+#    #+#             */
/*   Updated: 2022/09/29 23:31:03 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): type("") {
	std::cout << "[Animal] Default constructor called" << std::endl;
}

Animal::~Animal() {
	std::cout << "[Animal] Destructor called" << std::endl;
}

Animal::Animal(const Animal &animal) {
	std::cout << "[Animal] Copy constructor called" << std::endl;
	*this = animal;
}

Animal::Animal(std::string type): type(type) {
	std::cout << "[Animal] String constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &animal) {
	this->type = animal.type;
	return (*this);
}

std::string Animal::getType(void) const {
	return (this->type);
}

void Animal::makeSound(void) const {
	std::cout << "Animal make a sound." << std::endl;
}

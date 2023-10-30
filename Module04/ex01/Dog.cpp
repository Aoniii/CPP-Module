/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 04:33:20 by snourry           #+#    #+#             */
/*   Updated: 2022/09/30 04:33:20 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal() {
	std::cout << "[Dog] Default constructor called" << std::endl;
	this->brain = new Brain();
	for (int i = 0; i < 100; i++)
		this->brain->idea[i] = "Dog idea";
	this->type = "Dog";
}

Dog::~Dog(void) {
	delete brain;
	std::cout << "[Dog] Destructor called" << std::endl;
}

Dog::Dog(const Dog &dog): Animal(dog) {
	std::cout << "[Dog] Copy constructor called" << std::endl;
}

Dog::Dog(std::string type): Animal(type) {
	std::cout << "[Dog] String constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &dog) {
	this->type = dog.type;
	return (*this);
}

void Dog::makeSound(void) const {
	std::cout << "Ouaf" << std::endl;
}
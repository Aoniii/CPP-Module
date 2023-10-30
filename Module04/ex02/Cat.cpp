/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 04:33:20 by snourry           #+#    #+#             */
/*   Updated: 2022/09/30 04:33:20 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): AAnimal() {
	std::cout << "[Cat] Default constructor called" << std::endl;
	this->brain = new Brain();
	for (int i = 0; i < 100; i++)
		this->brain->idea[i] = "Cat idea";
	this->type = "Cat";
}

Cat::~Cat(void) {
	delete brain;
	std::cout << "[Cat] Destructor called" << std::endl;
}

Cat::Cat(const Cat &cat): AAnimal(cat) {
	std::cout << "[Cat] Copy constructor called" << std::endl;
}

Cat::Cat(std::string type): AAnimal(type) {
	std::cout << "[Cat] String constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &cat) {
	this->type = cat.type;
	return (*this);
}

void Cat::makeSound(void) const {
	std::cout << "Miaou" << std::endl;
}
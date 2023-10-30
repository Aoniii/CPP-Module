/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 19:20:42 by snourry           #+#    #+#             */
/*   Updated: 2022/10/02 19:20:42 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(): type("") {}

AAnimal::~AAnimal() {}

AAnimal::AAnimal(const AAnimal &animal) {
	*this = animal;
}

AAnimal::AAnimal(std::string type): type(type) {}

AAnimal &AAnimal::operator=(const AAnimal &animal) {
	this->type = animal.type;
	return (*this);
}

std::string AAnimal::getType(void) const {
	return (this->type);
}

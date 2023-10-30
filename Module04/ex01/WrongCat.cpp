/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 18:17:20 by snourry           #+#    #+#             */
/*   Updated: 2022/10/01 18:17:20 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal() {
	std::cout << "[WrongCat] Default constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::~WrongCat(void) {
	std::cout << "[WrongCat] Destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &wrongCat): WrongAnimal(wrongCat) {
	std::cout << "[WrongCat] Copy constructor called" << std::endl;
}

WrongCat::WrongCat(std::string type): WrongAnimal(type) {
	std::cout << "[WrongCat] String constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &wrongCat) {
	this->type = wrongCat.type;
	return (*this);
}

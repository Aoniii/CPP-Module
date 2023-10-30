/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:55:34 by snourry           #+#    #+#             */
/*   Updated: 2022/09/29 16:55:34 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void): name("") {
	std::cout << "[DiamondTrap] Default constructor called" << std::endl;
	ClapTrap::setName(name + "_clap_name");
	this->hitPoint = 100;
	this->energyPoint = 50;
	this->attackDamage = 30;
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "[DiamondTrap] Destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): name(name) {
	std::cout << "[DiamondTrap] String constructor called" << std::endl;
	ClapTrap::setName(name + "_clap_name");
	this->hitPoint = 100;
	this->energyPoint = 50;
	this->attackDamage = 30;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &diamondTrap) {
	ClapTrap::operator=(diamondTrap);
	return (*this);
}

std::string DiamondTrap::getName(void) {
	return (this->name);
}

void DiamondTrap::setName(std::string name) {
	this->name = name;
	ClapTrap::setName(name + "_clap_name");
}

void DiamondTrap::WhoAmI(void) {
	std::cout << "I'm " << this->getName() << ", and my ClapTrap name is: " << ClapTrap::getName() << std::endl;
}

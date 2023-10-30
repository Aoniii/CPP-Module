/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:33:15 by snourry           #+#    #+#             */
/*   Updated: 2022/09/29 16:33:15 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap() {
	std::cout << "[FragTrap] Default constructor called" << std::endl;
	this->hitPoint = 100;
	this->energyPoint = 100;
	this->attackDamage = 30;
}

FragTrap::~FragTrap(void) {
	std::cout << "[FragTrap] Destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &fragTrap): ClapTrap(fragTrap) {
	std::cout << "[FragTrap] Copy constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name) {
	std::cout << "[FragTrap] String constructor called" << std::endl;
	this->hitPoint = 100;
	this->energyPoint = 100;
	this->attackDamage = 30;
}

FragTrap &FragTrap::operator=(const FragTrap &fragTrap) {
	ClapTrap::operator=(fragTrap);
	return (*this);
}

void FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << this->name << " wants to make a high five." << std::endl;
}

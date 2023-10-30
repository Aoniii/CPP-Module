/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 01:03:17 by snourry           #+#    #+#             */
/*   Updated: 2022/09/29 01:03:17 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap() {
	std::cout << "[ScavTrap] Default constructor called" << std::endl;
	this->hitPoint = 100;
	this->energyPoint = 50;
	this->attackDamage = 20;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "[ScavTrap] Destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavTrap): ClapTrap(scavTrap) {
	std::cout << "[ScavTrap] Copy constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
	std::cout << "[ScavTrap] String constructor called" << std::endl;
	this->hitPoint = 100;
	this->energyPoint = 50;
	this->attackDamage = 20;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scavTrap) {
	ClapTrap::operator=(scavTrap);
	return (*this);
}

void ScavTrap::attack(const std::string &target) {
	if (this->hitPoint == 0)
	{
		std::cout << "ScavTrap " << this->name << " has died." << std::endl;
		return;
	}
	if (this->energyPoint == 0)
	{
		std::cout << "ScavTrap " << this->name << " has no energy left." << std::endl;
		return;
	}
	std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage !" << std::endl;
	this->energyPoint--;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->name << " enter on Gate keeper mode." << std::endl;
}

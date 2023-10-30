/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:39:15 by snourry           #+#    #+#             */
/*   Updated: 2022/09/28 16:39:15 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void):
	name(""), hitPoint(10), energyPoint(10), attackDamage(0) {
		std::cout << "[ClapTrap] Default constructor called" << std::endl;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "[ClapTrap] Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap):
	name(clapTrap.name), hitPoint(clapTrap.hitPoint),
	energyPoint(clapTrap.energyPoint), attackDamage(clapTrap.attackDamage) {
	std::cout << "[ClapTrap] Copy constructor called" << std::endl;
	}

ClapTrap::ClapTrap(std::string name):
	name(name), hitPoint(10), energyPoint(10), attackDamage(0) {
		std::cout << "[ClapTrap] String constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &clapTrap) {
	*this = ClapTrap(clapTrap);
	return (*this);
}

std::string ClapTrap::getName(void) {
	return (this->name);
}

void ClapTrap::setName(std::string name) {
	this->name = name;
}

unsigned int ClapTrap::getHitPoint(void) {
	return (this->hitPoint);
}

void ClapTrap::setHitPoint(unsigned int hitPoint) {
	this->hitPoint = hitPoint;
}

unsigned int ClapTrap::getEnergyPoint(void) {
	return (this->energyPoint);
}

void ClapTrap::setEnergyPoint(unsigned int energyPoint) {
	this->energyPoint = energyPoint;
}

unsigned int ClapTrap::getAttackDamage(void) {
	return (this->attackDamage);
}

void ClapTrap::setAttackDamage(unsigned int attackDamage) {
	this->attackDamage = attackDamage;
}

void ClapTrap::attack(const std::string &target) {
	if (this->hitPoint == 0)
	{
		std::cout << "ClapTrap " << this->name << " has died." << std::endl;
		return;
	}
	if (this->energyPoint == 0)
	{
		std::cout << "ClapTrap " << this->name << " has no energy left." << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage !" << std::endl;
	this->energyPoint--;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->hitPoint == 0)
	{
		std::cout << "ClapTrap " << this->name << " has died, he can't take any more damage." << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->name << " take " << amount << " points of damage !" << std::endl;
	if (amount >= this->hitPoint)
		this->hitPoint = 0;
	else
		this->hitPoint -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->hitPoint == 0)
	{
		std::cout << "ClapTrap " << this->name << " has died, it's too late." << std::endl;
		return;
	}
	if (this->energyPoint == 0)
	{
		std::cout << "ClapTrap " << this->name << " has no energy left." << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->name << " earns " << amount << " hit points !" << std::endl;
	this->energyPoint--;
	this->hitPoint += amount;
}

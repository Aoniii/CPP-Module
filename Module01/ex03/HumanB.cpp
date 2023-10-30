/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 20:09:16 by snourry           #+#    #+#             */
/*   Updated: 2022/09/20 20:09:16 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name):
	name(name) {}

HumanB::~HumanB(void) {}

void HumanB::setWeapon(Weapon &weapon) {
	this->weapon = &weapon;
}

void HumanB::attack(void) {
	std::cout << this->name << " attacks with ";
	if (this->weapon)
		std::cout << "their " << this->weapon->getType() << std::endl;
	else
		std::cout << "his fists" << std::endl;
}
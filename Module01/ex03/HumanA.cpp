/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 20:08:13 by snourry           #+#    #+#             */
/*   Updated: 2022/09/20 20:08:13 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon):
	name(name), weapon(weapon) {}

HumanA::~HumanA(void) {}

void HumanA::attack(void) {
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}

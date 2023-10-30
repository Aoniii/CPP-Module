/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:38:28 by snourry           #+#    #+#             */
/*   Updated: 2022/09/28 16:38:28 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void) {
	ScavTrap sacha("Sacha");

	std::cout << "ScavTrap " << sacha.getName() << " have " << sacha.getEnergyPoint() << " energy point." << std::endl;
	sacha.attack("Killian");
	std::cout << "ScavTrap " << sacha.getName() << " have " << sacha.getHitPoint() << " hit point." << std::endl;
	sacha.takeDamage(3);
	std::cout << "ScavTrap " << sacha.getName() << " have " << sacha.getHitPoint() << " hit point." << std::endl;
	sacha.beRepaired(5);
	std::cout << "ScavTrap " << sacha.getName() << " have " << sacha.getHitPoint() << " hit point." << std::endl;
	std::cout << "ScavTrap " << sacha.getName() << " have " << sacha.getEnergyPoint() << " energy point." << std::endl;
	sacha.guardGate();
	return (0);
}

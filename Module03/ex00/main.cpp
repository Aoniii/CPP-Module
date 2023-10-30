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

#include "ClapTrap.hpp"

int main(void) {
	ClapTrap sacha("Sacha");

	std::cout << "ClapTrap " << sacha.getName() << " have " << sacha.getEnergyPoint() << " energy point." << std::endl;
	sacha.attack("Killian");
	std::cout << "ClapTrap " << sacha.getName() << " take a sword and win 5 attack damage." << std::endl;
	sacha.setAttackDamage(5);
	sacha.attack("Killian");
	std::cout << "ClapTrap " << sacha.getName() << " have " << sacha.getHitPoint() << " hit point." << std::endl;
	sacha.takeDamage(3);
	std::cout << "ClapTrap " << sacha.getName() << " have " << sacha.getHitPoint() << " hit point." << std::endl;
	sacha.beRepaired(5);
	std::cout << "ClapTrap " << sacha.getName() << " have " << sacha.getHitPoint() << " hit point." << std::endl;
	std::cout << "ClapTrap " << sacha.getName() << " have " << sacha.getEnergyPoint() << " energy point." << std::endl;
	return (0);
}

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

#include "DiamondTrap.hpp"

int main(void) {
	DiamondTrap sacha("Sacha");

	sacha.WhoAmI();
	sacha.attack("Killian");
	sacha.guardGate();
	sacha.highFivesGuys();
	sacha.setName("Corentin");
	sacha.WhoAmI();
	return (0);
}

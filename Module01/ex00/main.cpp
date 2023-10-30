/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 12:29:43 by snourry           #+#    #+#             */
/*   Updated: 2022/09/20 13:56:17 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	Zombie zombie1("Zombie 1");
	Zombie *zombie2;
	
	zombie1.announce();
	zombie2 = newZombie("Zombie 2");
	zombie2->announce();
	randomChump("Zombie 3");
	delete (zombie2);
	return (0);
}
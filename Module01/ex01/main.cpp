/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 12:29:43 by snourry           #+#    #+#             */
/*   Updated: 2022/09/20 14:16:26 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#define N 3

int	main(void) {
	Zombie *horde;

	horde = zombieHorde(N, "Zombie");
	for (int i = 0; i < N; i++)
		horde[i].announce();
	delete [] horde;
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 16:35:53 by snourry           #+#    #+#             */
/*   Updated: 2022/10/30 16:35:53 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <list>

int	main(void) {
	std::list<int> list;
	int tab[5] = {7, 42, 0, 12, -321};

	for (int i = 0; i < 5; i++)
		list.push_back(tab[i]);
	std::cout << easyfind(list, 7) << std::endl;
	std::cout << easyfind(list, 42) << std::endl;
	std::cout << easyfind(list, -42) << std::endl;
	return (0);
}

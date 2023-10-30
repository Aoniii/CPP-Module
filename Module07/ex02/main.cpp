/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 03:33:35 by snourry           #+#    #+#             */
/*   Updated: 2022/10/30 03:33:35 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <cstdlib>
#include <iostream>

int	main(void) {
	Array<int> array(10);

	srand(time(NULL));
	for (int i = 0; i < 10; i++)
		array[i] = rand();

	for (int i = 0; i < 10; i++)
		std::cout << "Index:" << i << ", Value:" << array[i] << std::endl;

	//std::cout << "Index:" << i << ", Value:" << array[11] << std::endl;

	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 01:34:42 by snourry           #+#    #+#             */
/*   Updated: 2022/09/30 01:34:42 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Animal *animal[4];

	for (int i = 0; i < 4; i++)
	{
		if (i % 2)
			animal[i] = new Cat();
		else
			animal[i] = new Dog();
	}

	for (int i = 0; i < 4; i++)
		animal[i]->makeSound();

	for (int i = 0; i < 4; i++)
		delete animal[i];

	return (0);
}
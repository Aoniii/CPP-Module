/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 02:00:04 by snourry           #+#    #+#             */
/*   Updated: 2022/10/30 02:00:04 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <iostream>

int	main(void)
{
	Data		*data;
	uintptr_t	ptr;

	data = new Data;
	data->str = "Bonjour";
	data->i = 42;
	std::cout << "Before: str=" << data->str << ", i=" << data->i << "." << std::endl;
	ptr = serialize(data);
	data = deserialize(ptr);
	std::cout << "After: str=" << data->str << ", i=" << data->i << "." << std::endl;
	return (0);
}

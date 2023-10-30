/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 02:41:19 by snourry           #+#    #+#             */
/*   Updated: 2022/10/30 02:41:19 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int	main(void) {
	Base	*base;

	srand(time(NULL));
	for (int i = 1; i < 11; i++)
	{
		std::cout << "Base generated(" << i << ")" << std::endl;
		base = generate();
		identify(base);
		identify(*base);
	}
	return (0);
}

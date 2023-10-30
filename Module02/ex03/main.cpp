/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 11:20:51 by snourry           #+#    #+#             */
/*   Updated: 2022/09/28 02:29:07 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/* https://www.geogebra.org/classic?lang=fr */

int main(void) {
	Point a(3, 0.5);
	Point b(4, 2.5);
	Point c(5.5, 0.5);
	Point point(4.34, 1.75);

	if (bsp(a, b, c, point))
		std::cout << "This point is inside !" << std::endl;
	return (0);
}

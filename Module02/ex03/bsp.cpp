/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 23:52:45 by snourry           #+#    #+#             */
/*   Updated: 2022/09/27 23:52:45 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/*
	To know if a point is inside a triangle we check,
	for each side that the point is inside.
	If for all side this point is on a good side,
	the point is inside.

	Sources (for more information):
	https://stackoverflow.com/questions/2049582/how-to-determine-if-a-point-is-in-a-2d-triangle
*/

float sign(Point const point, Point const s1, Point const s2) {
	return ((point.getX().toFloat() - s2.getX().toFloat()) *
		(s1.getY().toFloat() - s2.getY().toFloat()) -
		(s1.getX().toFloat() - s2.getX().toFloat()) *
		(point.getY().toFloat() - s2.getY().toFloat()));
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
	float f1, f2, f3;
	bool b1, b2;

	f1 = sign(point, a, b);
	f2 = sign(point, b, c);
	f3 = sign(point, c, a);

	b1 = f1 < 0 || f2 < 0 || f3 < 0;
	b2 = f1 > 0 || f2 > 0 || f3 > 0;

	return (!(b1 && b2));
}
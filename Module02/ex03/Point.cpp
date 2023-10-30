/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 23:40:11 by snourry           #+#    #+#             */
/*   Updated: 2022/09/27 23:40:11 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void):
	x(Fixed(0)), y(Fixed(0)) {}

Point::~Point(void) {}

Point::Point(const Point &point):
	x(point.x), y(point.y) {}

Point::Point(const float &x, const float &y):
	x(Fixed(x)), y(Fixed(y)) {}

Point &Point::operator=(const Point &point) {
	(Fixed) this->x = point.getX();
	(Fixed) this->y = point.getY();
	return (*this);
}

Fixed Point::getX(void) const {
	return (this->x);
}

Fixed Point::getY(void) const {
	return (this->y);
}

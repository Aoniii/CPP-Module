/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 01:01:15 by snourry           #+#    #+#             */
/*   Updated: 2022/09/27 01:01:15 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point {
private:
	const Fixed x;
	const Fixed y;
public:
	Point();
	Point(const Point &point);
	Point(const float &x, const float &y);
	~Point();

	Point	&operator=(const Point &point);

	Fixed	getX(void) const;
	Fixed	getY(void) const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif

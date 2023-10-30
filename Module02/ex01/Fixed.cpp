/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 11:21:38 by snourry           #+#    #+#             */
/*   Updated: 2022/09/26 18:21:21 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void):
	rawBits(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(int const &fixed):
	rawBits(fixed << i) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const &fixed):
	rawBits(roundf(fixed * (1 << this->i))) {
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) {
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed & Fixed::operator = (const Fixed &fixed) {
	std::cout << "Copy assignment constructor called" << std::endl;
	this->rawBits = fixed.rawBits;
	return (*this);
}

std::ostream & operator << (std::ostream &os, const Fixed &fixed) {
	os << fixed.toFloat();
	return (os);
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->rawBits);
}

void Fixed::setRawBits(int const rawBits) {
	std::cout << "setRawBits member function called" << std::endl;
	this->rawBits = rawBits;
}

float Fixed::toFloat(void) const {
	return ((float) this->rawBits / (1 << i));
}

int Fixed::toInt(void) const {
	return (this->rawBits >> i);
}

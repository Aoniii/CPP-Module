/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 11:21:38 by snourry           #+#    #+#             */
/*   Updated: 2022/09/27 23:52:31 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void): rawBits(0) {}

Fixed::~Fixed(void) {}

Fixed::Fixed(int const &fixed): rawBits(fixed << i) {}

Fixed::Fixed(float const &fixed):
	rawBits(roundf(fixed * (1 << this->i))) {}

Fixed::Fixed(const Fixed &fixed) { *this = fixed; }

Fixed &Fixed::operator=(const Fixed &fixed) {
	this->rawBits = fixed.rawBits;
	return (*this);
}

int Fixed::getRawBits(void) const {
	return (this->rawBits);
}

void Fixed::setRawBits(int const rawBits) {
	this->rawBits = rawBits;
}

float Fixed::toFloat(void) const {
	return ((float) this->rawBits / (1 << i));
}

int Fixed::toInt(void) const {
	return (this->rawBits >> i);
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed) {
	os << fixed.toFloat();
	return (os);
}

bool Fixed::operator>(const Fixed &fixed) const {
	return (this->rawBits > fixed.getRawBits());
}

bool Fixed::operator<(const Fixed &fixed) const {
	return (this->rawBits < fixed.getRawBits());
}

bool Fixed::operator>=(const Fixed &fixed) const {
	return (this->rawBits >= fixed.getRawBits());
}

bool Fixed::operator<=(const Fixed &fixed) const {
	return (this->rawBits <= fixed.getRawBits());
}

bool Fixed::operator==(const Fixed &fixed) const {
	return (this->rawBits != fixed.getRawBits());
}

bool Fixed::operator!=(const Fixed &fixed) const {
	return (this->rawBits == fixed.getRawBits());
}

Fixed Fixed::operator+(const Fixed &fixed) const {
	Fixed tmp;
	tmp.setRawBits(this->getRawBits() + fixed.getRawBits());
	return (tmp);
}

Fixed Fixed::operator-(const Fixed &fixed) const {
	Fixed tmp;
	tmp.setRawBits(this->getRawBits() - fixed.getRawBits());
	return (tmp);
}

Fixed Fixed::operator*(const Fixed &fixed) const {
	Fixed tmp;
	tmp.setRawBits((this->getRawBits() * fixed.getRawBits()) / (1 << i));
	return (tmp);
}

Fixed Fixed::operator/(const Fixed &fixed) const {
	Fixed tmp;
	tmp.setRawBits((this->getRawBits() / fixed.getRawBits()) * (1 << i));
	return (tmp);
}

Fixed &Fixed::operator++(void) {
	this->rawBits++;
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed tmp = *this;
	this->rawBits++;
	return (tmp);
}

Fixed &Fixed::operator--(void) {
	this->rawBits--;
	return (*this);
}

Fixed Fixed::operator--(int) {
	Fixed tmp = *this;
	this->rawBits--;
	return (tmp);
}

Fixed &Fixed::min(Fixed &fixed1, Fixed &fixed2) {
	if (fixed1 < fixed2)
		return (fixed1);
	return (fixed2);
}

const Fixed &Fixed::min(const Fixed &fixed1, const Fixed &fixed2) {
	if (fixed1 < fixed2)
		return (fixed1);
	return (fixed2);
}

Fixed &Fixed::max(Fixed &fixed1, Fixed &fixed2) {
	if (fixed1 > fixed2)
		return (fixed1);
	return (fixed2);
}

const Fixed &Fixed::max(const Fixed &fixed1, const Fixed &fixed2) {
	if (fixed1 > fixed2)
		return (fixed1);
	return (fixed2);
}

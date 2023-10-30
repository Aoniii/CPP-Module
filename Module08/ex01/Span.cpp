/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 17:18:14 by snourry           #+#    #+#             */
/*   Updated: 2022/10/30 17:18:14 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <stdexcept>
#include <algorithm>

Span::Span(void): n(0) {}

Span::Span(unsigned int n): n(n) {}

Span::Span(Span const &span) {
	*this = span;
}

Span::~Span(void) {}

Span	&Span::operator=(Span const &span) {
	this->n = span.n;
	this->vector = std::vector<int>(this->n);
	for (unsigned int i = 0; i < this->n; i++)
		this->vector.at(i) = span.vector.at(i);
	return (*this);
}

void Span::addNumber(int number) {
	if (this->vector.size() >= this->n)
		throw std::out_of_range("Span is full.");
	this->vector.insert(this->vector.end(), number);
}

void Span::addNumber(std::vector<int> v) {
	if (this->vector.size() >= this->n)
		throw std::out_of_range("Span is full.");
	this->vector.insert(this->vector.end(), v.begin(), v.begin() + this->n - this->vector.size());
}

unsigned int Span::shortestSpan(void) {
	unsigned int out;
	
	if (this->vector.size() < 2)
		throw std::length_error("Span is too small.");

	std::vector<int> tmp = this->vector;
	std::sort(tmp.begin(), tmp.end());

	out = tmp.at(1) - tmp.at(0);
	for (unsigned int i = 0; i < this->n - 1; i++)
		if ((unsigned int)tmp.at(i + 1) - (unsigned int)tmp.at(i) < out)
			out = tmp.at(i + 1) - tmp.at(i);
	return (out);
}

unsigned int Span::longestSpan(void) {
	int min = *std::min_element(vector.begin(), vector.end());
	int max = *std::max_element(vector.begin(), vector.end());
	return (max - min);
}

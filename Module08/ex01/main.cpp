/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 17:58:20 by snourry           #+#    #+#             */
/*   Updated: 2022/10/30 17:58:20 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <cstdlib>

int main(void) {
	int tab[5] = {6, 3, 17, 9, 11};
	Span sp = Span(5);

	sp.addNumber(tab[0]);
	sp.addNumber(tab[1]);
	sp.addNumber(tab[2]);
	sp.addNumber(tab[3]);
	sp.addNumber(tab[4]);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << "\n" << std::endl;

	Span sp1 = Span(5);
	std::vector<int> vector;
	
	for (int i = 0; i < 5; i++)
		vector.push_back(tab[i]);

	sp1.addNumber(vector);

	std::cout << sp1.shortestSpan() << std::endl;
	std::cout << sp1.longestSpan() << "\n" << std::endl;

	srand(time(NULL));
	Span sp2 = Span(10000);

	for (int i = 0; i < 10000; i++)
		sp2.addNumber(rand());

	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;

	return (0);
}
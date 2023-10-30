/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 17:03:49 by snourry           #+#    #+#             */
/*   Updated: 2022/10/30 17:03:49 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>

class Span {
private:
	unsigned int		n;
	std::vector<int>	vector;
public:
	Span(void);
	Span(unsigned int n);
	Span(Span const &span);
	virtual ~Span(void);

	Span	&operator=(Span const &span);

	void			addNumber(int number);
	void			addNumber(std::vector<int> v);
	unsigned int	shortestSpan(void);
	unsigned int	longestSpan(void);
};

#endif

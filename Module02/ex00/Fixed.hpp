/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 11:21:03 by snourry           #+#    #+#             */
/*   Updated: 2022/09/23 00:04:16 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
private:
	int rawBits;
	static const int i = 8;
public:
	Fixed();
	Fixed(const Fixed &fixed);
	~Fixed();
	Fixed & operator = (const Fixed &fixed);
	int getRawBits(void) const;
	void setRawBits(int const i);
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 11:21:03 by snourry           #+#    #+#             */
/*   Updated: 2022/09/26 20:01:49 by snourry          ###   ########.fr       */
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
	Fixed(const int &fixed);
	Fixed(const float &fixed);
	~Fixed();
	
	Fixed	&operator=(const Fixed &fixed);

	int		getRawBits(void) const;
	void	setRawBits(int const i);
	float	toFloat(void) const;
	int		toInt(void) const;

	bool	operator>(const Fixed &fixed) const;
	bool	operator<(const Fixed &fixed) const;
	bool	operator>=(const Fixed &fixed) const;
	bool	operator<=(const Fixed &fixed) const;
	bool	operator==(const Fixed &fixed) const;
	bool	operator!=(const Fixed &fixed) const;

	Fixed	operator+(const Fixed &fixed) const;
	Fixed	operator-(const Fixed &fixed) const;
	Fixed	operator*(const Fixed &fixed) const;
	Fixed	operator/(const Fixed &fixed) const;
	
	Fixed	&operator++(void);
	Fixed	operator++(int);
	Fixed	&operator--(void);
	Fixed	operator--(int);

	static			Fixed &min(Fixed &fixed1, Fixed &fixed2);
	static const	Fixed &min(const Fixed &fixed1, const Fixed &fixed2);
	static			Fixed &max(Fixed &fixed1, Fixed &fixed2);
	static const	Fixed &max(const Fixed &fixed1, const Fixed &fixed2);
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif

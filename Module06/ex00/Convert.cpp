/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 23:06:30 by snourry           #+#    #+#             */
/*   Updated: 2022/10/29 23:06:30 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include <cmath>
#include <cstdio>

std::string itoa(int i)
{
	if (i == 0)
		return "0";
	std::string str;
	std::string sign = "";
	if (i < 0)
	{
		sign = "-";
		i *= -1;
	}
	while (i != 0)
	{
		str = (char)(i % 10 + '0') + str;
		i /= 10;
	}
	return (sign + str);
}

Convert::Convert(void): value(NULL) {}

Convert::Convert(char *value): value(value) {}

Convert::~Convert(void) {}

Convert &Convert::operator=(const Convert &convert) {
    this->value = convert.value;
    return (*this);
}

std::string	Convert::getChar(void) {
	int i = atoi(this->value);
	if (i == 0 && (this->value[0] != '0' || std::string(this->value).length() != 1))
		return ("impossible");
	if (i >= 32 && i <= 126)
		return ("'" + std::string((char *) &i) + "'");
	return ("Non displayable");
}

std::string	Convert::getInt(void) {
	int i = atoi(this->value);
	if (i == 0 && (this->value[0] != '0' || std::string(this->value).length() != 1))
		return ("impossible");
	return (itoa(i));
}

std::string	Convert::getDouble(void) {
	std::string	s1;
	char		*s2;
	int			i;
	bool		v;

	s2 = this->value;
	i = 0;
	v = false;
	if (s2[0] == '-')
	{
		s1 += '-';
		i++;
	}
	if (!(s2[i] >= '0' && s2[i] <= '9'))
		return (s2);
	while (s2[i])
	{
		if (s2[i] == '.' && !v)
		{
			s1 += s2[i];
			v = true;
		}
		else if (s2[i] >= '0' && s2[i] <= '9')
			s1 += s2[i];
		else
			break;
		i++;
	}
	if (!v)
		s1 += ".0";
	else if (s2[i - 1] == '.')
		s1 += '0';
	return (s1);
}

std::ostream &operator<<(std::ostream &os, Convert &convert) {
	os << "char: " << convert.getChar() << std::endl;
	os << "int: " << convert.getInt() << std::endl;
	os << "float: " << convert.getDouble() << "f"<< std::endl;
	os << "double: " << convert.getDouble() << std::endl;
	return (os);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 22:54:48 by snourry           #+#    #+#             */
/*   Updated: 2022/10/29 22:54:48 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <string>
#include <iostream>

class Convert
{
private:
	char	*value;
public:
	Convert(void);
	Convert(char *value);
	virtual	~Convert(void);

	Convert &operator=(const Convert &convert);

	std::string	getChar(void);
	std::string	getInt(void);
	std::string	getDouble(void);
};

std::ostream &operator<<(std::ostream &os, Convert &convert);

#endif

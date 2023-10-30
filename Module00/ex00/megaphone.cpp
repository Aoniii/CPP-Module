/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:04:14 by snourry           #+#    #+#             */
/*   Updated: 2022/09/19 13:56:20 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(int argc, char **argv)
{
	std::string str;
	int	i;
	int	j;

	if (argc == 1)
		str = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		i = 1;
		str = "";
		while (i < argc)
		{
			j = 0;
			while (argv[i][j])
			{
				str += std::toupper((char)argv[i][j]);
				j++;
			}
			i++;
		}
	}
	std::cout << str << std::endl;
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 22:42:50 by snourry           #+#    #+#             */
/*   Updated: 2022/10/29 22:42:50 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	Convert convert(argv[1]);
	std::cout << convert;
	return (0);
}

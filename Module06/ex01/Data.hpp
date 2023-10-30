/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 02:26:33 by snourry           #+#    #+#             */
/*   Updated: 2022/10/30 02:26:33 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <stdint.h>
# include <string>

struct Data
{
	std::string	str;
	int			i;
};

uintptr_t	serialize(Data *ptr);
Data		*deserialize(uintptr_t raw);

#endif

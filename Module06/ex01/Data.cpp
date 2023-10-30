/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 02:31:11 by snourry           #+#    #+#             */
/*   Updated: 2022/10/30 02:31:11 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t	serialize(Data *ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data		*deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data *>(raw));
}

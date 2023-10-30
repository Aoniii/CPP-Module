/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 03:23:04 by snourry           #+#    #+#             */
/*   Updated: 2022/10/30 03:23:04 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void	iter(T *tab, int len, void (*f)(T &t)) {
	for (int i = 0; i < len; i++) {
		(*f)(tab[i]);
	}
}

template <typename T>
void	print(T &t) {
	std::cout << t << std::endl;
}

#endif

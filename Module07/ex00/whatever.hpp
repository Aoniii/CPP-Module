/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 03:08:05 by snourry           #+#    #+#             */
/*   Updated: 2022/10/30 03:08:05 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHAT_EVER_HPP
# define WHAT_EVER_HPP

template <typename T>
void	swap(T &a, T &b) {
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T	&min(T &a, T &b) {
	if (a < b)
		return (a);
	return (b);
}

template <typename T>
T	&max(T &a, T &b){
	if (a > b)
		return (a);
	return (b);
}

#endif

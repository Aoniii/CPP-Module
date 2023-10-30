/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 16:36:13 by snourry           #+#    #+#             */
/*   Updated: 2022/10/30 16:36:13 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <stdexcept>

template <typename T>
int	&easyfind(T &container, int find) {
	typename T::iterator	iter = std::find(container.begin(), container.end(), find);

	if (iter == container.end())
		throw std::invalid_argument("Container doesn't contain this element.");
	return (*iter);
}

#endif

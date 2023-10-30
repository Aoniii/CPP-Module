/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:33:21 by snourry           #+#    #+#             */
/*   Updated: 2022/09/29 16:33:21 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: public ClapTrap {
public:
	FragTrap(void);
	~FragTrap(void);
	FragTrap(const FragTrap &fragTrap);
	FragTrap(std::string name);

	FragTrap &operator=(const FragTrap &fragTrap);

	void highFivesGuys(void);
};

#endif

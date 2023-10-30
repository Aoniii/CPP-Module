/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 00:56:38 by snourry           #+#    #+#             */
/*   Updated: 2022/09/29 00:56:38 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap {
public:
	ScavTrap(void);
	~ScavTrap(void);
	ScavTrap(const ScavTrap &scavTrap);
	ScavTrap(std::string name);

	ScavTrap &operator=(const ScavTrap &scavTrap);

	void attack(const std::string &target);
	void guardGate(void);
};

#endif

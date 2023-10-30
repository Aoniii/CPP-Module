/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:50:27 by snourry           #+#    #+#             */
/*   Updated: 2022/09/29 16:50:27 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap {
private:
	std::string name;
public:
	DiamondTrap(void);
	~DiamondTrap(void);
	DiamondTrap(const DiamondTrap &diamondTrap);
	DiamondTrap(std::string name);

	DiamondTrap &operator=(const DiamondTrap &diamondTrap);

	std::string	getName(void);
	void		setName(std::string name);

	void WhoAmI(void);

	using ScavTrap::attack;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:38:42 by snourry           #+#    #+#             */
/*   Updated: 2022/09/28 16:38:42 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

class ClapTrap {
protected:
	std::string name;
	unsigned int hitPoint;
	unsigned int energyPoint;
	unsigned int attackDamage;
public:
	ClapTrap(void);
	~ClapTrap(void);
	ClapTrap(const ClapTrap &clapTrap);
	ClapTrap(std::string name);

	ClapTrap &operator=(const ClapTrap &clapTrap);

	std::string		getName(void);
	void			setName(std::string name);
	unsigned int	getHitPoint(void);
	void			setHitPoint(unsigned int hitPoint);
	unsigned int	getEnergyPoint(void);
	void			setEnergyPoint(unsigned int energyPoint);
	unsigned int	getAttackDamage(void);
	void			setAttackDamage(unsigned int attackDamage);

	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif

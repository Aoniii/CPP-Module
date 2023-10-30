/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 20:09:21 by snourry           #+#    #+#             */
/*   Updated: 2022/09/20 20:09:21 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
private:
	Weapon *weapon;
	std::string name;
public:
	HumanB(std::string name);
	~HumanB(void);
	void setWeapon(Weapon &weapon);
	void attack(void);
};

#endif

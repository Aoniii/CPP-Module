/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 20:08:39 by snourry           #+#    #+#             */
/*   Updated: 2022/09/20 20:08:39 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA {
private:
	std::string name;
	Weapon &weapon;
public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA(void);
	void attack(void);
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:15:29 by snourry           #+#    #+#             */
/*   Updated: 2022/09/20 20:12:39 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon {
private:
	std::string type;
public:
	Weapon(std::string type);
	~Weapon(void);
	std::string getType(void);
	void setType(std::string type);
};

#endif

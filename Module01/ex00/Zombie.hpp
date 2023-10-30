/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 12:30:14 by snourry           #+#    #+#             */
/*   Updated: 2022/09/20 13:49:21 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie {
private:
	std::string name;
public:
	Zombie(std::string);
	~Zombie(void);
	void announce(void);
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif

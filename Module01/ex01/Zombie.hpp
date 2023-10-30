/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 12:30:14 by snourry           #+#    #+#             */
/*   Updated: 2022/09/20 16:17:41 by snourry          ###   ########.fr       */
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
	Zombie(void);
	~Zombie(void);
	void setName(std::string name);
	void announce(void);
};

Zombie *zombieHorde(int N, std::string name);

#endif

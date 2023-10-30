/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 17:45:20 by snourry           #+#    #+#             */
/*   Updated: 2022/10/01 17:45:20 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal {
protected:
	std::string type;
public:
	WrongAnimal(void);
	~WrongAnimal(void);
	WrongAnimal(const WrongAnimal &wrongAnimal);
	WrongAnimal(std::string type);

	WrongAnimal &operator=(const WrongAnimal &wrongAnimal);

	std::string getType(void) const;

	void makeSound(void) const;
};

#endif

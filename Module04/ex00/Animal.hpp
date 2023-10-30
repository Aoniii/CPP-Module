/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 23:27:21 by snourry           #+#    #+#             */
/*   Updated: 2022/09/29 23:27:21 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal {
protected:
	std::string type;
public:
	Animal(void);
	~Animal(void);
	Animal(const Animal &animal);
	Animal(std::string type);

	Animal &operator=(const Animal &animal);

	std::string getType(void) const;

	void virtual makeSound(void) const;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 01:34:04 by snourry           #+#    #+#             */
/*   Updated: 2022/09/30 01:34:04 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal {
private:
	Brain *brain;

public:
	Dog(void);
	~Dog(void);
	Dog(const Dog &dog);
	Dog(std::string name);

	Dog &operator=(const Dog &dog);

	void makeSound(void) const;
};

#endif

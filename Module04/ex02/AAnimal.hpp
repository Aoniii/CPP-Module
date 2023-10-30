/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 19:20:54 by snourry           #+#    #+#             */
/*   Updated: 2022/10/02 19:20:54 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <string>
# include <iostream>

class AAnimal {
protected:
	std::string type;

public:
	AAnimal(void);
	virtual ~AAnimal(void);
	AAnimal(const AAnimal &animal);
	AAnimal(std::string type);

	AAnimal &operator=(const AAnimal &animal);

	std::string getType(void) const;

	void virtual makeSound(void) const = 0;
};

#endif

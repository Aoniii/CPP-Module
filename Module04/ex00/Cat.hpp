/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 01:31:00 by snourry           #+#    #+#             */
/*   Updated: 2022/09/30 01:31:00 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat: public Animal {
public:
	Cat(void);
	~Cat(void);
	Cat(const Cat &cat);
	Cat(std::string name);

	Cat &operator=(const Cat &cat);

	void makeSound(void) const;
};

#endif

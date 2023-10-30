/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 18:16:47 by snourry           #+#    #+#             */
/*   Updated: 2022/10/01 18:16:47 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {
public:
	WrongCat(void);
	~WrongCat(void);
	WrongCat(const WrongCat &wrongCat);
	WrongCat(std::string name);

	WrongCat &operator=(const WrongCat &wrongCat);

	using WrongAnimal::makeSound;
};

#endif

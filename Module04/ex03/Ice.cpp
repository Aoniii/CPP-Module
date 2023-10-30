/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 01:08:22 by snourry           #+#    #+#             */
/*   Updated: 2022/10/03 01:08:22 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice(void): AMateria("ice") {}

Ice::~Ice() {}

Ice::Ice(const Ice &ice): AMateria(ice) {}

Ice &Ice::operator=(const Ice &ice) {
	this->type = ice.type;
	return (*this);
}

AMateria *Ice::clone(void) const {
	return (new Ice());
}

void Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

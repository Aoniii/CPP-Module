/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 01:17:26 by snourry           #+#    #+#             */
/*   Updated: 2022/10/03 01:17:26 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure(void): AMateria("cure") {}

Cure::~Cure() {}

Cure::Cure(const Cure &cure): AMateria(cure) {}

Cure &Cure::operator=(const Cure &cure) {
	this->type = cure.type;
	return (*this);
}

AMateria *Cure::clone(void) const {
	return (new Cure());
}

void Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

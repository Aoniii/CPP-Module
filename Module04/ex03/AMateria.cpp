/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 00:45:39 by snourry           #+#    #+#             */
/*   Updated: 2022/10/03 00:45:39 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(): type("") {}

AMateria::~AMateria() {}

AMateria::AMateria(const AMateria &materia): type(materia.type) {}

AMateria::AMateria(std::string const &type): type(type) {}

AMateria &AMateria::operator=(const AMateria &materia) {
	this->type = materia.type;
	return (*this);
}

std::string const &AMateria::getType(void) const {
	return (this->type);
}

void AMateria::use(ICharacter &target) {
	(void) target;
}
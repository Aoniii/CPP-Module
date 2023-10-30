/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 01:29:29 by snourry           #+#    #+#             */
/*   Updated: 2022/10/03 01:29:29 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {}

MateriaSource::~MateriaSource(void) {
	for (int i = 0; i < 4; i++)
		delete inventory[i];
}

MateriaSource::MateriaSource(const MateriaSource &materiaSource) {
	*this = materiaSource;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &materiaSource) {
	for (int i = 0; i < 4; i++) {
		delete inventory[i];
		inventory[i] = materiaSource.inventory[i];
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *materia) {
	for (int i = 0; i < 4; i++) {
		if (!inventory[i]) {
			inventory[i] = materia->clone();
			return;
		}
	}
}

AMateria *MateriaSource::createMateria(std::string const &type) {
	for (int i = 0; i < 4; i++)
		if (inventory[i]->getType() == type)
			return (inventory[i]->clone());
	return (0);
}
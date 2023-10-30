/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 01:44:19 by snourry           #+#    #+#             */
/*   Updated: 2022/10/03 01:44:19 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void): name(""), inventory() {}

Character::~Character(void) {
	for (int i = 0; i < 4; i++)
		delete inventory[i];
}

Character::Character(const Character &character) {
	operator=(character);
}

Character::Character(std::string name): name(name), inventory() {}

Character &Character::operator=(const Character &character) {
	for (int i = 0; i < 4; i++) {
		delete inventory[i];
		inventory[i] = character.inventory[i]->clone();
	}
	return (*this);
}

std::string const &Character::getName(void) const {
	return (name);
}

void Character::equip(AMateria *m) {
	for (int i = 0; i < 4; i++) {
		if (!inventory[i]) {
			inventory[i] = m;
			return;
		}
	}
}

void Character::unequip(int idx) {
	inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target) {
	if (inventory[idx])
		inventory[idx]->use(target);
}

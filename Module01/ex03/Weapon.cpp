/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 20:09:42 by snourry           #+#    #+#             */
/*   Updated: 2022/09/20 20:09:42 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
	this->type = type;
}

Weapon::~Weapon(void) {}

std::string Weapon::getType(void) {
	return (this->type);
}

void Weapon::setType(std::string type) {
	this->type = type;
}

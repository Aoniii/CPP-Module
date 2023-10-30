/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 03:33:39 by snourry           #+#    #+#             */
/*   Updated: 2022/10/02 03:33:39 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "[Brain] Default constructor called" << std::endl;
}

Brain::~Brain() {
	std::cout << "[Brain] Destructor called" << std::endl;
}

Brain::Brain(const Brain &brain) {
	std::cout << "[Brain] Copy constructor called" << std::endl;
	*this = brain;
}

Brain &Brain::operator=(const Brain &brain) {
	for (int i = 0; i < 100; i++)
		idea[i] = brain.idea[i];
	return (*this);
}

std::string *Brain::getIdea(void) {
	return (this->idea);
}

void Brain::setIdea(std::string idea[100]) {
	for (int i = 0; i < 100; i++)
		this->idea[i] = idea[i];
}

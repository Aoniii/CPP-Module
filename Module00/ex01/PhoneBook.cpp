/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:05:45 by snourry           #+#    #+#             */
/*   Updated: 2022/09/28 19:52:15 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>

Contact *PhoneBook::getContact(void)
{
	return (this->contact);
}

int	PhoneBook::getContactNumber(void)
{
	int i;

	i = 0;
	while (i < 8 && this->contact[i].isReal())
		i++;
	return (i);
}

void PhoneBook::removeFirst(void)
{
	int i;

	i = 0;
	while (i < 7)
	{
		this->contact[i] = this->contact[i + 1];
		i++;
	}
	this->contact[7].createFake();
}

void PhoneBook::add(void)
{
	Contact contact;
	
	contact.create();
	if (!contact.isReal())
		return;
	if (getContactNumber() == 8)
		removeFirst();
	this->contact[getContactNumber()] = contact;
}

PhoneBook *PhoneBook::init(void)
{
	int	i;

	i = 0;
	while (i < 8)
	{
		this->contact[i].createFake();
		i++;
	}
	return (this);
}

std::string	toShortString(std::string str)
{
	if (str.length() > 10)
	{
		str.resize(9);
		str.append(".");
	}
	return (str);
}

void PhoneBook::print(void)
{
	int	i;

	i = 1;
	std::cout << "     index|first name| last name|  nickname" << std::endl;
	while (i <= this->getContactNumber())
	{
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << toShortString(this->contact[i - 1].getFirstName()) << "|";;
		std::cout << std::setw(10) << toShortString(this->contact[i - 1].getLastName()) << "|";
		std::cout << std::setw(10) << toShortString(this->contact[i - 1].getNickName()) << std::endl;
		i++;
	}
}

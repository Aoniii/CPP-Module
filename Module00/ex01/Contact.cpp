/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 13:53:12 by snourry           #+#    #+#             */
/*   Updated: 2022/09/20 00:18:56 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::getFirstName(void)
{
	return (this->firstName);
}

std::string Contact::getLastName(void)
{
	return (this->lastName);
}

std::string Contact::getNickName(void)
{
	return (this->nickName);
}

std::string Contact::getPhoneNumber(void)
{
	return (this->phoneNumber);
}

std::string Contact::getSecret(void)
{
	return (this->secret);
}

bool Contact::isReal(void)
{
	return (this->real);
}

Contact *Contact::createFake(void)
{
	this->firstName = "";
	this->lastName = "";
	this->nickName = "";
	this->phoneNumber = "";
	this->secret = "";
	this->real = false;
	return (this);
}

bool isCorrectPhoneNumber(std::string phoneNumber)
{
	int i;

	i = 0;
	if (phoneNumber.length() != 14)
		return (false);
	while (i < 14)
	{
		if (!(phoneNumber.at(i) >= '0' && phoneNumber.at(i) <= '9'))
			return (false);
		if (!(phoneNumber.at(i + 1) >= '0' && phoneNumber.at(i + 1) <= '9'))
			return (false);
		i += 3;
	}
	if (phoneNumber.at(3) == ' ' && phoneNumber.at(6) == ' ' && phoneNumber.at(9) == ' ' && phoneNumber.at(12) == ' ')
		return (false);
	return (true);
}

Contact *Contact::create(void)
{
	this->real = false;
	std::cout << "Enter the first name:" << std::endl;
	std::getline(std::cin, this->firstName);
	if (!this->firstName.length())
	{
		std::cout << "The first name is empty !" << std::endl;
		return (this);
	}
	
	std::cout << "Enter the last name:" << std::endl;
	std::getline(std::cin, this->lastName);
	if (!this->lastName.length())
	{
		std::cout << "The last name is empty !" << std::endl;
		return (this);
	}
	
	std::cout << "Enter the nickname:" << std::endl;
	std::getline(std::cin, this->nickName);
	if (!this->nickName.length())
	{
		std::cout << "The nickname is empty !" << std::endl;
		return (this);
	}

	std::cout << "Enter the phone number:" << std::endl;
	std::getline(std::cin, this->phoneNumber);
	if (!isCorrectPhoneNumber(this->phoneNumber))
	{
		std::cout << "Incorrect phone number ! [Format: 00 00 00 00 00]" << std::endl;
		return (this);
	}

	std::cout << "Enter the darkest secret:" << std::endl;
	std::getline(std::cin, this->secret);
	if (!this->secret.length())
	{
		std::cout << "The darkest secret is empty !" << std::endl;
		return (this);
	}
	
	std::cout << "Contact added !" << std::endl;
	this->real = true;
	return (this);
}

void Contact::print(void)
{
	std::cout << "First name: " << this->firstName << std::endl;
	std::cout << "Last name: " << this->lastName << std::endl;
	std::cout << "Nickname: " << this->nickName << std::endl;
	std::cout << "Phone Number: " << this->phoneNumber << std::endl;
	std::cout << "Darkest secret: " << this->secret << std::endl;
}

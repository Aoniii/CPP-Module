/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:13:56 by snourry           #+#    #+#             */
/*   Updated: 2022/11/19 16:12:39 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <cstdlib>

void search(PhoneBook phoneBook)
{
	std::string buff;
	int	i;
	
	if (phoneBook.getContactNumber() == 0)
		std::cout << "You don't have any contact !" << std::endl;
	else
	{
		phoneBook.print();
		std::cout << "Enter the desired index:" << std::endl;
		std::getline(std::cin, buff);
		i = std::atoi(buff.c_str());
		if (buff.length() == 1 && (i >= 1 && i <= 8) && phoneBook.getContact()[i - 1].isReal())
			phoneBook.getContact()[i - 1].print();
		else
			std::cout << "This index is wrong !" << std::endl;
	}
}

int main(void)
{
	PhoneBook phoneBook;
	std::string buff;

	phoneBook.init();
	while (std::cin)
	{
		std::getline(std::cin, buff);
		if (buff == "ADD")
			phoneBook.add();
		else if (buff == "SEARCH")
			search(phoneBook);
		else if (buff == "EXIT")
			break;
	}
	return (0);
}

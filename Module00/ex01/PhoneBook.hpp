/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:07:28 by snourry           #+#    #+#             */
/*   Updated: 2022/09/20 00:03:14 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contact[8];
		int contactNumber;

	public:
		Contact *getContact(void);
		int	getContactNumber(void);
		void removeFirst(void);
		void add(void);
		PhoneBook *init(void);
		void print(void);
};

#endif

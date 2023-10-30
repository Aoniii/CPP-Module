/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 20:13:03 by snourry           #+#    #+#             */
/*   Updated: 2022/10/20 20:13:03 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"

typedef AForm* (*f)(std::string const target);

typedef struct {
	std::string	name;
	f			function;
}				FormType;

class Intern {
public:
	Intern(void);
	Intern(const Intern &intern);
	virtual ~Intern(void);

	Intern &operator=(const Intern &intern);

	AForm	*makeForm(std::string const form, std::string const target);
};

#endif

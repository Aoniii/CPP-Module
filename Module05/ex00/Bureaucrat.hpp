/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:01:44 by snourry           #+#    #+#             */
/*   Updated: 2022/10/15 15:01:44 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include <exception>

class Bureaucrat {
private:
	const std::string	name;
	int					grade;
public:
	Bureaucrat(void);
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &bureaucrat);
	virtual ~Bureaucrat(void);

	Bureaucrat &operator=(const Bureaucrat &bureaucrat);

	std::string	getName(void);
	int			getGrade(void);
	void		addGrade(int amount);
	void		removeGrade(int amount);

	class GradeTooHighException: public std::exception {
		virtual const char *what() const throw();
	};

	class GradeTooLowException: public std::exception {
		virtual const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &os, Bureaucrat &bureaucrat);

#endif

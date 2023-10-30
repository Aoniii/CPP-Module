/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 23:30:37 by snourry           #+#    #+#             */
/*   Updated: 2022/10/16 23:30:37 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
# include <exception>

class Bureaucrat;
class Form {
private:
	const std::string	name;
	bool				sign;
	const int			gradeToSign;
	const int			gradeToExecute;
public:
	Form(void);
	Form(std::string name, int gradeToSign, int gradeToExecute);
	Form(const Form &form);
	virtual ~Form(void);

	Form &operator=(const Form &form);

	std::string	getName(void);
	bool		isSigned(void);
	void		setSigned(bool sign);
	int			getGradeToSign(void);
	int			getGradeToExecute(void);

	void beSigned(Bureaucrat &bureaucrat);

	class GradeTooHighException: public std::exception {
		virtual const char *what() const throw();
	};

	class GradeTooLowException: public std::exception {
		virtual const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &os, Form &form);

#endif

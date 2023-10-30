/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:58:24 by snourry           #+#    #+#             */
/*   Updated: 2022/10/20 17:58:24 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <string>
# include <iostream>
# include <exception>

class Bureaucrat;
class AForm {
private:
	const std::string	name;
	bool				sign;
	const int			gradeToSign;
	const int			gradeToExecute;
public:
	AForm(void);
	AForm(std::string name, int gradeToSign, int gradeToExecute);
	AForm(const AForm &form);
	virtual ~AForm(void);

	AForm &operator=(const AForm &form);

	std::string	getName(void) const;
	bool		isSigned(void);
	void		setSigned(bool sign);
	int			getGradeToSign(void);
	int			getGradeToExecute(void);

	void			beSigned(Bureaucrat &bureaucrat);
	virtual void	execute(Bureaucrat const &executor) const;

	class GradeTooHighException: public std::exception {
		virtual const char *what() const throw();
	};

	class GradeTooLowException: public std::exception {
		virtual const char *what() const throw();
	};

	class UnenforceableException: public std::exception {
		virtual const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &os, AForm &form);

#endif

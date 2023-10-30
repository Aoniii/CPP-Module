/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:12:52 by snourry           #+#    #+#             */
/*   Updated: 2022/10/20 18:12:52 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"

class RobotomyRequestForm: public AForm {
private:
	std::string	target;
public:
	RobotomyRequestForm(void);
	RobotomyRequestForm(RobotomyRequestForm const &cpy);
	RobotomyRequestForm(std::string target);
	virtual ~RobotomyRequestForm(void);

	RobotomyRequestForm &operator=(RobotomyRequestForm const &src);

	void	execute(Bureaucrat const &executor) const;
};

#endif

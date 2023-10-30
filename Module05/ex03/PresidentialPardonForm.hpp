/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:13:49 by snourry           #+#    #+#             */
/*   Updated: 2022/10/20 18:13:49 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm: public AForm {
private:
	std::string	target;
public:
	PresidentialPardonForm(void);
	PresidentialPardonForm(PresidentialPardonForm const &cpy);
	PresidentialPardonForm(std::string target);
	virtual ~PresidentialPardonForm(void);

	PresidentialPardonForm &operator=(PresidentialPardonForm const &src);

	void	execute(Bureaucrat const &executor) const;
};

#endif

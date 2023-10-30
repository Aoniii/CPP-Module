/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:03:26 by snourry           #+#    #+#             */
/*   Updated: 2022/10/20 18:03:26 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"

class ShrubberyCreationForm: public AForm {
private:
	std::string	target;
public:
	ShrubberyCreationForm(void);
	ShrubberyCreationForm(ShrubberyCreationForm const &cpy);
	ShrubberyCreationForm(std::string target);
	virtual ~ShrubberyCreationForm(void);

	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &src);

	void	execute(Bureaucrat const &executor) const;
};

#endif

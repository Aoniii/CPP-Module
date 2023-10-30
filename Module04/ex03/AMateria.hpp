/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 23:54:15 by snourry           #+#    #+#             */
/*   Updated: 2022/10/02 23:54:15 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include <iostream>

class ICharacter;

class AMateria {
protected:
	std::string type;
public:
	AMateria(void);
	virtual ~AMateria(void);
	AMateria(const AMateria &materia);
	AMateria(std::string const &type);

	AMateria &operator=(const AMateria &materia);

	std::string const	&getType(void) const;

	virtual AMateria	*clone(void) const = 0;
	virtual void		use(ICharacter &target);
};

#endif

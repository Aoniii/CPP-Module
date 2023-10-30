/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 01:22:45 by snourry           #+#    #+#             */
/*   Updated: 2022/10/03 01:22:45 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource {
private:
	AMateria *inventory[4];
public:
	MateriaSource(void);
	virtual ~MateriaSource(void);
	MateriaSource(const MateriaSource &materiaSource);

	MateriaSource &operator=(const MateriaSource &materiaSource);

	virtual void		learnMateria(AMateria *materia);
	virtual AMateria	*createMateria(std::string const &type);
};

#endif

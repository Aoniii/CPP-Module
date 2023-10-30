/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 01:14:28 by snourry           #+#    #+#             */
/*   Updated: 2022/10/03 01:14:28 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure: public AMateria {
public:
	Cure(void);
	~Cure(void);
	Cure(const Cure &cure);

	Cure &operator=(const Cure &cure);

	virtual AMateria	*clone(void) const;
	virtual void		use(ICharacter &target);
};

#endif

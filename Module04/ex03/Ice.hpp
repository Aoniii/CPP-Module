/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 01:05:48 by snourry           #+#    #+#             */
/*   Updated: 2022/10/03 01:05:48 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice: public AMateria {
public:
	Ice(void);
	~Ice(void);
	Ice(const Ice &ice);

	Ice &operator=(const Ice &ice);

	virtual AMateria	*clone(void) const;
	virtual void		use(ICharacter &target);
};

#endif

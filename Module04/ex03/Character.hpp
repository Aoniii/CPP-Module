/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 01:45:04 by snourry           #+#    #+#             */
/*   Updated: 2022/10/03 01:45:04 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character: public ICharacter {
private:
	std::string name;
	AMateria *inventory[4];
public:
	Character(void);
	virtual ~Character(void);
	Character(const Character &character);
	Character(std::string name);

	Character &operator=(const Character &character);

	std::string const &getName(void) const;
	virtual void equip(AMateria *m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter &target);
};

#endif

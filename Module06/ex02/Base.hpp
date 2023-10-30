/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 02:44:06 by snourry           #+#    #+#             */
/*   Updated: 2022/10/30 02:44:06 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <cstdlib>
# include <string>
# include <iostream>

class Base {
public:
	virtual ~Base(void) {}
};

Base	*generate(void);
void	identify(Base *p);
void	identify(Base &p);

class A: public Base {};

class B: public Base {};

class C: public Base {};

#endif

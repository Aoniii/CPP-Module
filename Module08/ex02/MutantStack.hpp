/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 18:18:43 by snourry           #+#    #+#             */
/*   Updated: 2022/10/30 18:18:43 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>

template <typename T>
class MutantStack: public std::stack<T> {
public:
	MutantStack(void) {}
	MutantStack(MutantStack<T> const &mutantStack) { *this = mutantStack; }
	~MutantStack(void) {}

	MutantStack<T> &operator=(MutantStack<T> const &mutantStack) {
		this->c = mutantStack.c;
		return (*this);
	}

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator	begin(void) { return (this->c.begin()); }
	iterator	end(void) { return (this->c.end()); }
};

#endif

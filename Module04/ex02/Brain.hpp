/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 03:33:47 by snourry           #+#    #+#             */
/*   Updated: 2022/10/02 03:33:47 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

class Brain {
public:
	std::string idea[100];

	Brain(void);
	~Brain(void);
	Brain(const Brain &brain);

	std::string	*getIdea(void);
	void		setIdea(std::string idea[100]);

	Brain &operator=(const Brain &brain);
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:09:41 by snourry           #+#    #+#             */
/*   Updated: 2022/09/21 19:09:41 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>

class Harl {
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);

public:
	Harl(void);
	~Harl(void);
	void complain(std::string level);
};

#endif
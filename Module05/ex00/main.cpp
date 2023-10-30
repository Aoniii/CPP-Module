/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:01:04 by snourry           #+#    #+#             */
/*   Updated: 2022/10/15 15:01:04 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) {
    Bureaucrat sacha("Sacha", 1);
    std::cout << sacha << std::endl;
    sacha.removeGrade(2);
    std::cout << sacha << std::endl;
    try {
        sacha.addGrade(10);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    try {
        sacha.removeGrade(200);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    try {
        Bureaucrat test("test", 0);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    try {
        Bureaucrat test("test", 151);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return (0);
}

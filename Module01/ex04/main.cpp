/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snourry <snourry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 20:48:37 by snourry           #+#    #+#             */
/*   Updated: 2022/09/20 20:48:37 by snourry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

bool check(char **argv) {
	std::string filename(argv[1]);
	std::string s1(argv[2]);
	std::string s2(argv[3]);
	std::ifstream file;

	if (filename.length() == 0 || s1.length() == 0 || s2.length() == 0) {
		std::cout << "[ERROR] Args is empty !" << std::endl;
		return (false);
	}
	file.open(argv[1]);
	if (file.fail()) {
		std::cout << "[ERROR] The file doesn't exist !" << std::endl;
		return (false);
	}
	file.close();
	return (true);
}

std::string get(char **argv) {
	std::string str;
	std::ifstream file;
	char c;

	file.open(argv[1]);
	if (file.fail())
		return (NULL);
	while(!file.eof() && file >> std::noskipws >> c)
		str += c;
	file.close();
	return (str);
}

void replace(char **argv, std::string str) {
	std::ofstream file;
	int pos;

	file.open((std::string(argv[1]) + ".replace").c_str());
	if (file.fail())
		return;
	for (int i = 0; i < (int)str.length(); i++) {
		pos = str.find(argv[2], i);
		if (pos == i) {
			file << argv[3];
			i += std::string(argv[2]).length() - 1;
		}
		else
			file << str[i];
	}
	file.close();
}

int main(int argc, char **argv) {
	if (argc == 4) {
		if (check(argv))
			replace(argv, get(argv));
	}
	else
		std::cout << "[ERROR] Usage: ./sed <filename> <s1> <s2>" << std::endl;
	return (0);
}
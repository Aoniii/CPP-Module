#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <map>
#include <cstdlib>
#include <iomanip>

class BitcoinExchange {
	private:
		std::map<int, double>	data;
		bool					correct;

	public:
		BitcoinExchange(void);
		BitcoinExchange(const BitcoinExchange &bitcoinExchange);
		BitcoinExchange(std::string database);
		~BitcoinExchange(void);

		BitcoinExchange	&operator=(const BitcoinExchange &bitcoinExchange);

		bool	isCorrect(void);
		bool	addToMap(std::string line);
		void	send(std::string line);
};

#endif

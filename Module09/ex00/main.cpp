#include "BitcoinExchange.hpp"

#define DATABASE "data.csv"

int	main(int argc, char **argv) {
	BitcoinExchange	bitcoinExchange;
	std::ifstream	file;
	std::string		line;

	if (argc != 2) {
		std::cerr << "[\e[31mERROR\e[0m] Invalid number of arguments !" << std::endl;
		std::cerr << "Usage: ./btc <file>" << std::endl;
		return (1);
	}

	file.open(argv[1]);
	if (file.fail()) {
		std::cerr << "[\e[31mERROR\e[0m] The file doesn't exist !" << std::endl;
		return (1);
	}

	bitcoinExchange = BitcoinExchange(DATABASE);
	if (!bitcoinExchange.isCorrect())
		return (1);

	while (std::getline(file, line))
		bitcoinExchange.send(line);
	
	file.close();
	return (0);
}
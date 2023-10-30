#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void) {
	this->correct = false;
}

BitcoinExchange::~BitcoinExchange(void) {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &bitcoinExchange) {
	operator=(bitcoinExchange);
}

BitcoinExchange::BitcoinExchange(std::string database) {
	std::ifstream	file;
	std::string		line;
	int				i;

	this->correct = false;
	file.open(database.c_str());
	if (file.fail())
		return;

	i = 1;
	this->correct = true;
	while (std::getline(file, line)) {
		if (line == "date,exchange_rate") {
			i++;
			continue;
		}
		if (!addToMap(line)) {
			std::cerr << "[\e[31mERROR\e[0m] The database contains an error on the line("<< i << "): \"" << line << "\"" << std::endl;
			this->correct = false;
		}
		i++;
	}

	if (!this->correct)
		return;

	if (this->data.empty()) {
		std::cerr << "[\e[31mERROR\e[0m] The database doesn't contains data !" << std::endl;
		return;
	}

	file.close();
}

BitcoinExchange	&BitcoinExchange::operator=(const BitcoinExchange &bitcoinExchange) {
	this->data = bitcoinExchange.data;
	this->correct = bitcoinExchange.correct;
	return (*this);
}

bool	BitcoinExchange::isCorrect(void) {
	return (this->correct);
}

bool	BitcoinExchange::addToMap(std::string line) {
	int			nb_day[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	std::string	date;
	std::string	tmp;
	char		*s;
	int			vdate;
	double		value;
	int			i1;
	int			i2;

	vdate = 0;
	if (line.find(",") == std::string::npos || line.find(",") == line.size() - 1)
		return (false);
	date = line.substr(0, line.find(","));
	if (date.find_first_not_of("0123456789-") != std::string::npos)
		return (false);
	if (date.size() < 5 || date.at(0) == '-')
		return (false);
	if (date.find("-") == std::string::npos || date.find("-") == date.size() - 1)
		return (false);
	tmp = date.substr(0, date.find("-"));
	if (tmp.size() > 5)
		return (false);
	date.erase(0, tmp.size() + 1);
	vdate = std::atoi(tmp.c_str());
	if (vdate % 4 == 0 && (vdate % 100 != 0 || vdate % 400 == 0))
		nb_day[1]++;
	if (date.find("-") == std::string::npos || date.find("-") == date.size() - 1)
		return (false);
	tmp = date.substr(0, date.find("-"));
	if (tmp.size() > 2)
		return (false);
	date.erase(0, tmp.size() + 1);
	i1 = std::atoi(tmp.c_str());
	if (i1 > 12 || i1 < 1)
		return (false);
	if (date.find_first_not_of("0123456789") != std::string::npos || date.size() > 2)
		return (false);
	i2 = std::atoi(date.c_str());
	if (nb_day[i1 - 1] < i2 || i2 < 1)
		return (false);
	vdate = vdate * 10000 + i1 * 100 + i2;
	if (vdate < 20090103)
		return (false);
	value = std::strtod((line.substr(line.find(",") + 1).c_str()), &s);
	if (*s || value < 0)
		return (false);
	this->data.insert(std::pair<int, double>(vdate, value));
	return (true);
}

void BitcoinExchange::send(std::string line) {
	int			nb_day[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	std::string	date;
	std::string	tmp;
	char		*s;
	int			vdate;
	double		value;
	int			i1;
	int			i2;

	if (line == "date | value")
		return;
	if (line.find("|") == std::string::npos || line.find("|") + 3 > line.size()) {
		std::cerr << "Error: bad input => " << line << std::endl;
		return;
	}
	if (line.at(line.find("|") - 1) != ' ' || line.at(line.find("|") + 1) != ' ') {
		std::cerr << "Error: bad input => " << line << std::endl;
		return;
	}
	date = line.substr(0, line.find("|") - 1);
	if (date.find_first_not_of("0123456789-") != std::string::npos) {
		std::cerr << "Error: bad input => " << line << std::endl;
		return;
	}
	if (date.size() < 5 || date.find("-") == std::string::npos || date.find("-") == date.size() - 1) {
		std::cerr << "Error: bad input => " << line << std::endl;
		return;
	}
	tmp = date.substr(0, date.find("-"));
	vdate = std::atoi(tmp.c_str());
	if (vdate % 4 == 0 && (vdate % 100 != 0 || vdate % 400 == 0))
		nb_day[1]++;
	date.erase(0, tmp.size() + 1);
	tmp = date.substr(0, date.find("-"));
	date.erase(0, tmp.size() + 1);
	i1 = std::atoi(tmp.c_str());
	if (i1 > 12 || i1 < 1 || date.find_first_not_of("0123456789") != std::string::npos || date.size() > 2) {
		std::cerr << "Error: bad input => " << line << std::endl;
		return;
	}
	i2 = std::atoi(date.c_str());
	if (nb_day[i1 - 1] < i2 || i2 < 1) {
		std::cerr << "Error: bad input => " << line << std::endl;
		return;
	}
	vdate = vdate * 10000 + i1 * 100 + i2;
	value = std::strtod((line.substr(line.find("|") + 2).c_str()), &s);
	if (*s) {
		std::cerr << "Error: bad input => " << line << std::endl;
		return;
	}
	if (value < 0) {
		std::cerr << "Error: not a positive number." << std::endl;
		return;
	}
	if (value > 1000) {
		std::cerr << "Error: too large a number." << std::endl;
		return;
	}
	date = line.substr(0, line.find("|") - 1);
	if (vdate < this->data.begin()->first) {
		std::cout << "Error: too old date" << std::endl;
		return;
	}
	std::map<int, double>::iterator	it = this->data.upper_bound(vdate);
	if (it != this->data.begin())
		it--;
	std::cout << std::setprecision(2) << std::fixed << date << " => " << value << " = " << (it->second * value) << std::endl;
}

#include "PmergeMe.hpp"

bool	isInteger(std::string str);

int	main(int argc, char **argv) {
	PmergeMe	pmergeMe;

	if (argc < 2) {
		std::cerr << "[\e[31mERROR\e[0m] Invalid number of arguments !" << std::endl;
		std::cerr << "Usage: ./PmergeMe <integer>{,<integer>}" << std::endl;
		return (1);
	}

	for (int i = 1; i < argc; i++) {
		if (!isInteger(std::string(argv[i])) || std::string(argv[i]).size() < 1) {
			std::cerr << "[\e[31mERROR\e[0m] Invalid argument (" << argv[i] << ") !" << std::endl;
			return (false);
		}
	}

	pmergeMe.sort(argc, argv);
	pmergeMe.display();
	if (CHECK == 1)
		pmergeMe.checkIsSorted();

	return (0);
}

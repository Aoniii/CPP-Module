#include "RPN.hpp"

bool	isWhitespace(char c);

int main(int argc, char **argv) {
	RPN rpn;

	if (argc != 2) {
		std::cerr << "[\e[31mERROR\e[0m] Invalid number of arguments !" << std::endl;
		std::cerr << "Usage: ./RPN <calc>" << std::endl;
		return (1);
	}

	for (int i = 0; argv[1][i]; i++) {
		if (!isWhitespace(argv[1][i])) {
			if (argv[1][i + 1] && !isWhitespace(argv[1][i + 1])) {
				std::cerr << "Error" << std::endl;
				return (1);
			}
			if (!rpn.add(argv[1][i])) {
				std::cerr << "Error" << std::endl;
				return (1);
			}
		}
	}

	if (!rpn.show())
		return (1);
	return (0);
}
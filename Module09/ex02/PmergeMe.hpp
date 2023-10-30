#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <deque>
#include <vector>
#include <sstream>
#include <algorithm>
#include <sys/time.h>

#ifndef CHECK
# define CHECK 0
#endif

#ifndef BETTER
# define BETTER 0
#endif

class PmergeMe {
	private:
		std::vector<int>	start;
		std::vector<int>	v;
		std::deque<int>		d;

		size_t	vtime;
		size_t	dtime;

		int	size;

	public:
		PmergeMe(void);
		PmergeMe(const PmergeMe &pmergeMe);
		~PmergeMe(void);

		void	sort(int argc, char **argv);
		void	display(void);

		void	checkIsSorted(void);

		PmergeMe	&operator=(const PmergeMe &pmergeMe);
};

#endif
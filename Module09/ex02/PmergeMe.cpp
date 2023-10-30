#include "PmergeMe.hpp"

int	ft_strcmp(const char *s1, const char *s2) {
	while (*s1 && *s2 && *s1 == *s2) {
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

bool	isInteger(std::string str) {
	if (str.size() > 10)
		return (false);
	for (size_t i = 0; i < str.size(); i++)
		if (str.at(i) < '0' || str.at(i) > '9')
			return (false);
	if (str.size() == 10)
		if (ft_strcmp(str.c_str(), "2147483647") > 0)
			return (false);
	return (true);
}

template<typename T>
std::string toString(const T& value)
{
	std::ostringstream oss;
	oss << value;
	return oss.str();
}

template<typename T>
T	sortInsert(T& container) {
	typename T::iterator	it;
	T						out;

	out.push_back(container[0]);
	for (size_t i = 1; i < container.size(); i++) {
		it = out.begin();
		while (it != out.end()) {
			if (container[i] < *it)
				break;
			it++;
		}
		out.insert(it, container[i]);
	}
	return (out);
}

template<typename T>
T	sortMerge(T& container1, T& container2) {
	T	out;

	size_t	i = 0;
	size_t	j = 0;
	while (i < container1.size()) {
		while (j < container2.size()) {
			if (container1[i] < container2[j])
				break ;
			out.push_back(container2[j]);
			j++;
		}
		out.push_back(container1[i]);
		i++;
	}
	while (j < container2.size()) {
		out.push_back(container2[j]);
		j++;
	}
	return (out);
}

template<typename T>
T	separate(T& container, size_t start, size_t end) {
	T	out;

	while (start < end) {
		out.push_back(container[start]);
		start++;
	}
	return (out);
}

template<typename T>
T	sortMergeInsert(T& container, size_t size) {
	T	container1;
	T	container2;

	if (container.size() > size) {
		container1 = separate(container, 0, (container.size() / 2));
		container2 = separate(container, (container.size() / 2), container.size());
		container1 = sortMergeInsert(container1, size);
		container2 = sortMergeInsert(container2, size);
		return (sortMerge(container1, container2));
	}
	return (sortInsert(container));
}

template<typename T>
bool	isSorted(T& container) {
	typename T::iterator	prev;
	typename T::iterator	it;

	prev = container.begin();
	it = container.begin();
	it++;
	while (it != container.end()) {
		if (*prev > *it)
			return (false);
		prev = it;
		it++;
	}
	return (true);
}

size_t	timestamp(struct timeval time) {
	struct timeval	real_time;

	gettimeofday(&real_time, NULL);
	return ((real_time.tv_sec - time.tv_sec) * 1000000 + (real_time.tv_usec - time.tv_usec));
}

template<typename T>
std::string	show(T& container, std::string s) {
	typename T::iterator	it;

	it = container.begin();
	while (it != container.end()) {
		s.append(toString(*it)).append(" ");
		it++;
	}
	return (s);
}

PmergeMe::PmergeMe(void) {}
PmergeMe::~PmergeMe(void) {}

void	PmergeMe::sort(int argc, char **argv) {
	timeval time;
	size_t	size;

	for (int i = 1; i < argc; i++)
		this->start.push_back(atoi(argv[i]));

	if (this->start.size() <= 100)
		size = 10;
	else if (this->start.size() < 1000)
		size = 28;
	else
		size = 50;

	gettimeofday(&time,NULL);
	for (int i = 1; i < argc; i++)
		if (isInteger(std                                                                                                                                                                                                                                                                                   ::string(argv[i])))
			this->v.push_back(atoi(argv[i]));
	this->v = sortMergeInsert(this->v, size);
	this->vtime = timestamp(time);

	gettimeofday(&time,NULL);
	for (int i = 1; i < argc; i++)
		if (isInteger(std::string(argv[i])))
			this->d.push_back(atoi(argv[i]));
	this->d = sortMergeInsert(this->d, size);
	this->dtime = timestamp(time);
}

void	PmergeMe::display(void) {
	if (BETTER == 0) {
		std::cout << show(this->start, "Before: ") << std::endl;
		std::cout << show(this->v, "After:  ") << std::endl;
	}
	std::cout << "Time to process a range of " << this->v.size() << " elements with std::vector : " << (float)(this->vtime / 1000.f) << "ms" << std::endl;
	std::cout << "Time to process a range of " << this->d.size() << " elements with std::deque  : " << (float)(this->dtime / 1000.f) << "ms" << std::endl;
}

void	PmergeMe::checkIsSorted(void) {
	if (isSorted(this->v))
		std::cout << "Vector sorted !" << std::endl;
	if (isSorted(this->d))
		std::cout << "Deque sorted !" << std::endl;	
}

PmergeMe::PmergeMe(const PmergeMe &pmergeMe) {
	operator=(pmergeMe);
}

PmergeMe	&PmergeMe::operator=(const PmergeMe &pmergeMe) {
	this->v = pmergeMe.v;
	this->d = pmergeMe.d;
	this->vtime = pmergeMe.vtime;
	this->dtime = pmergeMe.dtime;
	this->size = pmergeMe.size;
	return (*this);
}

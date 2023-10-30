#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <string>
#include <stack>

class RPN {
	private:
		std::stack<float>	stack;

	public:
		RPN(void);
		RPN(const RPN &rpn);
		~RPN(void);

		RPN	&operator=(const RPN &rpn);

		bool	add(char c);
		bool	show(void);
};

#endif
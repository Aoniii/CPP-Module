#include "RPN.hpp"

bool	isWhitespace(char c) {
	if ((c >= 9 && c <= 13) || c == 32)
		return (true);
	return (false);
}

RPN::RPN(void) {}
RPN::~RPN(void) {}

bool	RPN::add(char c) {
	float	a;
	float	b;

	if (c >= '0' && c <= '9') {
		this->stack.push(c - 48);
		return (true);
	}
	if (c == '+' || c == '-' || c == '*' || c == '/') {
		if (this->stack.size() < 2)
			return (false);
		a = this->stack.top();
		this->stack.pop();
		b = this->stack.top();
		this->stack.pop();
		if (c == '+')
			this->stack.push(b + a);
		if (c == '-')
			this->stack.push(b - a);
		if (c == '*')
			this->stack.push(b * a);
		if (c == '/') {
			if (a == 0)
				return (false);
			this->stack.push(b / a);
		}
		return (true);
	}
	return (false);
}

bool	RPN::show(void) {
	if (this->stack.size() != 1) {
		std::cerr << "Error" << std::endl;
		return (false);
	}
	std::cout << this->stack.top() << std::endl;
	return (true);
}

RPN::RPN(const RPN &rpn) {
	operator=(rpn);
}

RPN	&RPN::operator=(const RPN &rpn) {
	this->stack = rpn.stack;
	return (*this);
}

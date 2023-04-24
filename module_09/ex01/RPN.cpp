#include "RPN.hpp"

static bool isOperator(std::string& token) {

	return token == "+" || token == "-" || token == "/" || token == "*";
}

static int performOperation(std::string& token, int a, int b) {

	if (token == "+")
		return a + b;
	else if (token == "-")
		return a - b;
	else if (token == "*")
		return a * b;
	else if (token == "/") {
		if (b == 0)
			throw std::runtime_error("Division by zero");
		return a / b;
	}
	return 0;
}

int evaluateRPN(std::string rpn) {

	std::stack<int> stack;
	std::istringstream iss(rpn);
	std::string token;
	while (iss >> token) {
		if (isOperator(token)) {
			if (stack.size() < 2) {
				throw std::runtime_error("Invalid RPN expression: not enough operands");
			}
			int b = stack.top(); stack.pop();
			int a = stack.top(); stack.pop();
			stack.push(performOperation(token, a, b));
		}
		else {
			try {
				std::size_t pos = 0;
				stack.push(std::stoi(token, &pos));
				if (pos != token.length())
					throw std::runtime_error("Invalid token: " + token);
			} catch (std::exception& e) {
				throw std::runtime_error("Invalid token: " + token);
			}
		}
	}
	if (stack.size() != 1) {
		throw std::runtime_error("Invalid RPN expresssion: to many operands");
	}
	return stack.top();
}

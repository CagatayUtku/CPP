/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 18:23:35 by Cutku             #+#    #+#             */
/*   Updated: 2023/11/11 18:50:06 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() : _input("")
{
}

RPN::RPN(std::string input) : _input(input)
{
}

RPN::RPN(const RPN &copy)
{
	*this = copy;
}

RPN::~RPN()
{
}

RPN &RPN::operator=(const RPN &copy)
{
	if (this != &copy)
	{
		this->_stack = copy._stack;
		this->_input = copy._input;
	}
	return (*this);
}

void RPN::run()
{
	try
	{
		parseInput();
		printResult();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	RPN::printResult()
{
	if (_stack.size() != 1)
		throw std::invalid_argument("Not enough operands");
	std::cout << std::fixed << std::setprecision(2) << _stack.top() << std::endl;
}

void RPN::parseInput()
{
	size_t	i;
	std::string operations = "+-*/";

	i = -1;
	while(++i < _input.length())
	{
		if (i % 2 == 0)
		{
			if (!isdigit(_input[i]) && operations.find(_input[i]) == std::string::npos)
				throw std::invalid_argument("Invalid input");
			else if (isdigit(_input[i]))
				_stack.push(_input[i] - '0');
			else
			{
				if (_stack.size() < 2)
					throw std::invalid_argument("Operation requires two operands");
				double a = _stack.top();
				_stack.pop(); 
				double b = _stack.top();
				_stack.pop();
				if (_input[i] == '+')
					_stack.push(b + a);
				else if (_input[i] == '-')
					_stack.push(b - a);
				else if (_input[i] == '*')
					_stack.push(b * a);
				else if (_input[i] == '/')
				{
					if (a == 0)
						throw std::invalid_argument("Division by zero");
					_stack.push(b / a);
				}
			}
		}
		else if (_input[i] != ' ')
			throw std::invalid_argument("Invalid input no space");
	}
}

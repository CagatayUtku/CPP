/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 16:57:29 by Cutku             #+#    #+#             */
/*   Updated: 2023/11/12 18:39:27 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void)
{
	return ;
}

PmergeMe::PmergeMe(char **argv)
{
	this->createInput(argv);
	this->createJacobsthal();
	printInput(this->_input);
	this->createPairs();
	// printJacobsthal(this->_jacobsthal);
	return ;
}

PmergeMe::PmergeMe(PmergeMe const &src)
{
	*this = src;
	return ;
}

PmergeMe::~PmergeMe(void)
{
	return ;
}

PmergeMe	&PmergeMe::operator=(PmergeMe const &rhs)
{
	if (this != &rhs)
	{
		this->_input = rhs._input;
		this->_jacobsthal = rhs._jacobsthal;
	}
	return (*this);
}

void	PmergeMe::createInput(char **argv)
{
	unsigned int	i = 1;
	unsigned int	tmp;

	while (argv[i])
	{
		tmp = isPositiveInteger(argv[i]);
		this->_input.push_back(tmp);
		i++;
	}
}

void	PmergeMe::createJacobsthal(void)
{
	unsigned int	i = 0;
	unsigned int	tmp;

	i = 1;
	if (this->_input.size() <= 1)
		return ;
	if (this->_input.size() > 1)
	{
		this->_jacobsthal.push_back(1);
		this->_jacobsthal.push_back(1);
	}
	i = 2;
	tmp = this->_jacobsthal[i - 1] + (2 * this->_jacobsthal[i - 2]);
	while (tmp < this->_input.size())
	{
		this->_jacobsthal.push_back(tmp);
		i++;
		tmp = this->_jacobsthal[i - 1] + (2 * this->_jacobsthal[i - 2]);
	}
}

void	PmergeMe::createPairs(void)
{
	std::vector<std::pair<unsigned int, unsigned int>> pairs;
	unsigned int	extra = 0;
	for (unsigned int i = 0; i < this->_input.size(); i++)
	{
		if (i + 1 < this->_input.size())
		{
			unsigned int first = this->_input[i];
			unsigned int second = this->_input[i + 1];
			if (first > second)
				pairs.push_back(std::make_pair(first, second));
			else
				pairs.push_back(std::make_pair(second, first));
		}
		else
			extra = this->_input[i];
	}
}

unsigned int	PmergeMe::isPositiveInteger(const std::string &str)
{
	unsigned	result;
	if (str.empty() || (!isdigit(str[0]) && str[0] != '+'))
		throw std::exception();
	for (unsigned i = 1; i < str.length(); i++)
	{
		if (!isdigit(str[i]))
			throw std::exception();
	}
	errno = 0;
	result = strtoul(str.c_str(), NULL, 10);
	if (errno != 0 || result > UINT_MAX)
		throw std::exception();
	return (result);
}












void printJacobsthal(std::vector<unsigned int> &jacobsthal)
{
	std::cout << "Jacobsthal: ";
	for (unsigned int i = 0; i < jacobsthal.size(); i++)
	{
		std::cout << jacobsthal[i];
		if (i < jacobsthal.size() - 1)
			std::cout << ", ";
	}
	std::cout << std::endl;
}

void printInput(std::vector<unsigned int> &input)
{
	std::cout << "Input: ";
	for (unsigned int i = 0; i < input.size(); i++)
	{
		std::cout << input[i];
		if (i < input.size() - 1)
			std::cout << ", ";
	}
	std::cout << std::endl;
}
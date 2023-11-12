/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:35:51 by Cutku             #+#    #+#             */
/*   Updated: 2023/11/07 14:45:02 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _n(0)
{
	// std::cout<<"Span default constructor called"<<std::endl;
}

Span::Span(unsigned int n) : _n(n)
{
	// std::cout<<"Span parameterized constructor called"<<std::endl;
}

Span::Span(const Span& copy)
{
	// std::cout<<"Span copy constructor called"<<std::endl;
	*this = copy;
}

Span::~Span()
{
	// std::cout<<"Span destructor called"<<std::endl;
}

Span&	Span::operator=(const Span& copy)
{
	if (this != &copy)
	{
		_n = copy._n;
		_set = copy._set;
	}
	return (*this);
}

void	Span::addNumber(int n)
{
	if (_set.size() >= _n)
		throw FullException();
	_set.insert(n);
}
unsigned int Span::getN() const
{
	return (_n);
}

std::multiset<int> Span::getSet() const
{
	return (_set);
}

int	Span::shortestSpan()
{
	if (_set.size() < 2)
		throw NoSpanException();
	std::multiset<int>::iterator it = _set.begin();
	std::multiset<int>::iterator it2 = _set.begin();
	it2++;
	int min = *it2 - *it;
	while (it2 != _set.end())
	{
		if (*it2 - *it < min)
			min = *it2 - *it;
		it++;
		it2++;
	}
	return (min);
}

int	Span::longestSpan()
{
	if (_set.size() < 2)
		throw NoSpanException();
	return (*(_set.rbegin()) - *(_set.begin()));
}


const char* Span::FullException::what() const throw()
{
	return ("Span is full");
}

const char* Span::NoSpanException::what() const throw()
{
	return ("No span to find");
}

const char* Span::NotEnoughSpaceException::what() const throw()
{
	return (_msg.c_str());
}

std::ostream &operator<<(std::ostream &out, Span &obj)
{
	std::multiset<int> sp = obj.getSet();
	std::multiset<int>::iterator it = sp.begin();
	while (it != sp.end())
	{
		out << *it << std::endl;
		it++;
	}
	return (out);
}

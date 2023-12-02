/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 13:31:39 by Cutku             #+#    #+#             */
/*   Updated: 2023/12/02 18:14:02 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Array.hpp"

template <typename T>
Array<T>::Array(void) : _size(0)
{
	this->_arr = new T[0];
	std::cout << "Array Default constructor called" << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n)
{
	this->_arr = new T[n];
	std::cout << "Array Parameterized constructor called" << std::endl;
}

template <typename T>
Array<T>::Array(Array const &src)
{
	std::cout << "Array Copy constructor called" << std::endl;
	this->_arr = new T[src._size];
	*this = src;
}

template <typename T>
Array<T>::~Array(void) 
{
	std::cout << "Array Destructor called" << std::endl;
	delete [] this->_arr;
}

template <typename T>
Array<T>	&Array<T>::operator=(Array const &src) {
	if (this != &src)
	{
		std::cout<< this->_size <<std::endl;
		std::cout<< this->_arr[0] <<std::endl;
		if (this->_arr)
			delete [] this->_arr;
		this->_size = src._size;
		this->_arr = new T[this->_size];
		for (unsigned int i = 0; i < this->_size; i++)
			this->_arr[i] = src._arr[i];
	}
	return (*this);
}

template <typename T>
T	&Array<T>::operator[](unsigned int i) {
	if (i >= this->_size)
		throw Array::OutOfRangeException();
	return (this->_arr[i]);
}

template <typename T>
unsigned int	Array<T>::size(void) const 
{
	return (this->_size);
}

template <typename T>
const char	*Array<T>::OutOfRangeException::what(void) const throw() {
	return ("Index out of range");
}
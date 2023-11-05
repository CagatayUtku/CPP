/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 13:31:39 by Cutku             #+#    #+#             */
/*   Updated: 2023/11/04 13:39:14 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Array.hpp"

template <typename T>
Array<T>::Array(void) : _size(0), _arr(NULL)
{
}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n), _arr(new T[n]) {
}

template <typename T>
Array<T>::Array(Array const &src) {
	*this = src;
}

template <typename T>
Array<T>::~Array(void) {
	delete [] this->_arr;
}

template <typename T>
Array<T>	&Array<T>::operator=(Array const &src) {
	if (this != &src) {
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
unsigned int	Array<T>::size(void) const {
	return (this->_size);
}

template <typename T>
const char	*Array<T>::OutOfRangeException::what(void) const throw() {
	return ("Index out of range");
}
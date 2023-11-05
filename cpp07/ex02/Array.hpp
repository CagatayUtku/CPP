/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 13:19:20 by Cutku             #+#    #+#             */
/*   Updated: 2023/11/04 13:40:49 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <string>
#include <iostream>

template <typename T>
class Array
{
	private:
		T				*_array;
		unsigned int	_size;
	public:
		Array();
		Array(unsigned int n);
		Array(Array const &copy);
		~Array();
		Array &operator=(Array const &copy);
		T &operator[](unsigned int i);
		unsigned int size() const;
		class OutOfRangeException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

#include "Array.tpp"

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 13:19:20 by Cutku             #+#    #+#             */
/*   Updated: 2023/12/02 17:30:49 by Cutku            ###   ########.fr       */
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
		unsigned int	_size;
		T				*_arr;
	public:
		Array();
		Array(unsigned int n);
		Array(Array const &copy);
		Array &operator=(Array const &copy);
		~Array();
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
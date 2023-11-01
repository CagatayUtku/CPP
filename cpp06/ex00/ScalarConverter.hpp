/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:09:57 by Cutku             #+#    #+#             */
/*   Updated: 2023/11/01 18:29:30 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <limits>

class	ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &copy);
		ScalarConverter &operator=(const ScalarConverter &copy);
		~ScalarConverter();
	public:
		static	void typeCheck(char *str);
		static	void convert(char *str);
		static	void printChar(char *str);
		static	void printInt(char *str);
		static	void printFloat(char *str);
		static	void printDouble(char *str);
		
		class NonDisplayableException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class ImpossibleException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		

};

#endif
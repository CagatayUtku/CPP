/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:09:57 by Cutku             #+#    #+#             */
/*   Updated: 2023/11/27 18:57:37 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <limits>
#include <cerrno>
#include <cstring>

enum e_type
{
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	NON_DISPLAYABLE,
	IMPOSSIBLE
};

class	ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &copy);
		ScalarConverter &operator=(const ScalarConverter &copy);
		~ScalarConverter();
	public:
		static	int typeSelector(char *str);
		static	void convert(char *str);
		static	char valueChar(char *str);
		static	int valueInt(char *str);
		static	float valueFloat(char *str);
		static	double valueDouble(char *str);
		static	bool isChar(char *str);
		static	bool isInt(char *str);
		static	bool isFloat(char *str);
		static	bool isDouble(char *str);
		
		class ImpossibleException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		

};

#endif
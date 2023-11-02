/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:31:57 by Cutku             #+#    #+#             */
/*   Updated: 2023/11/02 18:32:02 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{
	*this = copy;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &copy)
{
	if (this != &copy)
	{
	}
	return (*this);
}

ScalarConverter::~ScalarConverter()
{
}
//convert check functions

bool convertableInt(double bla)
{
	if (bla > std::numeric_limits<int>::max() || bla < std::numeric_limits<int>::min())
		return (false);
	return (true);
}

int convertableChar(double bla)
{
	if (bla > 127)
		return (IMPOSSIBLE);
	if (bla > 126 || bla < 32)
		return (NON_DISPLAYABLE);
	return (true);
}

bool convertableFloat(double bla)
{
	if (bla > std::numeric_limits<float>::max() || bla < -std::numeric_limits<float>::max())
		return (false);
	return (true);
}

void ScalarConverter::convert(char *str)
{
	int type;

	type = typeSelector(str);
	if (type == -1)
	{
		std::cout<<"Error: Invalid input"<<std::endl;
		return ;
	}
	try
	{	
		switch (type)
		{
			case CHAR:
			{
				char a = valueChar(str);
				std::cout<<"char: "<<a<<std::endl;
				std::cout<<"int: "<<static_cast<int>(str[0])<<std::endl;
				std::cout<<"float: "<<std::setprecision(1)<<static_cast<float>(str[0])<<'f'<<std::endl;
				std::cout<<"double: "<<std::setprecision(1)<<static_cast<double>(str[0])<<std::endl;
				break;
			}
			case INT:
			{
				int _int = valueInt(str);
				if (convertableChar(_int) == NON_DISPLAYABLE)
					std::cout<<"char: Non displayable"<<std::endl;
				else if (convertableChar(_int) == IMPOSSIBLE)
					std::cout<<"char: impossible"<<std::endl;
				else
					std::cout<<"char: "<<static_cast<char>(_int)<<std::endl;
				std::cout<<"int: "<<_int<<std::endl;
				std::cout<<"float: "<<std::setprecision(1)<<static_cast<float>(_int)<<'f'<<std::endl;
				std::cout<<"double: "<<std::setprecision(1)<<static_cast<double>(_int)<<std::endl;
				break;
			}
			case FLOAT:
			{
				float _float = valueFloat(str);
				if (convertableChar(_float) == NON_DISPLAYABLE)
					std::cout<<"char: Non displayable"<<std::endl;
				else if (convertableChar(_float) == IMPOSSIBLE)
					std::cout<<"char: impossible"<<std::endl;
				else
					std::cout<<"char: "<<static_cast<char>(_float)<<std::endl;
				if (convertableInt(_float) == false)
					std::cout<<"int: impossible"<<std::endl;
				else
					std::cout<<"int: "<<static_cast<int>(_float)<<std::endl;
				std::cout<<"float: "<<_float<<'f'<<std::endl;
				std::cout<<"double: "<<static_cast<double>(_float)<<std::endl;
				break;
			}
			case DOUBLE:
			{
				double _double = valueDouble(str);
				if (convertableChar(_double) == NON_DISPLAYABLE)
					std::cout<<"char: Non displayable"<<std::endl;
				else if (convertableChar(_double) == IMPOSSIBLE)
					std::cout<<"char: impossible"<<std::endl;
				else
					std::cout<<"char: "<<static_cast<char>(_double)<<std::endl;
				if (convertableInt(_double) == false)
					std::cout<<"int: impossible"<<std::endl;
				else
					std::cout<<"int: "<<static_cast<int>(_double)<<std::endl;
				if (convertableFloat(_double) == false)
					std::cout<<"float: impossible"<<std::endl;
				else
					std::cout<<"float: "<<static_cast<float>(_double)<<'f'<<std::endl;
				std::cout<<"double: "<<_double<<std::endl;
				break;
			}
			default:
				break;
		}
	}
	catch (std::exception &e)
	{
		std::cout<<e.what()<<std::endl;
	}
}

//type check functions

int	ScalarConverter::typeSelector(char *str)
{
	if (isChar(str))
		return (0);
	else if (isInt(str))
		return (1);
	else if (isFloat(str))
		return (2);
	else if (isDouble(str))
		return (3);
	return (-1);
}

bool ScalarConverter::isChar(char *str)
{
	if (std::strlen(str) == 1 && !std::isdigit(str[0]))
		return (true);
	return (false);
}

bool ScalarConverter::isInt(char *str)
{
	unsigned long	 i;

	i = 0;
	while(std::isdigit(str[i]))
		i++;
	if (i == std::strlen(str))
		return (true);
	return (false);
}

bool ScalarConverter::isFloat(char *str)
{
	unsigned long	i;
	int		dot;
	int		f;

	i = 0;
	dot = 0;
	f = 0;
	while (str[i] != '\0')
	{
		if (std::isdigit(str[i]))
			i++;
		else if (str[i] == '.')
		{
			//dot has to be only once.
			if (dot == 1)
				return (false);
			dot = 1;
			i++;
		}
		else if (str[i] == 'f')
		{
			//f has to be at the end otherwise false.
			if (i != std::strlen(str) - 1)
				return (false);
			f = 1;
			i++;
		}
		else
			return (false);
	}
	if (dot != 1 || f != 1)
		return (false);
	return (true);
}

bool ScalarConverter::isDouble(char *str)
{
	int		i;
	int		dot;

	i = 0;
	dot = 0;
	while (str[i] != '\0')
	{
		if (std::isdigit(str[i]))
			i++;
		else if (str[i] == '.')
		{
			//dot has to be only once.
			if (dot == 1)
				return (false);
			dot = 1;
			i++;
		}
		else
			return (false);
	}
	if (dot != 1)
		return (false);
	return (true);
}

//value functions

char ScalarConverter::valueChar(char *str)
{
	return (str[0]);
}

int ScalarConverter::valueInt(char *str)
{
	char *end;
	int i;

	errno = 0;
	i = strtol(str, &end, 10);
	if (errno == ERANGE)
		throw ScalarConverter::ImpossibleException();
	return (i);
}

float ScalarConverter::valueFloat(char *str)
{
	char *end;
	float f;


	errno = 0;
	f =	strtof(str, &end);
	if (errno != 0)
		throw ScalarConverter::ImpossibleException();
	return (f);
}

double ScalarConverter::valueDouble(char *str)
{
	char *end;
	double d;
	d = strtod(str, &end);
	if (errno == ERANGE)
		throw ScalarConverter::ImpossibleException();
	return (d);
}

//exception classes

const char* ScalarConverter::NonDisplayableException::what() const throw()
{
	return ("Non displayable");
}

const char* ScalarConverter::ImpossibleException::what() const throw()
{
	return ("char: impossible\nint: impossible\nfloat: impossible\ndouble: impossible");
}
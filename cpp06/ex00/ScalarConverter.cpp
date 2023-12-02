/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:31:57 by Cutku             #+#    #+#             */
/*   Updated: 2023/12/02 13:36:38 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

//Ortodox - Canonical - Form

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

//convert error-functions

bool convertableInt(double bla)
{
	if (bla > std::numeric_limits<int>::max() || bla < std::numeric_limits<int>::min())
		return (false);
	return (true);
}

int convertableChar(double bla)
{
	if (bla > 127 || bla < 0)
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

//type selector functions

bool isChar(char *str)
{
	if (std::strlen(str) == 1 && !std::isdigit(str[0]))
		return (true);
	return (false);
}

bool isInt(char *str)
{
	unsigned long	 i;

	i = 0;
	if (str[0] == '-' || str[0] == '+')
		i++;
	while(std::isdigit(str[i]))
		i++;
	if (i == std::strlen(str))
		return (true);
	return (false);
}

bool isFloat(char *str)
{
	unsigned long	i;
	int		dot = 0;
	int		f = 0;
	unsigned long	sign = 0;

	if (str[0] == '-' || str[0] == '+')
		sign = 1;
	i = sign;
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
	if (dot != 1 || f != 1 || i <= sign + 2)
		return (false);
	return (true);
}

bool isDouble(char *str)
{
	int		i;
	int		dot;

	i = 0;
	dot = 0;
	if (str[0] == '-' || str[0] == '+')
		i++;
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

int	typeSelector(char *str)
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
//value functions

char valueChar(char *str)
{
	return (str[0]);
}

int valueInt(char *str)
{
	char *end;
	long value;

	errno = 0;
	value = strtol(str, &end, 10);
	if (errno != 0 || value > std::numeric_limits<int>::max() || value < std::numeric_limits<int>::min())
		throw ScalarConverter::ImpossibleException();
	return (static_cast<int>(value));
}

float valueFloat(char *str)
{
	char *end;
	float f;


	errno = 0;
	f =	strtof(str, &end);
	if (errno != 0)
		throw ScalarConverter::ImpossibleException();
	return (f);
}

double valueDouble(char *str)
{
	char *end;
	double d;

	errno = 0;
	d = strtod(str, &end);
	if (errno != 0)
		throw ScalarConverter::ImpossibleException();
	return (d);
}

bool pseudoLiterals(char *str)
{
	std::string input = str;
	if (input == "-inff" || input == "+inff" || input == "nanf")
	{
		std::cout<<"char: impossible"<<std::endl<<"int: impossible"<<std::endl<<"float: "<<input<<std::endl<<"double: "<<input.substr(0, input.length() - 1)<<std::endl;
		return (true);
	}
	else if (input == "-inf" || input == "+inf" || input == "nan")
	{
		std::cout<<"char: impossible"<<std::endl<<"int: impossible"<<std::endl<<"float: "<<input<<"f"<<std::endl<<"double: "<<input<<std::endl;
		return (true);
	}
	return (false);
}
//convert member function

void ScalarConverter::convert(char *str)
{
	int type;

	if (pseudoLiterals(str))
		return ;
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
				std::cout<<"char: '"<<a<<"'"<<std::endl;
				std::cout<<"int: "<<static_cast<int>(str[0])<<std::endl;
				std::cout<<"float: "<<std::setprecision(2)<<static_cast<float>(str[0])<<'f'<<std::endl;
				std::cout<<"double: "<<std::setprecision(2)<<static_cast<double>(str[0])<<std::endl;
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
					std::cout<<"char: '"<<static_cast<char>(_int)<<"'"<<std::endl;
				std::cout<<"int: "<<_int<<std::endl;
				std::cout<<"float: "<<std::setprecision(2)<<static_cast<float>(_int)<<'f'<<std::endl;
				std::cout<<"double: "<<std::setprecision(2)<<static_cast<double>(_int)<<std::endl;
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
					std::cout<<"char: '"<<static_cast<char>(_float)<<"'"<<std::endl;
				if (convertableInt(_float) == false)
					std::cout<<"int: impossible"<<std::endl;
				else
					std::cout<<"int: "<<static_cast<int>(_float)<<std::endl;
				std::cout<<"float: "<<std::setprecision(2)<<_float<<'f'<<std::endl;
				std::cout<<"double: "<<std::setprecision(2)<<static_cast<double>(_float)<<std::endl;
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
					std::cout<<"char: '"<<static_cast<char>(_double)<<"'"<<std::endl;
				if (convertableInt(_double) == false)
					std::cout<<"int: impossible"<<std::endl;
				else
					std::cout<<"int: "<<static_cast<int>(_double)<<std::endl;
				if (convertableFloat(_double) == false)
					std::cout<<"float: impossible"<<std::endl;
				else
					std::cout<<"float: "<<std::setprecision(2)<<static_cast<float>(_double)<<'f'<<std::endl;
				std::cout<<"double: "<<std::setprecision(2)<<_double<<std::endl;
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

//exception classes

const char* ScalarConverter::ImpossibleException::what() const throw()
{
	return ("char: impossible\nint: impossible\nfloat: impossible\ndouble: impossible");
}
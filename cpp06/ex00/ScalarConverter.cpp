/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:31:57 by Cutku             #+#    #+#             */
/*   Updated: 2023/11/01 18:32:14 by Cutku            ###   ########.fr       */
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

void ScalarConverter::convert(char *str)
{

}

void	ScalarConverter::typeCheck(char *str)
{
	if (std::strlen(str) == 1 && !std::isdigit(str[0]))
	{
		std::cout<<"char: '"<<str<<"'"<<std::endl;
		std::cout<<"int: "<<static_cast<int>(str[0])<<std::endl;
		std::cout<<"float: "<<static_cast<float>(str[0])<<"f"<<std::endl;
		std::cout<<"double: "<<static_cast<double>(str[0])<<std::endl;
		return ;
	}
	else if (std::strchr(str, '.') == NULL)
	{
		printChar(str);
		std::cout<<"int: "<<static_cast<int>(str[0])<<std::endl;
		std::cout<<"float: "<<static_cast<float>(str[0])<<"f"<<std::endl;
		std::cout<<"double: "<<static_cast<double>(str[0])<<std::endl;
		return ;
	}

}

void ScalarConverter::printChar(char *str)
{
	char c = std::atoi(str);
	if (errno == ERANGE)
	{
		std::cout<<"char: impossible"<<std::endl;
		return ;
	}
	std::cout<<"char: ";
	if (c < 32 || c > 126)
		std::cout<<"Non displayable"<<std::endl;
	else
		std::cout<<"'"<<c<<"'"<<std::endl;
}

void ScalarConverter::printInt(char *str)
{
	int i = std::atoi(str);
	if (errno == ERANGE)
	{
		std::cout<<"int: impossible"<<std::endl;
		return ;
	}
	std::cout<<"int: "<<i<<std::endl;
}

void ScalarConverter::printFloat(char *str)
{
	float f = std::atof(str);
	if (errno == ERANGE)
	{
		std::cout<<"float: impossible"<<std::endl;
		return ;
	}
	std::cout<<"float: "<<std::fixed<<std::setprecision(1)<<f<<"f"<<std::endl;
}
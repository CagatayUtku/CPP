/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitCoinExchance.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:42:28 by Cutku             #+#    #+#             */
/*   Updated: 2023/11/11 16:48:33 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitCoinExchance.hpp"

BitCoinExchance::BitCoinExchance()
{
	std::cout<<"Default constructor called"<<std::endl;
	this->readDataFile();
}

BitCoinExchance::BitCoinExchance(std::string inputFile) : _inputFile(inputFile)
{
	std::cout<<"Parameterized constructor called"<<std::endl;
	this->readDataFile();
	this->readInputFile();
}

BitCoinExchance::BitCoinExchance(BitCoinExchance const &copy)
{
	*this = copy;
}

BitCoinExchance &BitCoinExchance::operator=(BitCoinExchance const &copy)
{
	// if (this != &copy)
	// {
	// 	this->_inputFile = copy._inputFile;
	// 	this->_dataFile = copy._dataFile;
	// 	this->_databaseMap = copy._databaseMap;
	// }
	return (*this);
}

BitCoinExchance::~BitCoinExchance()
{
}

void	BitCoinExchance::readDataFile()
{
	std::string firstLine;
	std::string date;
	std::string value;
	std::ifstream file("data.csv");

	if (!file.is_open())
	{
		std::cerr << "Error: Could not open file" << std::endl;
		exit(1);
	}
	if (std::getline(file, firstLine, '\n'))
	{
		if (firstLine != "date,exchange_rate")
		{
			std::cerr << "Error: Invalid file format" << std::endl;
			exit(1);
		}
	}
	while (true)
	{
		try
		{
			std::getline(file, date, ',');
			std::getline(file, value);
			if (!value.empty() && !date.empty())
			{
				this->_databaseMap.insert(std::make_pair(date, strtof(value.c_str(), NULL)));
			}
			if (file.eof())
				break;
		}
		catch(std::exception &e)
		{
			std::cerr << "Error: " << e.what() << std::endl;
			break ;
		}
	}
	file.close();
}

void	BitCoinExchance::check_valid_year(std::string year)
{
	if (year.length() != 4)
	{
		throw BitCoinExchance::InvalidDateException();
	}
	for (int i = 0; i < 4; i++)
	{
		if (!isdigit(year[i]))
			throw BitCoinExchance::InvalidDateException();
	}
}

void	BitCoinExchance::check_valid_month(std::string month)
{
	int month_int;

	if (month.length() != 2)
	{
		throw BitCoinExchance::InvalidDateException();
	}
	for (int i = 0; i < 2; i++)
	{
		if (!isdigit(month[i]))
			throw BitCoinExchance::InvalidDateException();
	}
	month_int = atoi(month.c_str());
	if (month_int < 1 || month_int > 12)
		throw BitCoinExchance::InvalidDateException();
}

void	BitCoinExchance::check_valid_day(std::string day)
{
	int day_int;

	if (day.length() != 2)
	{
		throw BitCoinExchance::InvalidDateException();
	}
	for (int i = 0; i < 2; i++)
	{
		if (!isdigit(day[i]))
			throw BitCoinExchance::InvalidDateException();
	}
	day_int = atoi(day.c_str());
	if (day_int < 1 || day_int > 31)
		throw BitCoinExchance::InvalidDateException();
}


float	BitCoinExchance::check_valid_value(std::string value)
{
	bool	dot = false;
	float 	result;

	if (value.length() == 0)
		throw BitCoinExchance::InvalidValueException();
	while (value[0] == ' ')
		value.erase(0, 1);
	if (value.length() == 0)
		throw BitCoinExchance::InvalidValueException();
	for (int i = 0; i < value.length(); i++)
	{
		if (!isdigit(value[i]) && value[i] != '.')
				throw BitCoinExchance::InvalidValueException();
		if (value[i] == '.')
		{
			if (dot == true)
				throw BitCoinExchance::InvalidValueException();
			dot = true;
		}
	}
	errno = 0;
	result = strtof(value.c_str(), NULL);
	if (errno != 0 || result < 0.0f || result > 1000.0f)
		throw BitCoinExchance::ValueOutOfLimitsException();
	return (result);
}

void	BitCoinExchance::checkDate(std::string input)
{
	int i = -1;
	if (input.length() == 0)
		throw BitCoinExchance::InvalidDateException();
	while (input.find_last_of(' ') != std::string::npos)
		input.erase(input.find_last_of(' '), 1);
	if (input.length() != 10)
		throw BitCoinExchance::InvalidDateException();
	else if (input.find_first_of('-') != 4 || input.find_last_of('-') != 7)
		throw BitCoinExchance::InvalidDateException();
	else
	{
		check_valid_year(input.substr(0, 4));
		check_valid_month(input.substr(5, 2));
		check_valid_day(input.substr(8, 2));
	}
}

void	BitCoinExchance::getInput(std::string input)
{
	
}

void BitCoinExchance::readInputFile()
{
	std::string input;
	std::string date;
	std::string value;
	std::multimap<std::string, float>::iterator it;
	float floatValue;
	std::ifstream file(this->_inputFile);

	if (!file.is_open())
	{
		std::cerr << "Error: Could not open file" << std::endl;
		exit(1);
	}
	if (std::getline(file, date))
	{
		if (date != "date | value")
		{
			std::cerr << "Error: Invalid file format" << std::endl;
			exit(1);
		}
	}
	while (true)
	{
		try
		{
			std::getline(file, input);
			if (input.empty() || file.eof())
				break;
			if (input.find('|')	== std::string::npos)
				throw BitCoinExchance::BadInputException();
			date = input.substr(0, input.find('|'));
			checkDate(date);
			value = input.substr(input.find('|') + 1, input.length());
			floatValue = check_valid_value(value);
			it = findInDatabase(date);
			std::cout << std::fixed << std::setprecision(2) << floatValue << " BTC = " << std::fixed << std::setprecision(2) << it->second * floatValue << " EUR" << std::endl;
			if (file.eof())
				break;
		}
		catch(std::exception &e)
		{
			std::cerr << "Error: " << e.what() << std::endl;
			// break ;
		}
	}
	file.close();
}

std::multimap<std::string, float>::iterator BitCoinExchance::findInDatabase(std::string date)
{
	std::multimap<std::string, float>::iterator it;

	it = this->_databaseMap.lower_bound(date);
	if	(it == this->_databaseMap.begin() && it->first != date)
	{
		std::cout << "No data for this date" << std::endl;
	}
	else if (it == this->_databaseMap.end() || it->first != date)
	{
		it--;
	}
	return (it);
}

void BitCoinExchance::printDatabase()
{
	std::multimap<std::string, float>::iterator it;

	it = this->_databaseMap.begin();
	while (it != this->_databaseMap.end())
	{
		std::cout << it->first << " " << it->second << std::endl;
		it++;
	}
}
const char* BitCoinExchance::InvalidDateException::what() const throw()
{
	return ("Invalid date");
}

const char* BitCoinExchance::BadInputException::what() const throw()
{
	return ("Bad input");
}

const char* BitCoinExchance::InvalidYearException::what() const throw()
{
	return ("Invalid year");
}

const char* BitCoinExchance::InvalidMonthException::what() const throw()
{
	return ("Invalid month");
}

const char* BitCoinExchance::InvalidDayException::what() const throw()
{
	return ("Invalid day");
}

const char* BitCoinExchance::InvalidValueException::what() const throw()
{
	return ("Invalid value");
}

const char* BitCoinExchance::ValueOutOfLimitsException::what() const throw()
{
	return ("Value out of limits");
}


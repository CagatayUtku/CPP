/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitCoinExchance.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:25:26 by Cutku             #+#    #+#             */
/*   Updated: 2023/11/11 16:35:01 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANCE_HPP
# define BITCOINEXCHANCE_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <sstream>
# include <fstream>
# include <ctime>
# include <cstdlib>
# include <map>

class BitCoinExchance
{
	private:
		std::string _inputFile;
		std::multimap<std::string, float> _databaseMap;
	public:
		BitCoinExchance();
		BitCoinExchance(std::string inputFile);
		BitCoinExchance(BitCoinExchance const &copy);
		BitCoinExchance &operator=(BitCoinExchance const &copy);
		~BitCoinExchance();
		void readInputFile();
		void readDataFile();
		void printDatabase();
		void getInput(std::string input);
		void checkDate(std::string input);
		void check_valid_year(std::string year);
		void check_valid_month(std::string month);
		void check_valid_day(std::string day);
		float check_valid_value(std::string value);
		std::multimap<std::string, float>::iterator	findInDatabase(std::string date);
		class	InvalidDateException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class	BadInputException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class	InvalidYearException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class	InvalidMonthException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class	InvalidDayException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class	InvalidValueException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class ValueOutOfLimitsException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

#endif
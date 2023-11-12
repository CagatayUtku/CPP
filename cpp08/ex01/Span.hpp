/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:19:25 by Cutku             #+#    #+#             */
/*   Updated: 2023/11/07 14:34:24 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <exception>
# include <climits>
# include <set>

class Span
{
	private:
		unsigned int		_n;
		std::multiset<int>	_set;
	public:
		Span();
		Span(unsigned int n);
		Span(const Span& copy);
		~Span();
		Span&	operator=(const Span& copy);
		std::multiset<int>	getSet() const;
		unsigned int	getN() const;
		void addNumber(int n);
		int shortestSpan();
		int longestSpan();
		template <typename T>
		void addRange(T begin, T end)
		{
			unsigned num = std::distance(begin, end);
			if (num > _n - _set.size())
				throw NotEnoughSpaceException(num);
			_set.insert(begin, end);
		}
		class FullException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class NotEnoughSpaceException : public std::exception
		{
			private:
				int _num;
				std::string _msg;
			public:
				NotEnoughSpaceException(int num)
				{
					_num = num;
					_msg = "Not enough space to add " + std::to_string(_num) + " elements";
				};
				virtual ~NotEnoughSpaceException() throw() {};
				virtual const char* what() const throw();
		};
		class NoSpanException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream&	operator<<(std::ostream& out, Span& sp);

#endif
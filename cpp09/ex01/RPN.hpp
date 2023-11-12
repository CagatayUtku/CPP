/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 18:21:43 by Cutku             #+#    #+#             */
/*   Updated: 2023/11/11 18:42:00 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <string>
# include <sstream>
# include <stack>
# include <cmath>
# include <iomanip>
# include <limits>

class RPN
{
	private:
		std::stack<double> _stack;
		std::string _input;
	public:
		RPN();
		RPN(std::string input);
		RPN(const RPN &copy);
		~RPN();
		RPN &operator=(const RPN &copy);
		void run();
		void parseInput();
		void printResult();
};

#endif
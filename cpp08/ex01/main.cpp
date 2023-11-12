/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:01:06 by Cutku             #+#    #+#             */
/*   Updated: 2023/11/07 14:44:32 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <vector>

int main (void)
{
	try 
	{
		// std::vector<int> numbers(10);
		int array[] = {1, 3 ,6, 10, -5};

		// std::generate(numbers.begin(), numbers.end(), std::rand);
		Span sp = Span(5);
		sp.addRange(array, array + 5);
		sp.addNumber(42);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		std::cout << sp << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	return (0);
}

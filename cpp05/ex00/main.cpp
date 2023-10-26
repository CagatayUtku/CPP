/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:00:12 by Cutku             #+#    #+#             */
/*   Updated: 2023/10/26 10:58:14 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		//exceptions - errors
		// Bureaucrat John("John", 200);
		// Bureaucrat Frank("Frank", -5);
		// John.increment();
		// Frank.decrement();

		//Normal cases
		Bureaucrat John("John", 100);
		Bureaucrat Frank("Frank", 5);
		std::cout<<John<<Frank;

		John.decrement();
		Frank.increment();
		std::cout<<John<<Frank;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
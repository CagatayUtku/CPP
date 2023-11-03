/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:35:50 by Cutku             #+#    #+#             */
/*   Updated: 2023/11/03 17:59:08 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Whatever.hpp"

int	main(void)
{
	int a;
	int b;
	// int *ptr1;
	// int *ptr2;
	// std::string str1;
	// std::string str2;
	float f1;
	float f2;

	a = 2;
	b = 5;
	f1 = 2.5f;
	f2 = 5.5f;

	std::cout<<min(a, b)<<std::endl;
	std::cout<<max(a, b)<<std::endl;
	std::cout<<min(f1, f2)<<std::endl;
	std::cout<<max(f1, f2)<<std::endl;
	return (0);
}

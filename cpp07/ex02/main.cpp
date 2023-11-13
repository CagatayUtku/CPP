/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 13:32:50 by Cutku             #+#    #+#             */
/*   Updated: 2023/11/07 10:13:48 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main(void)
{
	// unsigned int	length = 2;
	try
	{
		int * a = new int();
		std::cout << *a << std::endl;	
		// Array<std::string>	arr1(length);
		// arr1[0] = "string1";
		// arr1[1] = "string2";
		// Array<std::string>	arr2;
		// arr2 = arr1;
		// Array<std::string>	arr3(arr2);

		// std::cout << std::endl;
		// std::cout << "array1 size  = " << arr1.size() << std::endl;
		// std::cout << "array2 size  = " << arr2.size() << std::endl;
		// std::cout << "array3 size  = " << arr3.size() << std::endl;

		// std::cout << std::endl;
		// for (unsigned int i = 0; i < length; i++)
		// {
		// 	std::cout << "arr1" << "'" << arr1[i] << "'" <<std::endl;
		// 	std::cout << "arr2" << "'" << arr2[i] << "'" <<std::endl;
		// 	std::cout << "arr3" << "'" << arr3[i] << "'" <<std::endl;
		// }
		// std::cout << std::endl;
		// arr1[0] = "modified string1";
		// arr2[1] = "modified string2";
		// for (unsigned int i = 0; i < length; i++)
		// {
		// 	std::cout << "arr1" << "'" << arr1[i] << "'" <<std::endl;
		// 	std::cout << "arr2" << "'" << arr2[i] << "'" <<std::endl;
		// 	std::cout << "arr3" << "'" << arr3[i] << "'" <<std::endl;
		// }
		// std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Invalid access to array (probably)" << std::endl;
	}
	return (0);
}
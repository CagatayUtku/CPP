/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 13:32:50 by Cutku             #+#    #+#             */
/*   Updated: 2023/12/02 18:19:42 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main(void)
{
	unsigned int	length = 2;
	try
	{	
		Array<std::string>	arr1(length);
		arr1[0] = "string1";
		arr1[1] = "string2";
		Array<std::string>	arr2;
		arr2 = arr1;
		Array<std::string>	arr3(arr2);
		Array<int>			arr4(length);

		arr4[0] = 4;
		arr4[1] = 2;
		std::cout << std::endl;
		std::cout << "array1 size  = " << arr1.size() << std::endl;
		std::cout << "array2 size  = " << arr2.size() << std::endl;
		std::cout << "array3 size  = " << arr3.size() << std::endl;\
		std::cout << "array4 size  = " << arr4.size() << std::endl;

		std::cout << std::endl;
		for (unsigned int i = 0; i < length; i++)
		{
			std::cout << "arr1" << "'" << arr1[i] << "'" <<std::endl;
			std::cout << "arr2" << "'" << arr2[i] << "'" <<std::endl;
			std::cout << "arr3" << "'" << arr3[i] << "'" <<std::endl;
			std::cout << "arr4 " << arr4[i] <<std::endl;
		}
		std::cout << std::endl;
		arr1[0] = "modified string1";
		arr1[1] = "modified string2";
		for (unsigned int i = 0; i < length; i++)
		{
			std::cout << "arr1" << "'" << arr1[i] << "'" <<std::endl;
			std::cout << "arr2" << "'" << arr2[i] << "'" <<std::endl;
			std::cout << "arr3" << "'" << arr3[i] << "'" <<std::endl;
			std::cout << "arr4 " << arr4[i] <<std::endl;
		}
		// std::cout << "arr1" << "'" << arr1[5] << "'" <<std::endl;
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
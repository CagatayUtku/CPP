/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:33:33 by Cutku             #+#    #+#             */
/*   Updated: 2023/11/02 18:28:23 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout<<"Wrong number of arguments"<<std::endl;
		return (1);
	}
	std::cout<<std::fixed;
	ScalarConverter::convert(argv[1]);
	return (0);
}

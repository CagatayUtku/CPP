/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:06:59 by Cutku             #+#    #+#             */
/*   Updated: 2023/09/27 17:52:15 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		Replace replace(argv[1], argv[2], argv[3]);
		replace.createReplaceFile();
	}
	else
	{
		std::cout<<"Usage: ./replace <filename> <string to replace> <string to replace with>"<<std::endl;
		return 1;
	}
	return 0;
}
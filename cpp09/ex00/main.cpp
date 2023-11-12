/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:23:00 by Cutku             #+#    #+#             */
/*   Updated: 2023/11/11 15:08:32 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitCoinExchance.hpp"

int main (int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Usage: ./bitcoin [input_file]" << std::endl;
		return (1);
	}
	else
	{
		BitCoinExchance bce(argv[1]);
		// bce.readInputFile(argv[1]);
		// bce.printDatabase();
	}
}
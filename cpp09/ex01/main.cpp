/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 18:42:03 by Cutku             #+#    #+#             */
/*   Updated: 2023/11/11 18:42:27 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		RPN rpn(argv[1]);
		rpn.run();
	}
	else
		std::cout << "Usage: ./rpn \"<expression>\"" << std::endl;
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 15:47:15 by Cutku             #+#    #+#             */
/*   Updated: 2023/09/22 15:37:58 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	int	i = 1;

	if (argc == 1)
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
	else
	{
		while (i < argc)
		{
			int j = 0;
			while (argv[i][j] != '\0')
			{
				std::cout<<(char)toupper(argv[i][j]);
				j++;
			}
			i++;
		}
		std::cout<<std::endl;
	}
	return (0);
}
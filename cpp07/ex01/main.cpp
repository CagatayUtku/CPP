/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 12:58:55 by Cutku             #+#    #+#             */
/*   Updated: 2023/11/04 13:01:43 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void)
{
	int		arr1[] = {1, 2, 3, 4, 5};
	float	arr2[] = {1.1, 2.2, 3.3, 4.4, 5.5};
	std::string	str[] = {"hello", "hi", "bla", "test"};

	iter(arr1, 5, print);
	iter(arr2, 5, print);
	iter(str, 4, print);
	return (0);
}
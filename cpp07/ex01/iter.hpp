/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 12:47:03 by Cutku             #+#    #+#             */
/*   Updated: 2023/11/04 12:58:49 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void	iter(T *arr, size_t len, void (*func)(T const &))
{
	for (size_t i = 0; i < len; i++)
		func(arr[i]);
}

template <typename T>
void	print(T const &i)
{
	std::cout << i << std::endl;
}

#endif
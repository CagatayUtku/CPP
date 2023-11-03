/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:33:03 by Cutku             #+#    #+#             */
/*   Updated: 2023/11/03 18:02:38 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void	swap(T &a, T &b)
{
	T temp;

	temp = a;
	a = b;
	b = temp;
};

template <typename T>
T const&	min(T const &a, T const &b)
{
	if (a < b)
		return (a);
	return (b);
};

template <typename T>
T const&	max(T const &a, T const &b)
{
	if (a > b)
		return (a);
	return (b);
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:22:02 by Cutku             #+#    #+#             */
/*   Updated: 2023/12/02 13:43:09 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <string>
# include <limits>
# include <cmath>
# include <iomanip>
# include <stdint.h>

typedef struct	s_Data
{
	std::string	str1;
	int			n;
	float		f;
	std::string	str2;
}	Data;

class Serializer
{
	private:
		Serializer();
		Serializer(const Serializer &copy);
		Serializer &operator=(const Serializer &copy);
		~Serializer();
	public:
		static uintptr_t	serialize(Data* ptr);
		static Data*	deserialize(uintptr_t raw);
};

#endif
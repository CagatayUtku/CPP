/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:24:06 by Cutku             #+#    #+#             */
/*   Updated: 2023/11/03 16:09:41 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main(void)
{
	uintptr_t raw;
	Data *data;
	Data *temp;

	data = new Data;
	data->str1 = "Hello";
	data->n = 42;
	data->f = 3.14f;
	data->str2 = "World";
	raw = Serializer::serialize(data);
	std::cout<<"address: "<<data<<std::endl;
	std::cout<<"raw: "<<raw<<std::endl;
	temp = Serializer::deserialize(raw);
	std::cout<<"temp->s1: "<<temp->str1<<std::endl;
	std::cout<<"temp->n: "<<temp->n<<std::endl;
	std::cout<<"temp->f: "<<temp->f<<std::endl;
	std::cout<<"temp->s2: "<<temp->str2<<std::endl;
	delete temp;
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:53:54 by Cutku             #+#    #+#             */
/*   Updated: 2023/10/23 13:23:18 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	int	idx;

	// const Animal* meta = new Animal();
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	// i->makeSound(); //will output the cat sound!
	// j->makeSound();
	// meta->makeSound();
	// delete meta;
	// delete j;
	// delete i;

	Animal *ptr[6];

	idx = -1;
	while (++idx < 6)
	{
		if (idx < 3)
			ptr[idx] = new Dog();
		else
			ptr[idx] = new Cat();
	}

	idx = -1;
	while (++idx < 6)
		delete ptr[idx];

	// Dog *ptr = new Dog();
	// Dog *ptr2 = new Dog(*ptr);

	// delete ptr;
	// delete ptr2;
	return 0;
}
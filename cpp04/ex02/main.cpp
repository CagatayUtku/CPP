/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:53:54 by Cutku             #+#    #+#             */
/*   Updated: 2023/10/23 13:12:29 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	// const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	// meta->makeSound();
	delete j;
	delete i;

	// Dog *ptr = new Dog();
	// Dog *ptr1 = new Dog(*ptr);

	// delete ptr;
	// delete ptr1;

	// Dog *ptr2 = new Dog();
	// Dog *ptr3 = new Dog();

	//*ptr2 = *ptr3

	// delete ptr2;
	// delete ptr3;

	return 0;
}
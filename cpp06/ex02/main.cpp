/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:15:00 by Cutku             #+#    #+#             */
/*   Updated: 2023/12/02 13:31:23 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base*	generate(void)
{
	int	i;

	
	i = rand() % 3;
	if (i == 0)
	{
		std::cout<<"A generated."<<std::endl;
		return (new A);
	}
	else if (i == 1)
	{
		std::cout<<"B generated."<<std::endl;
		return (new B);
	}
	else
	{
		std::cout<<"C generated."<<std::endl;
		return (new C);
	}
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout<<"A detected with pointer"<<std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout<<"B detected with pointer"<<std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout<<"C detected with pointer"<<std::endl;
}

void	identify(Base &p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "A detected with reference" << std::endl;
	}
	catch (std::bad_cast&) {}

	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "B detected with reference" << std::endl;
	}
	catch (std::bad_cast&) {}

	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "C detected with reference" << std::endl;
	}
	catch (std::bad_cast&) {}
}

int	main(void)
{
	Base *ptr1;
	Base *ptr2;
	Base *ptr3;

	srand(time(NULL));
	ptr1 = generate();
	ptr2 = generate();
	ptr3 = generate();
	identify(ptr1);
	identify(ptr2);
	identify(ptr3);
	identify(*ptr1);
	identify(*ptr2);
	identify(*ptr3);

	return (0);
}
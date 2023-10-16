/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:07:16 by Cutku             #+#    #+#             */
/*   Updated: 2023/10/16 12:59:14 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
	//constructors and destructors
		Animal();
		Animal(std::string type);
		Animal(const Animal &copy);
		~Animal();
		Animal& operator=(const Animal &copy);
	//member functions
		void setType(std::string type);
		std::string getType() const;
		virtual void makeSound() const;

};

#endif
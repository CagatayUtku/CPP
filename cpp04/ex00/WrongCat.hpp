/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:14:35 by Cutku             #+#    #+#             */
/*   Updated: 2023/10/16 13:15:28 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(std::string type);
		WrongCat(const WrongCat &copy);
		~WrongCat();
		WrongCat& operator=(const WrongCat &copy);
		void makeSound() const;
};

#endif
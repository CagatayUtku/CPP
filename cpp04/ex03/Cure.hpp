/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:05:26 by Cutku             #+#    #+#             */
/*   Updated: 2023/10/17 17:05:51 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		AMateria* clone() const;
		void use(ICharacter& target);
		Cure();
		Cure(const Cure &copy);
		Cure& operator=(const Cure &copy);
		~Cure();

};

#endif
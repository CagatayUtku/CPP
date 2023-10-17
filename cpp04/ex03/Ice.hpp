/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:12:00 by Cutku             #+#    #+#             */
/*   Updated: 2023/10/17 16:58:15 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		AMateria* clone() const;
		void use(ICharacter& target);
		Ice();
		Ice(const Ice &copy);
		Ice& operator=(const Ice &copy);
		~Ice();

};

#endif
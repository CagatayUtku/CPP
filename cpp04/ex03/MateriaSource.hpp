/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:20:19 by Cutku             #+#    #+#             */
/*   Updated: 2023/10/23 16:02:36 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"



class MateriaSource : public IMateriaSource
{
	private:
		AMateria *learned[4];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &copy);
		MateriaSource& operator=(const MateriaSource &copy);
		virtual ~MateriaSource();
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};

#endif
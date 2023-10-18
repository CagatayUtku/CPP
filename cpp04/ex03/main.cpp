/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:33:01 by Cutku             #+#    #+#             */
/*   Updated: 2023/10/18 17:56:29 by Cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

void leaks(void)
{
	system("leaks ex02");
}


int main(void)
{
	AMateria* unequipt;
	AMateria *ice;
	AMateria *cure;
	AMateria* tmp;

	atexit(&leaks);
	IMateriaSource* src = new MateriaSource();
	ice = new Ice();
	cure = new Cure();
	src->learnMateria(ice);
	src->learnMateria(cure);
	ICharacter* me = new Character("me");
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	unequipt = ((Character *)me)->getEquipment(1);
	me->unequip(1);
	// me->unequip(1);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete unequipt;
	delete ice;
	delete cure;
	delete bob;
	delete me;
	delete src;
	return 0;
}

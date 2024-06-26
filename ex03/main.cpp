/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjourno <mjourno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 16:27:38 by mjourno           #+#    #+#             */
/*   Updated: 2023/06/08 14:57:00 by mjourno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int	main(void) {
	std::cout << " Creation character" << std::endl;
	ICharacter *character = new Character("Super nom");

	std::cout << "\n Creation Ice" << std::endl;
	AMateria *a = new Ice();
	AMateria *c = new Ice();
	std::cout << "\n Creation Cure" << std::endl;
	AMateria *b = new Cure();
	AMateria *d = new Cure();

	std::cout << "\n Equip Ice" << std::endl;
	character->equip(a);
	character->equip(a);
	character->equip(c);
	std::cout << "\n Equip Cure" << std::endl;
	character->equip(b);
	character->equip(d);

	std::cout << "\n Creation character2" << std::endl;
	ICharacter *character2 = new Character((*(Character *)character));
	//ICharacter *character2 = new Character("test");
	//(*(Character *)character2) = (*(Character *)character);

	std::cout << "\n character uses all on character2" << std::endl;
	character->use(0, *character2);
	character->use(2, *character2);
	character->use(1, *character2);
	character->use(3, *character2);

	std::cout << "\n Equip Ice (should be full)" << std::endl;
	character->equip(new Ice());
	std::cout << "\n Get temp + unequip Ice" << std::endl;
	AMateria *temp = ((Character *)character)->get(0);
	character->unequip(0);

	std::cout << "\n Delete Ice temp" << std::endl;
	delete temp;

	std::cout << "\n Delete character" << std::endl;
	delete character;

	std::cout << "\n Delete character2" << std::endl;
	delete character2;

	std::cout << std::endl;
	std::cout << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");
	std::cout << "ici" << std::endl;
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	return 0;
}

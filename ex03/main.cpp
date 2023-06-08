/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjourno <mjourno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 16:27:38 by mjourno           #+#    #+#             */
/*   Updated: 2023/06/08 11:54:13 by mjourno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"

int	main(void) {
	std::cout << " Creation character" << std::endl;
	ICharacter *character = new Character("Super nom");

	std::cout << "\n Creation Ice" << std::endl;
	AMateria *a = new Ice();

	std::cout << "\n Equip Ice" << std::endl;
	character->equip(a);

	std::cout << "\n Creation character2" << std::endl;
	ICharacter *character2 = new Character((*(Character *)character));

	std::cout << "\n character use ice on character2" << std::endl;
	character->use(0, *character2);

	std::cout << "\n Get + unequip Ice" << std::endl;
	AMateria *b = ((Character *)character)->get(0);
	character->unequip(0);

	std::cout << "\n Delete Ice" << std::endl;
	delete b;

	std::cout << "\n Delete Ice" << std::endl;
	delete a;

	std::cout << "\n Delete character" << std::endl;
	delete character;

	std::cout << "\n Delete character2" << std::endl;
	delete character2;
	return 0;
}

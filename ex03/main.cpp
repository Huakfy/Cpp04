/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjourno <mjourno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 16:27:38 by mjourno           #+#    #+#             */
/*   Updated: 2023/06/07 21:05:30 by mjourno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int	main(void) {
	AMateria *a = new Ice();
	std::cout << a->getType() << std::endl;
	AMateria *b = a->clone();
	std::cout << b->getType() << std::endl;
	delete a;
	delete b;
	std::cout << std::endl;
	AMateria *c = new Cure();
	std::cout << c->getType() << std::endl;
	AMateria *d = c->clone();
	std::cout << d->getType() << std::endl;
	delete c;
	delete d;

	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjourno <mjourno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 10:49:23 by mjourno           #+#    #+#             */
/*   Updated: 2023/06/07 16:20:44 by mjourno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	//AAnimal* a = new AAnimal();
	std::cout << "Création de Dog:" << std::endl;
	AAnimal* b = new Dog();
	std::cout << "\nFonctions de Dog:" << std::endl;
	b->makeSound();
	std::cout << b->getType() << std::endl;
	std::cout << "\nSuppression de Dog:" << std::endl;
	delete b;
	std::cout << "\nCréation de Cat:" << std::endl;
	AAnimal* c = new Cat();
	std::cout << "\nFonctions de Cat:" << std::endl;
	c->makeSound();
	std::cout << c->getType() << std::endl;
	std::cout << "\nSuppression de Cat:" << std::endl;
	delete c;
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjourno <mjourno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 10:49:23 by mjourno           #+#    #+#             */
/*   Updated: 2023/06/07 15:39:46 by mjourno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	const Animal *test[10];
	std::cout << "Création des 5 premiers annimaux (Dog)" << std::endl;
	for (int i = 0; i < 5; i++)
		test[i] = new Dog();
	std::cout << "\nCréation des 5 derniers annimaux (Cat)" << std::endl;
	for (int i = 5; i < 10; i++)
		test[i] = new Cat();
	std::cout << std::endl;

	for (int i = 0; i < 10; i++)
		test[i]->makeSound();

	std::cout << std::endl;

	(*(Dog *)test[0]).setIdea("I'm a Dog Woof", 0);
	std::cout << "Impression de la première idée des 2 premiers Dog" << std::endl;
	std::cout << "1:" << (*(Dog *)test[0]).getIdea(0) << "\n2:" << (*(Dog *)test[1]).getIdea(0) << std::endl;

	std::cout << std::endl;
	std::cout << "Copie de Dog[0] vers Dog[1]" << std::endl;
	(*(Dog *)test[1]) = (*(Dog *)test[0]);
	std::cout << std::endl;
	std::cout << "Impression de la première idée des 2 premiers Dog" << std::endl;
	std::cout << "1:" << (*(Dog *)test[0]).getIdea(0) << "\n2:" << (*(Dog *)test[1]).getIdea(0) << std::endl;

	std::cout << std::endl;


	std::cout << "Même chose avec Cat" << std::endl;
	(*(Cat *)test[5]).setIdea("I'm a Cat Meow", 0);
	std::cout << "Impression de la première idée des 2 premiers Cat" << std::endl;
	std::cout << "1:" << (*(Cat *)test[5]).getIdea(0) << "\n2:" << (*(Cat *)test[6]).getIdea(0) << std::endl;

	std::cout << std::endl;
	std::cout << "Copie de Cat[0] vers Cat[1]" << std::endl;
	(*(Cat *)test[6]) = (*(Cat *)test[5]);
	std::cout << std::endl;
	std::cout << "Impression de la première idée des 2 premiers Cat" << std::endl;
	std::cout << "1:" << (*(Cat *)test[5]).getIdea(0) << "\n2:" << (*(Cat *)test[6]).getIdea(0) << std::endl;


	std::cout << std::endl;
	std::cout << "Delete de tout les animaux" << std::endl;
	for (int i = 0; i < 10; i++)
		delete test[i];
	return 0;
}

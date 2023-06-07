/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjourno <mjourno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 11:02:49 by mjourno           #+#    #+#             */
/*   Updated: 2023/06/07 15:47:08 by mjourno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal() {
	std::cout << "Dog default constructor" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
	return;
}

Dog::Dog(const Dog &src) : Animal() {
	std::cout << "Dog copy constructor" << std::endl;
	*this = src;
	return;
}

Dog	&Dog::operator=(const Dog &src){
	std::cout << "Dog assignment operator" << std::endl;
	this->type = src.type;
	delete this->brain;
	this->brain = new Brain(*src.brain);
	return *this;
}

Dog::~Dog() {
	std::cout << "Dog destructor" << std::endl;
	delete this->brain;
	return;
}

void	Dog::makeSound() const {
	std::cout << "Woof woof" << std::endl;
	return;
}

std::string	Dog::getType() const{
	return this->type;
}

void	Dog::setIdea(std::string str, int i) {
	if (i >= 0 && i < 100)
		this->brain->ideas[i] = str;
	return;
}

std::string	Dog::getIdea(int i) {
	if (i >= 0 && i < 100)
		return this->brain->ideas[i];
	return (NULL);
}

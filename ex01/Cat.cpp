/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjourno <mjourno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 11:13:56 by mjourno           #+#    #+#             */
/*   Updated: 2023/06/07 15:13:40 by mjourno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal() {
	std::cout << "Cat Constructor" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
	return;
}

Cat::Cat(const Cat &src) : Animal() {
	std::cout << "Cat Copy Constructor" << std::endl;
	*this = src;
	return;
}

Cat	&Cat::operator=(const Cat &src) {
	std::cout << "Cat assignment operator" << std::endl;
	this->type = src.type;
	delete this->brain;
	this->brain = new Brain(*src.brain);
	return *this;
}

Cat::~Cat() {
	std::cout << "Cat destructor" << std::endl;
	delete this->brain;
	return;
}

void	Cat::makeSound() const {
	std::cout << "Meow meow" << std::endl;
	return;
}

std::string	Cat::getType() const{
	return this->type;
}

void	Cat::setIdea(std::string str, int i) {
	this->brain->ideas[i] = str;
	return;
}

std::string	Cat::getIdea(int i) {
	return this->brain->ideas[i];
}

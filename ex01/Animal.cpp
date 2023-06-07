/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjourno <mjourno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 10:57:24 by mjourno           #+#    #+#             */
/*   Updated: 2023/06/07 11:28:40 by mjourno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal default constructor" << std::endl;
	this->type = "Animal";
	return;
}

Animal::Animal(const Animal &src) {
	std::cout << "Animal copy constructor" << std::endl;
	*this = src;
	return;
}

Animal	&Animal::operator=(const Animal &src) {
	std::cout << "Animal assignment operator" << std::endl;
	this->type = src.type;
	return *this;
}

Animal::~Animal() {
	std::cout << "Animal destructor" << std::endl;
	return;
}

void	Animal::makeSound() const{
	std::cout << "*Animal sounds*" << std::endl;
	return;
}

std::string	Animal::getType() const{
	return this->type;
}

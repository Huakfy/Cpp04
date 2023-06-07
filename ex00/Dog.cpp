/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjourno <mjourno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 11:02:49 by mjourno           #+#    #+#             */
/*   Updated: 2023/06/07 11:31:33 by mjourno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal() {
	std::cout << "Dog default constructor" << std::endl;
	this->type = "Dog";
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
	return *this;
}

Dog::~Dog() {
	std::cout << "Dog destructor" << std::endl;
	return;
}

void	Dog::makeSound() const {
	std::cout << "Woof woof" << std::endl;
	return;
}

std::string	Dog::getType() const{
	return this->type;
}

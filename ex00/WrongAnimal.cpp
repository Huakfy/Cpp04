/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjourno <mjourno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 11:34:28 by mjourno           #+#    #+#             */
/*   Updated: 2023/06/07 11:35:08 by mjourno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal default constructor" << std::endl;
	this->type = "WrongAnimal";
	return;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src) {
	std::cout << "WrongAnimal copy constructor" << std::endl;
	*this = src;
	return;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &src) {
	std::cout << "WrongAnimal assignment operator" << std::endl;
	this->type = src.type;
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor" << std::endl;
	return;
}

void	WrongAnimal::makeSound() const{
	std::cout << "*WrongAnimal sounds*" << std::endl;
	return;
}

std::string	WrongAnimal::getType() const{
	return this->type;
}

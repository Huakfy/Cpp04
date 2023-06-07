/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjourno <mjourno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 16:06:37 by mjourno           #+#    #+#             */
/*   Updated: 2023/06/07 16:06:38 by mjourno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() {
	std::cout << "AAnimal default constructor" << std::endl;
	this->type = "AAnimal";
	return;
}

AAnimal::AAnimal(const AAnimal &src) {
	std::cout << "AAnimal copy constructor" << std::endl;
	*this = src;
	return;
}

AAnimal	&AAnimal::operator=(const AAnimal &src) {
	std::cout << "AAnimal assignment operator" << std::endl;
	this->type = src.type;
	return *this;
}

AAnimal::~AAnimal() {
	std::cout << "AAnimal destructor" << std::endl;
	return;
}

void	AAnimal::makeSound() const{
	std::cout << "*AAnimal sounds*" << std::endl;
	return;
}

std::string	AAnimal::getType() const{
	return this->type;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjourno <mjourno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 11:37:19 by mjourno           #+#    #+#             */
/*   Updated: 2023/06/07 11:38:32 by mjourno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
	std::cout << "WrongCat Constructor" << std::endl;
	this->type = "WrongCat";
	return;
}

WrongCat::WrongCat(const WrongCat &src) : WrongAnimal() {
	std::cout << "WrongCat Copy Constructor" << std::endl;
	*this = src;
	return;
}

WrongCat	&WrongCat::operator=(const WrongCat &src) {
	std::cout << "WrongCat assignment operator" << std::endl;
	this->type = src.type;
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor" << std::endl;
	return;
}

void	WrongCat::makeSound() const {
	std::cout << "Meow meow" << std::endl;
	return;
}

std::string	WrongCat::getType() const{
	return this->type;
}

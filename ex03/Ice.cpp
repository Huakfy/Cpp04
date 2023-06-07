/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjourno <mjourno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 20:40:24 by mjourno           #+#    #+#             */
/*   Updated: 2023/06/07 20:51:13 by mjourno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
	std::cout << "Ice default constructor" << std::endl;
	this->type = "ice";
	return;
}

Ice::Ice(const Ice &src) : AMateria("ice") {
	std::cout << "Ice copy constructor" << std::endl;
	*this = src;
	return;
}

Ice	&Ice::operator=(const Ice &src) {
	std::cout << "Ice assignation operator" << std::endl;
	this->type = src.type;
	return *this;
}

Ice::~Ice() {
	std::cout << "Ice destructor" << std::endl;
	return;
}

Ice *Ice::clone() const {
	Ice *ret = new Ice();
	ret->type = this->type;
	return ret;
}

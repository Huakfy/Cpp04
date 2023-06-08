/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjourno <mjourno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 20:58:46 by mjourno           #+#    #+#             */
/*   Updated: 2023/06/08 11:15:48 by mjourno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
	std::cout << "Cure default constructor" << std::endl;
	this->type = "cure";
	return;
}

Cure::Cure(const Cure &src) : AMateria("cure") {
	std::cout << "Cure copy constructor" << std::endl;
	*this = src;
	return;
}

Cure	&Cure::operator=(const Cure &src) {
	std::cout << "Cure assgnation operator" << std::endl;
	this->type = src.type;
	return *this;
}

Cure::~Cure() {
	std::cout << "Cure destructor" << std::endl;
	return;
}

Cure *Cure::clone() const {
	Cure *ret = new Cure();
	ret->type = this->type;
	return ret;
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	return;
}

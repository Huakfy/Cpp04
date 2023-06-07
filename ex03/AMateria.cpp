/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjourno <mjourno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 17:16:31 by mjourno           #+#    #+#             */
/*   Updated: 2023/06/07 21:06:31 by mjourno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {
	std::cout << "AMateria default constructor" << std::endl;
	this->type = "Unknown";
	return;
}

AMateria::AMateria(const AMateria &src) {
	std::cout << "AMateria copy constructor" << std::endl;
	*this = src;
	return;
}

AMateria	&AMateria::operator=(const AMateria &src) {
	std::cout << "AMateria assignation operator" << std::endl;
	this->type = src.type;
	return *this;
}

AMateria::~AMateria() {
	std::cout << "AMateria destructor" << std::endl;
	return;
}

AMateria::AMateria(const std::string &type) {
	std::cout << "AMateria parametric constructor for " << type << std::endl;
	this->type = type;
	return;
}

std::string const & AMateria::getType() const {
	return this->type;
}

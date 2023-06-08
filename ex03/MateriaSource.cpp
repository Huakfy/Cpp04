/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjourno <mjourno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 12:47:21 by mjourno           #+#    #+#             */
/*   Updated: 2023/06/08 14:17:37 by mjourno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	std::cout << "MateriaSource default constructor" << std::endl;
	for (int i = 0; i < 4; i++)
		this->mat[i] = 0;
	this->nb = 0;
	return;
}

MateriaSource::MateriaSource(const MateriaSource &src) {
	std::cout << "MateriaSource copy constructor" << std::endl;
	for (int i = 0; i < 4; i++)
		this->mat[i] = 0;
	this->nb = 0;
	*this = src;
	return;
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &src) {
	std::cout << "MateriaSource assignation operator" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (this->mat[i])
			delete this->mat[i];
		if (src.mat[i])
			this->mat[i] = src.mat[i]->clone();
		else
			this->mat[i] = NULL;
	}
	this->nb = src.nb;
	return *this;
}

MateriaSource::~MateriaSource() {
	std::cout << "MateriaSource destructor" << std::endl;
	for (int i = 0; i < this->nb; i++)
		delete this->mat[i];
	return;
}

void MateriaSource::learnMateria(AMateria* materia) {
	if (this->nb < 4) {
		std::cout << "Learning materia " << materia->getType() << std::endl;
		this->mat[this->nb] = materia;
		this->nb++;
	}
	else
		std::cout << "MateriaSource full" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < this->nb; i++) {
		if (this->mat[i]->getType() == type)
			return (this->mat[i])->clone();
	}
	return (0);
}

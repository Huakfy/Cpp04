/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjourno <mjourno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 09:22:59 by mjourno           #+#    #+#             */
/*   Updated: 2023/06/08 14:56:46 by mjourno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : ICharacter() {
	std::cout << "Character default constructor" << std::endl;
	this->_name = "Unnamed";
	this->inventory_used = 0;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character(const Character &src) {
	std::cout << "Character copy constructor" << std::endl;
	this->_name = "Unnamed";
	this->inventory_used = 0;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	*this = src;
	return;
}

Character	&Character::operator=(const Character &src) {
	std::cout << "Character assignation operator" << std::endl;
	this->_name = src._name;
	for (int i = 0; i < 4; i++) {
		if (this->inventory[i])
			delete this->inventory[i];
		if (src.inventory[i])
			this->inventory[i] = src.inventory[i]->clone();
		else
			this->inventory[i] = NULL;
	}
	this->inventory_used = src.inventory_used;
	return *this;
}

Character::~Character() {
	std::cout << "Character destructor for " << this->getName() << std::endl;
	for (int i = 0; i < 4; i++)
		if (this->inventory[i])
			delete this->inventory[i];
	return;
}

Character::Character(std::string name) {
	std::cout << "Character parametric constructor for " << name << std::endl;
	this->_name = name;
	this->inventory_used = 0;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	return;
}

const std::string &Character::getName() const {
	return (this->_name);
}

void Character::equip(AMateria* m) {
	for (int i = 0; i < 4; i++) {
		if (inventory[i] == m) {
			std::cout << "Materia already equiped" << std::endl;
			return;
		}
	}
	if (this->inventory_used < 4){
		int i = 0;
		while (inventory[i])
			i++;
		std::cout << "Equipping " << m->getType() << " materia" << std::endl;
		this->inventory[i] = m;
		this->inventory_used++;
	}
	else {
		std::cout << "Inventory full" << std::endl;
		delete m;
	}
	return;
}

void Character::unequip(int idx) {
	if (inventory_used > 0 && idx >= 0 && idx < 4) {
		if (this->inventory[idx]) {
			std::cout << "Unnequiping Materia " << inventory[idx]->getType() << " from slot " << idx << std::endl;
			this->inventory[idx] = NULL;
			this->inventory_used--;
		}
		else
			std::cout << "Nothing equiped in inventory " << idx << std::endl;
	}
	else if (idx < 0 || idx >= 4)
		std::cout << "Id out of bounds" << std::endl;
	else if (inventory_used == 0)
		std::cout << "Empty inventory" << std::endl;
	return;
}

AMateria *Character::get(int idx) {
	if (inventory_used > 0 && idx >= 0 && idx < 4) {
		if (inventory[idx])
			return inventory[idx];
		else
			std::cout << "Nothing equiped in inventory " << idx << std::endl;
	}
	else if (idx < 0 || idx >= 4)
		std::cout << "Id out of bounds" << std::endl;
	else if (inventory_used == 0)
		std::cout << "Empty inventory" << std::endl;
	return NULL;
}

void Character::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx < 4) {
		if (this->inventory[idx])
			this->inventory[idx]->use(target);
		else
			std::cout << "Materia " << idx << " not equipped" << std::endl;
	}
	else if (idx < 0 || idx >= 4)
		std::cout << "Id out of bounds" << std::endl;
	return;
}

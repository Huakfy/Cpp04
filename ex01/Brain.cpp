/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjourno <mjourno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 12:26:37 by mjourno           #+#    #+#             */
/*   Updated: 2023/06/07 13:09:05 by mjourno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain constructor" << std::endl;
	return;
}

Brain::Brain(const Brain &src) {
	std::cout << "Brain copy constructor" << std::endl;
	*this = src;
	return;
}

Brain	&Brain::operator=(const Brain &src) {
	std::cout << "Brain assignment operator" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = src.ideas[i];
	return *this;
}

Brain::~Brain() {
	std::cout << "Brain destructor" << std::endl;
	return;
}

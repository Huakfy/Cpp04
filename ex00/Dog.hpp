/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjourno <mjourno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 11:02:56 by mjourno           #+#    #+#             */
/*   Updated: 2023/06/07 11:31:06 by mjourno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include <string>
# include <iostream>

class Dog : public Animal {
	private:
		std::string	type;
	public:
		Dog();
		Dog(const Dog &src);
		Dog	&operator=(const Dog &src);
		~Dog();

		virtual void	makeSound() const;
		virtual std::string	getType() const;
};

#endif

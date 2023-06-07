/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjourno <mjourno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 11:02:56 by mjourno           #+#    #+#             */
/*   Updated: 2023/06/07 15:12:41 by mjourno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"
# include <string>
# include <iostream>

class Dog : public Animal {
	private:
		std::string	type;
		Brain		*brain;
	public:
		Dog();
		Dog(const Dog &src);
		Dog	&operator=(const Dog &src);
		~Dog();

		virtual void		makeSound() const;
		virtual std::string	getType() const;
		void				setIdea(std::string str, int i);
		std::string			getIdea(int i);
};

#endif

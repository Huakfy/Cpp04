/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjourno <mjourno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 11:11:10 by mjourno           #+#    #+#             */
/*   Updated: 2023/06/07 15:12:47 by mjourno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"
# include <string>
# include <iostream>

class Cat : public Animal {
	private:
		std::string	type;
		Brain		*brain;
	public:
		Cat();
		Cat(const Cat &src);
		Cat	&operator=(const Cat &src);
		~Cat();

		virtual void	makeSound() const;
		virtual std::string	getType() const;
		void				setIdea(std::string str, int i);
		std::string			getIdea(int i);
};

#endif

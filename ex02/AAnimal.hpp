/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjourno <mjourno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 16:06:16 by mjourno           #+#    #+#             */
/*   Updated: 2023/06/07 16:09:14 by mjourno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class AAnimal {
	protected:
		std::string type;
	public:
		AAnimal();
		AAnimal(const AAnimal &src);
		AAnimal	&operator=(const AAnimal &src);
		virtual ~AAnimal();

		virtual void		makeSound() const = 0;
		virtual std::string	getType() const = 0;
};

#endif

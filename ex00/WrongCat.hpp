/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjourno <mjourno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 11:36:33 by mjourno           #+#    #+#             */
/*   Updated: 2023/06/07 11:38:55 by mjourno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"
# include <string>
# include <iostream>

class WrongCat : public WrongAnimal {
	private:
		std::string	type;
	public:
		WrongCat();
		WrongCat(const WrongCat &src);
		WrongCat	&operator=(const WrongCat &src);
		~WrongCat();

		void	makeSound() const;
		std::string	getType() const;
};

#endif

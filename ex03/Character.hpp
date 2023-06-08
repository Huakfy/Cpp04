/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjourno <mjourno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 21:55:38 by mjourno           #+#    #+#             */
/*   Updated: 2023/06/08 10:58:35 by mjourno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter {
	private:
		std::string	_name;
		AMateria	*inventory[4];
		int	inventory_used;
	public:
		Character();
		Character(const Character &src);
		Character	&operator=(const Character &src);
		~Character();

		Character(std::string name);
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		AMateria *get(int idx);
		void use(int idx, ICharacter& target);
};

#endif

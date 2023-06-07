/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjourno <mjourno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 16:40:48 by mjourno           #+#    #+#             */
/*   Updated: 2023/06/07 20:52:13 by mjourno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>

class AMateria {
	protected:
		std::string	type;
	public:
		AMateria();
		AMateria(const AMateria &src);
		AMateria	&operator=(const AMateria &src);
		virtual ~AMateria();

		AMateria(std::string const & type);

		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		//virtual void use(ICharacter& target);
};

#endif

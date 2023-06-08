/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjourno <mjourno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 20:56:05 by mjourno           #+#    #+#             */
/*   Updated: 2023/06/07 21:37:56 by mjourno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria {
	public:
		Cure();
		Cure(const Cure &src);
		Cure	&operator=(const Cure &src);
		~Cure();

		Cure *clone() const;
		void use(ICharacter& target);
};

#endif

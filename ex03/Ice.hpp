/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjourno <mjourno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 17:18:26 by mjourno           #+#    #+#             */
/*   Updated: 2023/06/07 21:38:05 by mjourno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria {
	public:
		Ice();
		Ice(const Ice &src);
		Ice	&operator=(const Ice &src);
		~Ice();

		Ice *clone() const;
		void use(ICharacter& target);
};

#endif

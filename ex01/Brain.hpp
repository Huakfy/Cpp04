/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjourno <mjourno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 12:24:25 by mjourno           #+#    #+#             */
/*   Updated: 2023/06/07 13:03:28 by mjourno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain {
	public:
		Brain();
		Brain(const Brain &src);
		Brain	&operator=(const Brain &src);
		~Brain();

		std::string	ideas[100];
};

#endif

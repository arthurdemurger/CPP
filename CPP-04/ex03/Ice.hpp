/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:27:52 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/15 17:50:35 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP

# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(const Ice &copy);
		Ice	&operator=(const Ice &rhs);
		~Ice();

		virtual void		use(ICharacter &target);
		virtual	AMateria	*clone() const;
};

#endif
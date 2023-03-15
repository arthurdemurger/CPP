/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:27:52 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/15 11:46:07 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP

# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	Ice();
	Ice(const Ice &copy);
	Ice	&operator=(const Ice &rhs);
	~Ice();
	virtual	AMateria	*clone() const;
};

#endif
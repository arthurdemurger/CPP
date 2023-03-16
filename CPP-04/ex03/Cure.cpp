/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:29:52 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/16 10:29:44 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cure::Cure(void) : AMateria("cure") { }

Cure::Cure(const Cure &copy) : AMateria(copy) { }


/*
** ------------------------------- DESTRUCTOR --------------------------------
*/

Cure::~Cure(void) { }

/*
** ------------------------------- OVERLOAD --------------------------------
*/

Cure	&Cure::operator=(const Cure &rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

/*
** ------------------------------- METHODS --------------------------------
*/

AMateria	*Cure::clone(void) const
{
	return (new Cure(*this));
}

void		Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:36:50 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/15 18:25:26 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Ice::Ice(void) : AMateria("ice") { }

Ice::Ice(const Ice &copy) : AMateria(copy) { }

/*
** ------------------------------- DESTRUCTOR --------------------------------
*/

Ice::~Ice(void) { }

/*
** ------------------------------- OVERLOAD --------------------------------
*/

Ice	&Ice::operator=(const Ice &rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

/*
** ------------------------------- METHODS --------------------------------
*/

AMateria	*Ice::clone(void) const
{
	return (new Ice(*this));
}

void		Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}

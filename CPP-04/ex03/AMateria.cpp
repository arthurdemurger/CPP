/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:12:54 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/15 18:05:23 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/*
** ------------------------------- CONSTRUCTORS --------------------------------
*/

// AMateria::AMateria(void) : _type("Default") { }

AMateria::AMateria(std::string const &type) : _type(type) { }

AMateria::AMateria(const AMateria &copy) { *this = copy; }

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AMateria::~AMateria(void) {}

AMateria	&AMateria::operator=(const AMateria &rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return (*this);
}

/*
** -------------------------------- METHOD --------------------------------
*/

void AMateria::use(ICharacter& target)
{
	std::cout << "AMateria abstractly used on " << target.getName() << std::endl;
}

/*
** -------------------------------- ACCESSOR --------------------------------
*/

std::string const	&AMateria::getType(void) const { return (this->_type); }

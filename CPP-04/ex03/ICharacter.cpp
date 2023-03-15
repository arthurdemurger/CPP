/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:37:28 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/15 17:27:11 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ICharacter::ICharacter(void) {}

ICharacter::ICharacter(const ICharacter &copy) { *this = copy; }

/*
** ------------------------------- METHODS --------------------------------
*/

const ICharacter	&ICharacter::operator=(ICharacter const &rhs)
{
	(void) rhs;
	return (*this);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:37:28 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/15 11:45:37 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter(void) {}

ICharacter::ICharacter(const ICharacter &copy) { *this = copy; }

const ICharacter	&ICharacter::operator=(ICharacter const &rhs)
{
	(void) rhs;
	return (*this);
}

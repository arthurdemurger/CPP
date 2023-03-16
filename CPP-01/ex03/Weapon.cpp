/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 16:52:19 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/16 09:42:51 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/
Weapon::Weapon(std::string type) : _type(type)
{
	std::cout << this->_type << " has been created." << std::endl;
	return ;
}

/*
** ------------------------------- DESTRUCTOR --------------------------------
*/
Weapon::~Weapon(void)
{
	std::cout << this->_type << " has been destroyed." << std::endl;
}

/*
** ------------------------------- ACCESSORS --------------------------------
*/
void	Weapon::setType(std::string type)
{
	this->_type = type;
}

std::string const	&Weapon::getType(void)
{
	return (this->_type);
}

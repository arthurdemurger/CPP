/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 16:52:19 by ademurge          #+#    #+#             */
/*   Updated: 2022/12/19 23:46:20 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
	std::cout << this->_type << " has been created." << std::endl;
	return ;
}

Weapon::~Weapon(void)
{
	std::cout << this->_type << " has been destroyed." << std::endl;
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}

std::string const	&Weapon::getType(void)
{
	return (this->_type);
}

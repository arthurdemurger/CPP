/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 23:51:26 by ademurge          #+#    #+#             */
/*   Updated: 2022/12/20 11:06:55 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
	std::cout << this->_name << " has been created." << std::endl;
}

HumanB::HumanB(std::string name, Weapon weapon) :  _name(name)
{
	this->_weapon = &weapon;
	std::cout << this->_name << " has been created." << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << this->_name << " has been destroyed." << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

void	HumanB::attack(void) const
{
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

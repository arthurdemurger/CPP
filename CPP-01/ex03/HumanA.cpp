/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 16:52:34 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/16 09:42:02 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

/*
** ------------------------------- CONSTRUCTORS --------------------------------
*/
HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon), _name(name)
{
	std::cout << this->_name << " has been created." << std::endl;
	return ;
}

/*
** ------------------------------- DESTRUCTOR --------------------------------
*/
HumanA::~HumanA(void)
{
	std::cout << this->_name << " has been destroyed." << std::endl;
	return ;
}

/*
** ------------------------------- METHODS --------------------------------
*/
void	HumanA::attack(void) const
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}

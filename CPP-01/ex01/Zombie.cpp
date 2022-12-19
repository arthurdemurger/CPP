/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 14:06:57 by ademurge          #+#    #+#             */
/*   Updated: 2022/12/19 22:45:57 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* Constructors */
Zombie::Zombie (void)
{
	this->_name = "";
}

Zombie::Zombie (std::string name) : _name(name)
{
	std::cout << this->_name << " has been created." << std::endl;
}

/* Destructor */
Zombie::~Zombie (void)
{
	std::cout << this->_name << " has been destroyed" << std::endl;
	return ;
}

/* Setter */
void	Zombie::setName(std::string name)
{
	this->_name = name;
}

/* Announce function */
void	Zombie::announce(void) const
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
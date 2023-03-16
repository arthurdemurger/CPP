/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 14:06:57 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/16 09:41:37 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*
** ------------------------------- CONSTRUCTORS --------------------------------
*/
Zombie::Zombie (void)
{
	this->_name = "";
}

Zombie::Zombie (std::string name) : _name(name)
{
	std::cout << this->_name << " has been created." << std::endl;
}

/*
** ------------------------------- DESTRUCTOR --------------------------------
*/
Zombie::~Zombie (void)
{
	std::cout << this->_name << " has been destroyed" << std::endl;
	return ;
}

/*
** ------------------------------- ACCESSOR --------------------------------
*/
void	Zombie::setName(std::string name)
{
	this->_name = name;
}

/*
** ------------------------------- METHODS --------------------------------
*/
void	Zombie::announce(void) const
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
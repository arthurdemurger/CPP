/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 20:44:32 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/16 09:40:53 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/
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
void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 16:52:19 by ademurge          #+#    #+#             */
/*   Updated: 2022/12/19 17:15:21 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void) : _type("default")
{
	std::cout << "Weapon created." << std::endl;
	return ;
}

Weapon::Weapon(std::string type) : _type(type)
{
	std::cout << "Weapon created." << std::endl;
	return ;
}

Weapon::~Weapon(void)
{
	std::cout << "Weapon destroyed." << std::endl;
}

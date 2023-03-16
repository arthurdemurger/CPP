/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 12:40:18 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/16 09:50:17 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*
** ------------------------------- CONSTRUCTORS --------------------------------
*/
FragTrap::FragTrap() : ClapTrap()
{
	this->_hp = 100;
	this->_energy = 100;
	this->_damage = 30;
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hp = 100;
	this->_energy = 100;
	this->_damage = 30;
	std::cout << "FragTrap " << this->_name << " constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& f)
{
	std::cout << "FragTrap " << this->_name << " copy constructor called" << std::endl;
	*this = f;
}

/*
** ------------------------------- DESTRUCTOR --------------------------------
*/
FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << this->_name << " destructor called" << std::endl;
}

/*
** ------------------------------- OVERLOAD --------------------------------
*/
FragTrap&	FragTrap::operator=(const FragTrap& rhs)
{
	this->_name = rhs._name;
	this->_hp = rhs._hp;
	this->_energy = rhs._energy;
	this->_damage = rhs._damage;
	return (*this);
}

/*
** ------------------------------- METHOD --------------------------------
*/
void	FragTrap::highFiveGuys(void)
{
	std::cout << "FragTrap " << this->_name << " wants to high five you." << std::endl;
}

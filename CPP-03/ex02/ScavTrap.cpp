/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 12:24:40 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/16 09:50:38 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTORS --------------------------------
*/
ScavTrap::ScavTrap() : ClapTrap()
{
	this->_hp = 100;
	this->_energy = 50;
	this->_damage = 20;
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hp = 100;
	this->_energy = 50;
	this->_damage = 20;
	std::cout << "ScavTrap " << this->_name << " string constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &s)
{
	std::cout << "ScavTrap " << this->_name << " copy constructor called" << std::endl;
	*this = s;
}

/*
** ------------------------------- DESTRUCTOR --------------------------------
*/
ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << this->_name << " destructor called" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& rhs)
{
	this->_name = rhs._name;
	this->_hp = rhs._hp;
	this->_energy = rhs._energy;
	this->_damage = rhs._damage;
	return (*this);
}

/*
** ------------------------------- METHODS --------------------------------
*/
void	ScavTrap::attack(const std::string& target)
{
	if (!this->_hp)
		std::cout << "ScavTrap " << this->_name << " is dead and cannot attack." << std::endl;
	else if (!this->_energy)
		std::cout << "ScavTrap " << this->_name << " is out of energy and cannot attack" << std::endl;
	else
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_damage << " points of damage!" << std::endl;
		this->_energy--;
	}
}

void	ScavTrap::guardGate(void)
{
	std::cout << "Scavtrap " << this->_name << " entered Gate Keeper mode." << std::endl;
}

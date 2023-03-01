/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 14:12:32 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/01 13:07:12 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("Default"), _hp(10), _energy(10), _damage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _energy(10), _damage(0)
{
	std::cout << "ClapTrap " << this->_name << " constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &c)
{
	std::cout << "ClapTrap " << this->_name << " copy constructor called" << std::endl;
	*this = c;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << this->_name << " destructor called" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& rhs)
{
	this->_name = rhs._name;
	this->_hp = rhs._hp;
	this->_energy = rhs._energy;
	this->_damage = rhs._damage;
	return (*this);
}


void	ClapTrap::attack(const std::string& target)
{
	if (!this->_hp)
		std::cout << "ClapTrap " << this->_name << " is dead and cannot attack." << std::endl;
	else if (!this->_energy)
		std::cout << "ClapTrap " << this->_name << " is out of energy and cannot attack" << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_damage << " points of damage!" << std::endl;
		this->_energy--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (!this->_hp)
		std::cout << "ClapTrap " << this->_name << " is already dead." << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damages.";
		if (this->_hp <= amount)
		{
			std::cout << " " << this->_name << " is now dead.";
			this->_hp = 0;
		}
		else
		{
			this->_hp -= amount;
			std::cout << " " << this->_hp << " hitpoints left.";
		}
		std::cout << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->_hp)
		std::cout << "ClapTrap " << this->_name << " is dead and cannot repairs itself." << std::endl;
	else if (!this->_energy)
		std::cout << "ClapTrap " << this->_name << " is out of energy and cannot repairs itself." << std::endl;
	else
	{
		this->_hp += amount;
		this->_energy--;
		std::cout << "ClapTrap " << _name << " repairs itself for " << amount << " hit points!" << std::endl;
	}
}

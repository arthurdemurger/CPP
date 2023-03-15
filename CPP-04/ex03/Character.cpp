/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 16:14:01 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/15 18:25:58 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character(std::string name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(const Character &copy) : _name(copy._name)
{
	for (int i = 0; i < 4; i++)
		if (copy._inventory[i])
			this->_inventory[i] = copy._inventory[i]->clone();
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i])
			delete this->_inventory[i];
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character const	&Character::operator=(const Character &copy)
{
	if (this != &copy)
	{
		this->_name = copy._name;
		for (int i = 0; i < 4; i++)
		{
			if (this->_inventory[i])
				delete this->_inventory[i];
			if (copy._inventory[i])
				this->_inventory[i] = copy._inventory[i]->clone();
		}
	}
	return (*this);
}

/*
** --------------------------------- METHODS ----------------------------------
*/
std::string const	&Character::getName(void) const { return (this->_name); }
#define ICI std::cout << "ici\n";

void	Character::equip(AMateria *mat)
{
	bool equip = false;

	if (!mat)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (!this->_inventory[i])
		{
			this->_inventory[i] = mat;
			// std::cout << this->_name << " equips himself with " << mat->getType() << "." << std::endl;
			equip = true;
			return ;
		}
	}
	if (!equip)
		std::cout << "The inventory is full. Impossible to add " << mat->getType() << "." << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		std::cout << "Index " << idx << " not allowed (only between 0 and 3)." << std::endl;
	else if (!this->_inventory[idx])
		std::cout << "There is nothing in the index " << idx << " of Character " << this->getName() << "'s inventory." << std::endl;
	else
	{
		std::cout << this->_name << " unequipped " << this->_inventory[idx]->getType() << " at index " << idx << "." << std::endl;
		this->_inventory[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 3)
		std::cout << "Index " << idx << "not allowed (only between 0 and 3)." << std::endl;
	else if (!this->_inventory[idx])
		std::cout << "There is nothing in the index " << idx << " of Character " << this->getName() << "'s inventory." << std::endl;
	else
		this->_inventory[idx]->use(target);
}

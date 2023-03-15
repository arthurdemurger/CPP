/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 17:18:14 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/15 18:26:08 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/*
** ------------------------------- CONSTRUCTORS --------------------------------
*/

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->_knowledge[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	for (int i = 0; i < 4; i++)
		if (copy._knowledge[i])
			this->_knowledge[i] = copy._knowledge[i]->clone();
}

/*
** --------------------------------- DESTRUCTOR ---------------------------------
*/

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		if (this->_knowledge[i])
			delete this->_knowledge[i];
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

MateriaSource const	&MateriaSource::operator=(const MateriaSource &copy)
{
	if (this != &copy)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->_knowledge[i])
				delete this->_knowledge[i];
			if (copy._knowledge[i])
				this->_knowledge[i] = copy._knowledge[i]->clone();
		}
	}
	return (*this);
}

/*
** --------------------------------- METHODS ---------------------------------
*/

void	MateriaSource::learnMateria(AMateria *mat)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->_knowledge[i])
		{
			this->_knowledge[i] = mat;
			// std::cout << this->_knowledge[i]->getType() << " added to knowledge.\n";
			return ;
		}
	}
}

AMateria	*MateriaSource::createMateria(std::string const &copy)
{
	for(int i = 0; i < 4; i++)
	{
		if(this->_knowledge[i] && copy == _knowledge[i]->getType())
			return (_knowledge[i]->clone());
	}
	return (NULL);
}

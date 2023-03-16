/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 11:45:08 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/16 10:24:02 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTORS --------------------------------
*/
Brain::Brain(void)
{
	std::cout << "Brain default constructor called." << std::endl;
}

Brain::Brain(const Brain &b)
{
	std::cout << "Brain copy constructor called." << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = b.ideas[i];
}

/*
** ------------------------------- DESTRUCTOR --------------------------------
*/
Brain::~Brain(void)
{
	std::cout << "Brain destructor called." << std::endl;
}

/*
** ------------------------------- OVERLOAD --------------------------------
*/
Brain	&Brain::operator=(const Brain &rhs)
{
	int	i;

	if (this != &rhs)
	{
		i = -1;
		while (++i < 100)
			this->ideas[i] = rhs.ideas[i];
	}
	return (*this);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 11:45:08 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/16 09:56:21 by ademurge         ###   ########.fr       */
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
	*this = b;
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
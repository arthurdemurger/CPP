/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 15:13:30 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/24 14:59:30 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTORS --------------------------------
*/
Intern::Intern (void) { }

Intern::Intern(const Intern &copy){ (void) copy; }

/*
** ------------------------------- DESTRUCTOR --------------------------------
*/
Intern::~Intern(void) { }

/*
** ------------------------------- OVERLOAD --------------------------------
*/
Intern	&Intern::operator=(const Intern &rhs)
{
	(void) rhs;
	return (*this);
}

/*
** ------------------------------- METHOD --------------------------------
*/
AForm	*Intern::makeForm(std::string form, std::string target)
{
	std::string forms[3] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};
	int			index;
	AForm		*ret;

	index = -1;
	for (int i = 0; i < 3; i++)
		if (!(forms[i].compare(form)))
			index = i;
	ret = NULL;
	switch (index)
	{
		case PRESIDENTIAL:
			ret = new PresidentialPardonForm(target);
			break;
		case ROBOTOMY:
			ret = new RobotomyRequestForm(target);
			break;
		case SHRUBBERY:
			ret = new ShrubberyCreationForm(target);
			break;
		default:
			throw std::exception();
	}
	if (ret)
		std::cout << "Intern creates " << ret->getName() << std::endl;
	return (ret);
}
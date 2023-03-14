/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 15:13:30 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/14 15:30:29 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Intern.hpp"

Intern::Intern (void) {}

Intern::Intern(const Intern &copy){}

Intern	&Intern::operator=(const Intern &rhs) {return (*this);}

Intern::~Intern(void);

AForm	*Intern::makeForm(std::string form, std::string target)
{
	std::string forms[3] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};
	int			index;

	index = -1;
	for (int i = 0; i < 3; i++)
		if (!(forms->compare(form)))
			index = i;
	if (index < 0)
		std::cout << "Form " << form << "doesn't exist." << std::endl;
	
}
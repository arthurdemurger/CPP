/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:46:59 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/14 13:25:17 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("PresidentialPardonForm", 25, 5), _target(target) {}

PresidentialPardonForm::~PresidentialPardonForm(void) {}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	if (this != &rhs)
		this->_target = rhs._target;
	return (*this);
}

void	PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	if (this->getIsSigned() != true)
		throw AForm::FormNotSignedException();
	else if (executor.getGrade() > this->getExecGrade())
		throw AForm::GradeTooLowException();
	else
		std::cout << this->_target <<  " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:55:46 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/24 14:55:49 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/
RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("RobotomyRequestForm", 72, 45), _target(target) {}

/*
** ------------------------------- DESTRUCTOR --------------------------------
*/
RobotomyRequestForm::~RobotomyRequestForm(void){}

/*
** ------------------------------- OVERLOAD --------------------------------
*/
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	if (this != &rhs)
		this->_target = rhs._target;
	return (*this);
}

/*
** ------------------------------- METHOD --------------------------------
*/
void	RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	if (this->getIsSigned() != true)
		throw AForm::FormNotSignedException();
	else if (executor.getGrade() > this->getExecGrade())
		throw AForm::GradeTooLowException();
	else
	{
		srand(time(0));
		std::cout << "bzzz bzzz bzzz" << std::endl;

		if (rand() % 2)
			std::cout << this->_target << " has been robotomized successfully." << std::endl;
		else
			std::cout << this->_target << " robotomy failed." << std::endl;
	}
}

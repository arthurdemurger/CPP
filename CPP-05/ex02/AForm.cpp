/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 14:15:55 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/14 12:29:32 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(const std::string name, int signGrade, int execGrade) : _name(name), _signGrade(signGrade), _execGrade(execGrade)
{
	_isSigned = false;
	if (signGrade < 1 || execGrade < 1)
		throw AForm::GradeTooHighException();
	if (signGrade > 150 || execGrade > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm &f) : _name(f._name), _signGrade(f._signGrade), _execGrade(f._execGrade)
{
	_isSigned = false;
}

AForm::~AForm(void)
{
}

AForm	&AForm::operator=(const AForm &rhs)
{
	if (this != &rhs)
		this->_isSigned = rhs.getIsSigned();
		return (*this);
}

void	AForm::beSigned(const Bureaucrat &b)
{
	if (this->_isSigned == true)
		std::cout << "AForm already signed \n";
	else
	{
		if (b.getGrade() > this->_signGrade)
			throw AForm::GradeTooLowException();
		_isSigned = true;
	}
}

std::string	AForm::getName(void) const
{
	return (this->_name);
}

int	AForm::getExecGrade(void) const
{
	return (this->_execGrade);
}

int	AForm::getSignGrade(void) const
{
	return (this->_signGrade);
}

bool	AForm::getIsSigned(void) const
{
	return (this->_isSigned);
}

std::ostream& operator<<( std::ostream& o, const AForm& rhs ) {
	o << rhs.getName();
	return (o);
}

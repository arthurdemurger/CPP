/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 14:15:55 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/24 14:29:38 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTORS --------------------------------
*/
Form::Form(std::string name, int signGrade, int execGrade) : _name(name), _signGrade(signGrade), _execGrade(execGrade)
{
	_isSigned = false;
	if (signGrade < 1 || execGrade < 1)
		throw Form::GradeTooHighException();
	if (signGrade > 150 || execGrade > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &f) : _name(f._name), _signGrade(f._signGrade), _execGrade(f._execGrade)
{
	_isSigned = false;
}

/*
** ------------------------------- DESTRUCTOR --------------------------------
*/
Form::~Form(void)
{
}

/*
** ------------------------------- OVERLOAD --------------------------------
*/
Form	&Form::operator=(const Form &rhs)
{
	if (this != &rhs)
		this->_isSigned = rhs.getIsSigned();
		return (*this);
}

std::ostream& operator<<( std::ostream& o, const Form& rhs )
{
	o << rhs.getName();
	return (o);
}

/*
** ------------------------------- METHODS --------------------------------
*/
void	Form::beSigned(Bureaucrat &b)
{
	if (this->_isSigned == true)
		std::cout << this->_name << " already signed \n";
	else
	{
		if (b.getGrade() > this->_signGrade)
			throw Form::GradeTooLowException();
		_isSigned = true;
	}
}

/*
** ------------------------------- ACCESSOR --------------------------------
*/
std::string	Form::getName(void) const { return (this->_name); }

int	Form::getExecGrade(void) const { return (this->_execGrade); }

int	Form::getSignGrade(void) const { return (this->_signGrade); }

bool	Form::getIsSigned(void) const { return (this->_isSigned); }

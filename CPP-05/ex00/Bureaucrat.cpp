/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 13:44:55 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/24 12:37:35 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTORS --------------------------------
*/
Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : _name(name), _grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(void) : _name("default"), _grade(150)
{

}

Bureaucrat::Bureaucrat(const Bureaucrat &b) : _name(b._name), _grade(b._grade)
{

}

/*
** ------------------------------- DESTRUCTOR --------------------------------
*/
Bureaucrat::~Bureaucrat(void) { }

/*
** ------------------------------- OVERLOAD --------------------------------
*/
Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &rhs)
{
	if (this != &rhs)
	{
		this->_grade = rhs._grade;
	}
	return (*this);
}

std::ostream& operator<<( std::ostream& o, const Bureaucrat& rhs ) {
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return (o);
}

/*
** ------------------------------- METHODS --------------------------------
*/
void	Bureaucrat::incrementGrade(void)
{
	if (this->_grade == 1)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade--;
}

void	Bureaucrat::decrementGrade(void)
{
	if (this->_grade == 150)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade++;
}

/*
** ------------------------------- ACCESSOR --------------------------------
*/
int	Bureaucrat::getGrade (void) const
{
	return (this->_grade);
}

std::string	Bureaucrat::getName (void) const
{
	return (this->_name);
}



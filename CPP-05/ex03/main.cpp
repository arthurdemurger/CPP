/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 10:24:31 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/24 15:01:22 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main( void )
{
	Intern	someRandomIntern;
	AForm	*validForm, *invalidForm;
	Bureaucrat	bureaucrat1("Sam", 20);
	Bureaucrat	bureaucrat2("Tom", 80);

	std::cout << "------------ A random intern creates a valid form ------------\n";
	try
	{
		validForm = someRandomIntern.makeForm("RobotomyRequestForm", "Joe");
		bureaucrat2.signForm(*validForm);
		bureaucrat1.signForm(*validForm);
		bureaucrat1.executeForm(*validForm);
		delete validForm;
	}
	catch (const std::exception &e)
	{
		std::cout << "This type of form doesn't exist.\n";
	}
	std::cout << "\n------------ A random intern creates an invalid form ------------\n";
	try
	{
		invalidForm = someRandomIntern.makeForm("BadInternForm", "Joe");
		bureaucrat2.signForm(*invalidForm);
		bureaucrat1.signForm(*invalidForm);
		bureaucrat1.executeForm(*invalidForm);
		delete invalidForm;
	}
	catch (const std::exception &e)
	{
		std::cout << "This type of form doesn't exist.\n";
	}
	return EXIT_SUCCESS;
}

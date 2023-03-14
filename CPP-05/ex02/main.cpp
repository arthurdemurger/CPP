/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 10:24:31 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/14 15:07:52 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main( void )
{
try
	{
		Bureaucrat  *bureaucrat = new Bureaucrat("Bureaucrat", 40);
		AForm		*form = new PresidentialPardonForm("Form");
		AForm		*form2 = new RobotomyRequestForm("Form2");
		AForm		*form3 = new ShrubberyCreationForm("Chajarat_l3a2ila");

		std::cout << *bureaucrat << std::endl;
		std::cout << *form << std::endl;
		std::cout << *form2 << std::endl;
		std::cout << *form3 << std::endl;
		std::cout << "----------------------------------------" << std::endl;
		std::cout << "Sign Form section " << std::endl;
		bureaucrat->signForm(*form);
		bureaucrat->signForm(*form2);
		bureaucrat->signForm(*form3);

		std::cout << "----------------------------------------" << std::endl;
		std::cout << *bureaucrat << std::endl;
		std::cout << *form << std::endl;
		std::cout << *form2 << std::endl;
		std::cout << *form3 << std::endl;

		std::cout << "----------------------------------------" << std::endl;
		std::cout << "Execute Form section " << std::endl;
		bureaucrat->executeForm(*form);
		bureaucrat->executeForm(*form2);
		bureaucrat->executeForm(*form3);

		delete bureaucrat;
		delete form;
		delete form2;
		delete form3;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Grade out of range " << '\n';
	}

	return EXIT_SUCCESS;
}

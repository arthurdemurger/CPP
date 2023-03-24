/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 10:24:31 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/24 14:48:43 by ademurge         ###   ########.fr       */
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
		AForm		*form3 = new ShrubberyCreationForm("Form3");

		std::cout << "******************* Sign Form section *******************" << std::endl;
		std::cout << "[PresidentialPardonForm]\n";
		bureaucrat->signForm(*form);
		std::cout << std::endl;
		std::cout << "[RobotomyRequestForm]\n";
		bureaucrat->signForm(*form2);
		std::cout << std::endl;
		std::cout << "[ShrubberyCreationForm]\n";
		bureaucrat->signForm(*form3);
		std::cout << std::endl;

		std::cout << "******************* Execute Form section *******************" << std::endl;
		std::cout << "[PresidentialPardonForm]\n";
		bureaucrat->executeForm(*form);
		std::cout << std::endl;
		std::cout << "[RobotomyRequestForm]\n";
		bureaucrat->executeForm(*form2);
		std::cout << std::endl;
		std::cout << "[ShrubberyCreationForm]\n";
		bureaucrat->executeForm(*form3);
		std::cout << std::endl;

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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 14:00:52 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/24 12:37:48 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		std::cout << "********** PIERRE **********" << std::endl;
		Bureaucrat *pierre = new Bureaucrat("Pierre", 10);
		std::cout << *pierre << std::endl;
		std::cout << "--- decrement ---" << std::endl;
		pierre->decrementGrade();
		std::cout << "--- increment ---" << std::endl;
		pierre->incrementGrade();
		std::cout << "--- increment ---" << std::endl;
		pierre->incrementGrade();
		std::cout << *pierre << std::endl;
	}
	catch(const Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(const Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << std::endl;
	try
	{
		std::cout << "********** ROGER **********" << std::endl;
		Bureaucrat *roger = new Bureaucrat("Roger", 1);
		std::cout << *roger << std::endl;
		std::cout << "--- increment ---" << std::endl;
		roger->incrementGrade();
	}
	catch (const Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
}
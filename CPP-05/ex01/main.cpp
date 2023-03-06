/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 14:00:52 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/06 14:14:52 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat *pierre = new Bureaucrat("Pierre", 10);

	pierre->decrementGrade();
	pierre->incrementGrade();
	std::cout << *pierre << std::endl;

	try
	{
		Bureaucrat *roger = new Bureaucrat("Roger", 1);
		roger->decrementGrade();
		std::cout << *roger << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException e)
	{
		std::cout << e.what() << std::endl;
	}
}
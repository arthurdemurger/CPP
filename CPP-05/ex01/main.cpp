/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 10:24:31 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/24 14:28:24 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main( void )
{
	try
	{
		Bureaucrat b1("ash",11);
		Bureaucrat b2("joe", 5);
		Form form("form1", 10, 10);

		std::cout << "********* ash is trying to sign the form... *********" << std::endl;
		b1.signForm(form);
		std::cout << std::endl;
		std::cout << "********* joe is trying to sign the form... *********" << std::endl;
		b2.signForm(form);
		std::cout << std::endl;
		std::cout << "********* joe is trying to re-sign the form... *********" << std::endl;
		b2.signForm(form);

		std::cout << "[Is the form signed ?] : ";
		if (form.getIsSigned())
			std::cout << "yes !\n";
		else
			std::cout << "no !\n";
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	return EXIT_SUCCESS;
}

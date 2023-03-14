/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 10:24:31 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/14 19:21:25 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main( void )
{
	Intern someRandomIntern;
	AForm* rrf;
	Bureaucrat	bureaucrat1("Sam", 20);
	Bureaucrat	bureaucrat2("Tom", 80);

	rrf = someRandomIntern.makeForm("RobotomyRequestForm", "Bender");
	bureaucrat2.signForm(*rrf);
	bureaucrat1.signForm(*rrf);
	delete rrf;
	return EXIT_SUCCESS;
}

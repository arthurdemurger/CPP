/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 10:59:08 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/22 11:39:09 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <stdlib.h>

Base	*generate(void)
{
	int	random = 1 + std::rand() % 3;

	switch (random)
	{
		case 1:
			std::cout << "A created." << std::endl;
			return (static_cast<Base *> (new A()));
		case 2:
			std::cout << "B created." << std::endl;
			return (static_cast<Base *> (new B()));
		case 3:
			std::cout << "C created." << std::endl;
			return (static_cast<Base *> (new C()));
		default:
			return (NULL);
	}
}

void	identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "This variable is an instance of the class A." << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "This variable is an instance of the class B." << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "This variable is an instance of the class C." << std::endl;
	else
		std::cout << "Unknown type." << std::endl;
}

void	identify(Base &p)
{
	try
	{
		(void) dynamic_cast<A &>(p);
		std::cout << "This variable is an instance of the class A." << std::endl;
		return ;
	}
	catch (std::bad_cast & bc) { }
	try
	{
		(void) dynamic_cast<B &>(p);
		std::cout << "This variable is an instance of the class B." << std::endl;
		return ;
	}
	catch (std::bad_cast & bc) { }
	try
	{
		(void) dynamic_cast<C &>(p);
		std::cout << "This variable is an instance of the class C." << std::endl;
		return ;
	}
	catch (std::bad_cast & bc) { }
}

int	main (void)
{
	std::srand(time(0));

	Base	*test1 = generate();
	Base	*test2 = generate();
	Base	*test3 = generate();
	Base	*test4 = generate();

	std::cout << "------------ via * ------------" << std::endl;
	identify(test1);
	identify(test2);
	identify(test3);
	identify(test4);

	std::cout << std::endl;

	std::cout << "------------ via & ------------" << std::endl;
	identify(test1);
	identify(test2);
	identify(test3);
	identify(test4);

	std::cout << std::endl;

	delete test1;
	delete test2;
	delete test3;
	delete test4;
}

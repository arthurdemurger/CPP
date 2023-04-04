/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 12:42:45 by ademurge          #+#    #+#             */
/*   Updated: 2023/04/04 11:26:54 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main (void)
{
	srand(time(0));
	{
		std::cout << "********************** INT **********************" << std::endl;
		int	a = rand() % 100;
		int	b = rand() % 100;

		std::cout << "------------ Before Swap ------------" << std::endl;
		std::cout << "first  int : " << a << std::endl;
		std::cout << "second int : " << b << std::endl;
		std::cout << "max between [" << a << ", " << b << "] : " << ::max(a, b) << std::endl;
		std::cout << "min between [" << a << ", " << b << "] : " << ::min(a, b) << std::endl;

		::swap(a, b);

		std::cout << "------------ After Swap ------------" << std::endl;
		std::cout << "first  int : " << a << std::endl;
		std::cout << "second int : " << b << std::endl;
		std::cout << "max between [" << a << ", " << b << "] : " << ::max(a, b) << std::endl;
		std::cout << "min between [" << a << ", " << b << "] : " << ::min(a, b) << std::endl;
	}

	std::cout << std::endl;

	{
		std::cout << "********************** STRING **********************" << std::endl;
		std::string	a = "test";
		std::string	b = "string";

		std::cout << "------------ Before Swap ------------" << std::endl;
		std::cout << "first  string : " << a << std::endl;
		std::cout << "second string : " << b << std::endl;
		std::cout << "max between [" << a << ", " << b << "] : " << ::max(a, b) << std::endl;
		std::cout << "min between [" << a << ", " << b << "] : " << ::min(a, b) << std::endl;

		::swap(a, b);

		std::cout << "------------ After Swap ------------" << std::endl;
		std::cout << "first  string : " << a << std::endl;
		std::cout << "second string : " << b << std::endl;
		std::cout << "max between [" << a << ", " << b << "] : " << ::max(a, b) << std::endl;
		std::cout << "min between [" << a << ", " << b << "] : " << ::min(a, b) << std::endl;
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 14:02:31 by ademurge          #+#    #+#             */
/*   Updated: 2023/04/04 12:53:50 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main (void)
{
	{
		std::cout << "********** vector container **********" << std::endl;
		std::vector<int> itInt;

		for(size_t i = 0; i < 10; ++i)
			itInt.push_back(i);
		try
		{
			std::cout << "find an existing element      [5] : ";
			std::cout << *easyfind(itInt, 5) << " ";
			std::cout << std::endl;
			std::cout << "find an not existing element [-5] : ";
			std::cout << *easyfind(itInt, -5) << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cout << "Nothing found." << std::endl << std::endl;
		}
	}
	{
		std::cout << "********** list container **********" << std::endl;
		std::list<int> itInt;

		for(size_t i = 0; i < 10; ++i)
			itInt.push_back(i);
		try
		{
			std::cout << "find an existing element      [5] : ";
			std::cout << *easyfind(itInt, 5) << " ";
			std::cout << std::endl;
			std::cout << "find an not existing element [-5] : ";
			std::cout << *easyfind(itInt, -5) << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cout << "Nothing found." << std::endl << std::endl;
		}
	}
		{
		std::cout << "********** array container **********" << std::endl;
		std::array<int, 10> itInt;

		for(size_t i = 0; i < 10; ++i)
			itInt[i] = i;
		try
		{
			std::cout << "find an existing element      [5] : ";
			std::cout << *easyfind(itInt, 5) << " ";
			std::cout << std::endl;
			std::cout << "find an not existing element [-5] : ";
			std::cout << *easyfind(itInt, -5) << std::endl << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cout << "Nothing found." << std::endl;
		}
	}
}
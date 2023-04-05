/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 10:19:52 by ademurge          #+#    #+#             */
/*   Updated: 2023/04/05 10:25:43 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
	{
		std::cout << "********** INT ARRAY **********" << std::endl;
		Array<int> intArr(20);

		std::cout << "----- Valid index -----" << std::endl;
		try
		{
			intArr[10] = 20;
			std::cout << intArr[10] << std::endl << std::endl;
		}
		catch (const std::out_of_range &oor)
		{
			std::cout << oor.what() << std::endl << std::endl;
		}

		std::cout << "----- Invalid index -----" << std::endl;
		try
		{
			intArr[50] = 20;
			std::cout << intArr[50] << std::endl << std::endl;
		}
		catch (const std::out_of_range &oor)
		{
			std::cout << oor.what() << std::endl << std::endl;
		}

		std::cout << "----- Size method -----" << std::endl;
		std::cout << intArr.size() << std::endl << std::endl;
	}
	std::cout << std::endl;
	{
		std::cout << "********** STRING ARRAY **********" << std::endl;
		Array<std::string> stringArr(20);
		std::string			str("This is a string.");

		std::cout << "----- Valid index -----" << std::endl;
		try
		{
			stringArr[10] = str;
			std::cout << stringArr[10] << std::endl << std::endl;
		}
		catch (const std::out_of_range &oor)
		{
			std::cout << oor.what() << std::endl << std::endl;
		}

		std::cout << "----- Invalid index -----" << std::endl;
		try
		{
			stringArr[50] = str;
			std::cout << stringArr[50] << std::endl << std::endl;
		}
		catch (const std::out_of_range &oor)
		{
			std::cout << oor.what() << std::endl << std::endl;
		}

		std::cout << "----- Size method -----" << std::endl;
		std::cout << stringArr.size() << std::endl << std::endl;
	}
}

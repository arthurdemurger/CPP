/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 13:00:35 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/22 18:48:04 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main (void)
{
	{
		char	string[3] = {'a', 'b', 'c'};
		int		array[5] = {1, 2, 3, 4, 5};

		std::cout << "*********** DISPLAY ***********" << std::endl;
		std::cout << "display an array of char : ";
		iter(string, 3, display);

		std::cout << std::endl;

		std::cout << "display an array of int  : ";
		iter(array, 5, display);
		std::cout << std::endl << std::endl;
	}
	{
		char	string[3] = {'a', 'b', 'c'};
		int		array[5] = {1, 2, 3, 4, 5};

		std::cout << "*********** INCREMENT ***********" << std::endl;
		std::cout << "[before incrementation] array of char : ";
		iter(string, 3, display);
		std::cout << std::endl;
		std::cout << "[after  incrementation] array of char : ";
		iter(string, 3, increment);
		iter(string, 3, display);
		std::cout << std::endl;
		std::cout << "[before incrementation] array of int : ";
		iter(array, 5, display);
		std::cout << std::endl;
		std::cout << "[after  incrementation] array of int : ";
		iter(array, 5, increment);
		iter(array, 5, display);
	}
	return (0);
}
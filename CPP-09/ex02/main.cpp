/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 12:11:25 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/30 13:38:37 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main (int ac, char **av)
{
	try
	{
		PmergeMe	test(ac, av);
	}
	catch(const PmergeMe::WrongInputException& wie)
	{
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}

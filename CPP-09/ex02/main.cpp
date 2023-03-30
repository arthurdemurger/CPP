/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 12:11:25 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/30 12:52:33 by ademurge         ###   ########.fr       */
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
		std::cerr << wie.what() << std::endl;
	}
	// int			i = 0;

	// if (!check_args(av))
	// 	return (EXIT_FAILURE);
	// while (av[++i])
	// 	sort.addNumber(atoi(av[i]));
	// sort.display(DEQUE);
	// return (0);
}

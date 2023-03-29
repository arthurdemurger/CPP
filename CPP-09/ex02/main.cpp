/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 12:11:25 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/29 16:31:18 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool	check_args(char **args)
{
	int	i = 0;
	int	nb;

	while (args[++i])
	{
		try
		{
			nb = std::stoi(args[i]);
		}
		catch(const std::invalid_argument &ia)
		{
			return (put_error("Error: not an unsigned int"));
		}
		catch(const std::out_of_range &oor)
		{
			return (put_error("Error: out of range"));
		}
		if (nb < 0)
			return (put_error("Error: not an unsigned int"));
	}
	return (true);
}

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

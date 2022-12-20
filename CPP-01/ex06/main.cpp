/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 14:08:34 by ademurge          #+#    #+#             */
/*   Updated: 2022/12/20 15:08:53 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	string_to_level (std::string s)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (s == levels[i])
			return (i);
	}
	return (-1);
}

void	do_filter(std::string complain)
{
	Harl harl;
	int	level = string_to_level(complain);

	switch (level)
	{
		case 0:
			harl.complain("DEBUG");
		case 1:
			harl.complain("INFO");
		case 2:
			harl.complain("WARNING");
		case 3:
			harl.complain("ERROR");
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

int main (int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Wrong number of arguments." << std::endl;
		return (EXIT_FAILURE);
	}
	do_filter(av[1]);
}
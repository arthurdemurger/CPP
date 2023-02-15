/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:55:04 by ademurge          #+#    #+#             */
/*   Updated: 2023/02/15 09:55:30 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (av[++i])
	{
		j = -1;
		while (av[i][++j])
			std::cout << (char) std::toupper(av[i][j]);
		if (av[i + 1])
			std::cout << " ";
	}
	std::cout << std::endl;
}

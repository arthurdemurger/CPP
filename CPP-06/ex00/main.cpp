 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:25:02 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/16 15:50:58 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"



int	main(int ac, char **av)
{
	char	c;
	int		i;
	float	f;
	double	d;

	if (ac != 2)
	{
		std::cerr << "Usage: ./scalar <thing to convert>" << std::endl;
		return (EXIT_FAILURE);
	}
	std::string	src(av[1]);

	Scalar	convert(src);
	std::cout << std::fixed << std::setprecision(1);
	c = static_cast<char>(convert);
	i = static_cast<int>(convert);
	f = static_cast<float>(convert);
	d = static_cast<double>(convert);
}

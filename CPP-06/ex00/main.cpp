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
	Scalar convert(src);

	c = static_cast<char>(convert);
	i = static_cast<int>(convert);
	f = static_cast<float>(convert);
	d = static_cast<double>(convert);
	(void) c;
	(void) i;
	(void) f;
	(void) d;
	// type_var = which_var(src);
	// switch (type_var)
	// {
		// case CHAR:
			// put_char(src);
			// break;
		// case INT:
			// put_int(src);
			// break;
		// case FLOAT:
			// put_float(src);
			// break;
		// case DOUBLE:
			// put_double(src);
			// break;
		// default:
			// std::cout << "nothing\n";
			// break;
	// }
}

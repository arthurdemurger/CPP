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

// void	put_char(std::string str)
// {
	// std::cout << "char: ";
	// if(static_cast<int>(str[1]) < 32 || static_cast<int>(str[1]) > 126)
		// std::cout << "Non displayable\n";
	// else
		// std::cout << "'" << static_cast<char>(str[1]) << "'" << std::endl;
	// std::cout << "int: " << static_cast<int>(str[1]) << std::endl;
	// std::cout << "float: " << static_cast<float>(str[1]) << std::endl;
	// std::cout << "double: " << static_cast<double>(str[1]) << std::endl;
// }
// 
// void	put_int(std::string str)
// {
	// int	nb = static_cast<int>(stoi(str));
	// std::cout << "char: ";
	// if (nb < 32 || nb > 126)
		// std::cout << "Non displayable" << std::endl;
	// else
		// std::cout << "'" << static_cast<char>(nb) << "'" << std::endl;
	// std::cout << "int: " << nb << std::endl;
	// std::cout << "float: " << static_cast<float>(nb) << std::endl;
	// std::cout << "double: " << static_cast<double>(nb) << std::endl;
// }
// 
// void	put_float(std::string str)
// {
	// float	nb = stof(str);
// 
	// std::cout << "char: ";
	// if (nb < 32.0f || nb > 126.0f)
		// std::cout << "Non displayable" << std::endl;
	// else
		// std::cout << "'" << static_cast<char>(nb) << "'" << std::endl;
	// std::cout << "int: " << static_cast<int>(nb) << std::endl;
	// std::cout << "float: " << nb << std::endl;
	// std::cout << "double: " << static_cast<double>(nb) << std::endl;
// }
// 
// void	put_double(std::string str)
// {
	// double	nb = stod(str);
// 
	// std::cout << "char: ";
	// if (nb < 32.0f || nb > 126.0f)
		// std::cout << "Non displayable" << std::endl;
	// else
		// std::cout << "'" << static_cast<char>(nb) << "'" << std::endl;
	// std::cout << "int: " << static_cast<int>(nb) << std::endl;
	// std::cout << "float: " << static_cast<float>(nb) << std::endl;
	// std::cout << "double: " << nb << std::endl;
// }
int	main(int ac, char **av)
{

	// int			type_var;

	if (ac != 2)
	{
		std::cerr << "Usage: ./scalar <thing to convert>" << std::endl;
		return (EXIT_FAILURE);
	}
	std::string	src(av[1]);
	Scalar test(src);

	std::cout << static_cast<char> (test) << std::endl;
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

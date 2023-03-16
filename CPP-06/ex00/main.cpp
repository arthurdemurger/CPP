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

#include "scalar.hpp"


void	put_char(std::string str)
{
	std::cout << "char: ";
	if(static_cast<int>(str[1]) < 32 || static_cast<int>(str[1]) > 126)
		std::cout << "Non displayable\n";
	else
		std::cout << "'" << static_cast<char>(str[1]) << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(str[1]) << std::endl;
	std::cout << "float: " << static_cast<float>(str[1]) << std::endl;
	std::cout << "double: " << static_cast<double>(str[1]) << std::endl;
}

int	main(int ac, char **av)
{
	int			type_var;

	if (ac != 2)
	{
		std::cerr << "Usage: ./scalar <thing to convert>" << std::endl;
		return (EXIT_FAILURE);
	}
	std::string	src(av[1]);
	type_var = which_var(src);
	switch (type_var)
	{
		case CHAR:
			put_char(src);
			break;
		case INT:
			std::cout << "int\n";
			break;
		case FLOAT:
			std::cout << "float\n";
			break;
		case DOUBLE:
			std::cout << "double\n";
			break;
		default:
			std::cout << "nothing\n";
			break;
	}

}
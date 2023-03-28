/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 12:11:25 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/28 15:25:04 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main (int ac, char **av)
{
	RPN	calc;

	if (ac != 2)
		return (RPN::put_error("Error: wrong number of arguments."));
	calc.calculate(av[1]);
	return (0);
}

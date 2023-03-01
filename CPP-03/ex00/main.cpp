/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 14:59:55 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/01 12:39:06 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	int	i;

	ClapTrap clap("Clap");
	i = -1;
	while (++i < 5)
		clap.attack("Trap");
	clap.takeDamage(5);
	while (++i <= 10)
		clap.beRepaired(1);
	clap.takeDamage(10);
	clap.attack("Trap");
	return (EXIT_SUCCESS);
}

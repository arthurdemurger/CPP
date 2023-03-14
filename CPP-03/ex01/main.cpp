/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:44:56 by ael-khni          #+#    #+#             */
/*   Updated: 2023/03/14 12:01:55 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main( void )
{
	ScavTrap	scav("Scav");

	std::cout << "*************" << std::endl;
	scav.attack("pouet");
	scav.beRepaired(10);
	scav.takeDamage(20);
	scav.guardGate();
	std::cout << "*************" << std::endl;
	return (EXIT_SUCCESS);
}

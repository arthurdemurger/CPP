/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:44:56 by ael-khni          #+#    #+#             */
/*   Updated: 2023/03/14 12:02:30 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap clap("Adrien");
	ScavTrap scav("Alex");
	FragTrap frag("Antoine");

	std::cout << "*************" << std::endl;
	scav.beRepaired(5);
	clap.attack("Antoine");
	scav.takeDamage(12);
	scav.guardGate();
	frag.highFiveGuys();
	std::cout << "*************" << std::endl;
}

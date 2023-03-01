/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:44:56 by ael-khni          #+#    #+#             */
/*   Updated: 2023/03/01 13:14:53 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap ct1("Adrien");
	ScavTrap ct2("Alex");
	FragTrap ct3("Antoine");

	ct2.beRepaired(5);
	ct1.attack("Antoine");
	ct2.takeDamage(12);
	ct2.guardGate();
	ct3.highFiveGuys();
}

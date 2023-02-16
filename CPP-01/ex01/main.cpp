/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 14:06:59 by ademurge          #+#    #+#             */
/*   Updated: 2023/02/16 11:45:13 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name);

int main (void)
{
	int	numberOfZombie;
	int	i;

	i = -1;
	numberOfZombie = 7;
	Zombie *horde = zombieHorde(numberOfZombie, "Zombie");
	while (++i < numberOfZombie)
		horde[i].announce();
	delete [] horde;
	return (0);
}
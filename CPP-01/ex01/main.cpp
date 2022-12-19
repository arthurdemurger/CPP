/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 14:06:59 by ademurge          #+#    #+#             */
/*   Updated: 2022/12/19 16:39:48 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name);

int main (void)
{
	Zombie *horde = zombieHorde(2, "Zombie");

	horde[0].announce();
	horde[1].announce();

	delete [] horde;
	return (0);
}
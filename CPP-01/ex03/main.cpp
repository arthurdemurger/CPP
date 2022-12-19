/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 16:52:02 by ademurge          #+#    #+#             */
/*   Updated: 2022/12/20 00:17:58 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
		Weapon club1 = Weapon("crude spiked club");
		HumanA bob("Bob", club1);
		bob.attack();
		club1.setType("some other type of club");
		bob.attack();

		Weapon club2 = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club2);
		jim.attack();
		club2.setType("some other type of club");
		jim.attack();
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 14:06:53 by ademurge          #+#    #+#             */
/*   Updated: 2022/12/19 16:33:57 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	int	i;

	Zombie	*horde = new Zombie[N];
	i = -1;
	while (++i < N)
		horde[i].setName(name);
	return (horde);
}
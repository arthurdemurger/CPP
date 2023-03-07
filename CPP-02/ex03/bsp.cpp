/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 12:04:33 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/07 14:29:57 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed ft_abs(Fixed nb)
{
	if (nb < 0)
		return (nb * - 1);
	return (nb);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed zoneTotale, zone1, zone2, zone3;

	// calcul de la zone totale du triangle
	zoneTotale = ft_abs((b.getX() - a.getX()) * (c.getY() - a.getY()) - (c.getX() - a.getX() * (b.getY() - a.getY()))) / Fixed(2);

	// calcul des zones des triangles formés par le point et chaque coin
	zone1 = ft_abs((point.getX() - a.getX()) * (b.getY() - a.getY()) - (b.getX() - a.getX()) * (point.getY() - a.getY())) / Fixed(2);
	zone2 = ft_abs((point.getX() - b.getX()) * (c.getY() - b.getY()) - (c.getX() - b.getX()) * (point.getY() - b.getY())) / Fixed(2);
	zone3 = ft_abs((point.getX() - c.getX()) * (a.getY() - c.getY()) - (a.getX() - c.getX()) * (point.getY() - c.getY())) / Fixed(2);

	// si la somme des zones des triangles formés par le point et chaque coin est égale à la zone totale du triangle, le point est à l'intérieur du triangle
	if ((zone1 + zone2 + zone3) == zoneTotale)
		return true;
	else
		return false;
}
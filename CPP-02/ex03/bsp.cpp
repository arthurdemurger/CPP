/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 12:04:33 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/07 13:10:06 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	ft_abs(Fixed nb)
{
	if (nb < 0)
		return (nb * -1);
	return (nb);
}

Fixed zone(Point const a, Point const b, Point const c)
{
	return ((a.getX() * (b.getY() - c.getY())) + (b.getX() * (c.getY() - a.getY()))
			+ (c.getX() * (a.getY() - b.getY())) / 2);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	totalZone, zone1, zone2, zone3;

	totalZone = ft_abs(zone(a, b , c));
	zone1 = ft_abs(zone(point, b, c));
	std::cout << zone1 << std::endl;

	zone2 = ft_abs(zone(a, point, c));
	zone3 = ft_abs(zone(a, b, point));

	if (zone1 + zone2 + zone3 == totalZone)
		return (true);
	return (false);
}
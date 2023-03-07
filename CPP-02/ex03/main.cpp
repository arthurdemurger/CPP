/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 12:39:40 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/07 13:08:55 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main(void)
{
	if (bsp(Point(5, 0), Point(5, 2),  Point(10, 0), Point(100, 100)))
		std::cout << "The point is in the triangle.";
	else
		std::cout << "The point is not in the triangle.";
	std::cout << std::endl;
	return (0);
}
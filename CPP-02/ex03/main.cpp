/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 12:39:40 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/07 14:13:40 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main(void)
{
	if (bsp(Point(0, 0), Point(10, 10),  Point(20, 0), Point(4, 2)))
		std::cout << "The point is in the triangle.";
	else
		std::cout << "The point is not in the triangle.";
	std::cout << std::endl;
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 12:04:34 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/07 12:27:07 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP

#define POINT_HPP

#include "Fixed.hpp"

class Point
{
	public:
		Point();
		Point(const float x, const float y);
		Point(const Point &p);
		Point	&operator=(const Point &rhs);
		~Point();

		Fixed	getX(void) const;
		Fixed	getY(void) const;
	private:
		const Fixed	_x;
		const Fixed	_y;
};

#endif
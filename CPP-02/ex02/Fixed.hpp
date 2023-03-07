/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 12:39:38 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/07 11:54:30 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
		Fixed(const int nb);
		Fixed(const float nb);
		Fixed(const Fixed &f);
		Fixed();
		~Fixed();
		float	toFloat(void) const;
		int		toInt(void) const;

		Fixed	&operator=(const Fixed &f);
		bool	operator>(const Fixed &f);
		bool	operator<(const Fixed &f);
		bool	operator>=(const Fixed &f);
		bool	operator<=(const Fixed &f);
		bool	operator!=(const Fixed &f);
		bool	operator==(const Fixed &f);
		Fixed	operator+(const Fixed &f);
		Fixed	operator-(const Fixed &f);
		Fixed	operator*(const Fixed &f);
		Fixed	operator/(const Fixed &f);
		Fixed	operator++(void);
		Fixed	operator++(int);
		Fixed	operator--(void);
		Fixed	operator--(int);

		static Fixed		&min(Fixed &a, Fixed &b);
		static const Fixed	&min(const Fixed &a, const Fixed &b);
		static Fixed		&max(Fixed &a, Fixed &b);
		static const Fixed	&max(const Fixed &a, const Fixed &b);

		int		getRawBits(void) const;
		void	setRawBits(const int _raw);

	private:
		int					_number;
		static const int	_bitsNumber = 8;
};

std::ostream & operator<<( std::ostream & o, Fixed const &nb );

#endif

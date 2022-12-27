/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 12:39:38 by ademurge          #+#    #+#             */
/*   Updated: 2022/12/27 14:43:53 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

class Fixed
{
	public:
		Fixed();
		Fixed(const int itg);
		Fixed(const float flt);
		Fixed(const Fixed &f);
		~Fixed();

		Fixed			&operator=(const Fixed &f);
		bool			operator>(Fixed const &f);
		bool			operator>=(Fixed const &f);
		bool			operator<(Fixed const &f);
		bool			operator<=(Fixed const &f);
		bool			operator==(Fixed const &f);
		bool			operator!=(Fixed const &f);
		Fixed			operator+(Fixed const &f);
		Fixed			operator-(Fixed const &f);
		Fixed			operator*(Fixed const &f);
		Fixed			operator/(Fixed const &f);
		Fixed			operator++(void);
		Fixed			operator++(int);
		Fixed			operator--(void);
		Fixed			operator--(int);

		static const Fixed	&min(Fixed &a, Fixed &b);
		static const Fixed	&min(Fixed const &a, Fixed const &b);
		static const Fixed	&max(Fixed &a, Fixed &b);
		static const Fixed	&max(Fixed const &a, Fixed const &b);


		int				getRawBits(void) const;
		void			setRawBits(const int _raw);

		float			toFloat(void) const;
		int				toInt(void) const;

	private:
		int					_number;
		static const int	_bitsNumber = 8;
};

std::ostream	&operator<<(std::ostream &str, Fixed const &fixed_nbr);
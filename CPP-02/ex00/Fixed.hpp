/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 12:39:38 by ademurge          #+#    #+#             */
/*   Updated: 2022/12/24 15:03:49 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed &f);
		~Fixed();

		Fixed	&operator=(const Fixed &f);
		int		getRawBits(void) const;
		void	setRawBits(const int _raw);

	private:
		int					_number;
		static const int	_bitsNumber = 8;
};
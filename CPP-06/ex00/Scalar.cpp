/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 22:06:22 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/20 23:38:24 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

/*
** ------------------------------- CONSTRUCTORS --------------------------------
*/
Scalar::Scalar(std::string str) : _str(str) { }

Scalar::Scalar(const Scalar &copy) : _str(copy._str) { }

Scalar	&Scalar::operator=(const Scalar &copy)
{
	if (this != &copy)
		this->_str = copy._str;
	return (*this);
}

/*
** ------------------------------- DESTRUCTOR --------------------------------
*/
Scalar::~Scalar(void) { }

/*
** ------------------------------- ACCESSOR --------------------------------
*/
std::string	Scalar::getStr(void) const { return (this->_str); }


/*
** ------------------------------- METHODS --------------------------------
*/
Scalar::operator char (void)
{
	char	c;
	int		d;

	try
	{
		d = stoi(_str);
		c = static_cast<char>(d);
	}
	catch (const std::invalid_argument& ia)
	{
			c = _str[0];
	}
	// c = static_cast<char>(n);
	// if (n >= CHAR_MIN && n <= CHAR_MAX)
	// {
		// if (n >= 32 && n <= 126)
			// std::cout << "char: '" << c << "'" << std::endl;
		// else
			// std::cout << "char: Non displayable" << std::endl;
	// }
	// else
		// std::cout << "char: impossible" << std::endl;
	return (c);
}
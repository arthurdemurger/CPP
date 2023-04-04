/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 22:06:22 by ademurge          #+#    #+#             */
/*   Updated: 2023/04/04 12:33:30 by ademurge         ###   ########.fr       */
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
	char	c = 0;
	int		d = 0;

	if (!isValid(_str) || isInf(_str) || isInff(_str))
	{
			std::cout << "char:   impossible" << std::endl;
			return (0);
	}
	if (this->_str.length() == 1)
	{
		try
		{
			d = stoi(this->_str);
			c = static_cast<char>(d);
		}
		catch (const std::invalid_argument &ia)
		{
			c = _str[0];
		}
		if (c >= 32 && c <= 127)
			std::cout << "char:   '" << c << "'" << std::endl;
		else
			std::cout << "char:   non displayable" << std::endl;
	}
	else
	{
		try
		{
			d = stoi(this->_str);
		}
		catch(const std::invalid_argument& ia)
		{
			std::cout << "char:   impossible" << std::endl;
			return (0);
		}
		catch(const std::out_of_range& oor)
		{
			std::cout << "char:   out of range" << std::endl;
			return (0);
		}
		if (d >= std::numeric_limits<char>::min()
		&& d <= std::numeric_limits<char>::max())
		{
			c = static_cast<char>(d);
			if (d < 32 || d > 126)
				std::cout << "char:   Non displayable" << std::endl;
			else
				std::cout << "char:   '" << c << "'" << std::endl;
		}
		else
			std::cout << "char:   out of range" << std::endl;
	}
	return (c);
}

Scalar::operator int (void)
{
	int	n = 0;

	if (_str.length() == 1 && !std::isdigit(_str[0]))
	{
		n = static_cast<int>(_str[0]);
		std::cout << "int:    " << n << std::endl;
		return (n);
	}
	else if (!isValid(_str) || isInf(_str) || isInff(_str))
	{
			std::cout << "int:    impossible" << std::endl;
			return (0);
	}
	try
	{
		n = stoi(_str);
		std::cout << "int:    " << n << std::endl;
	}
	catch (const std::invalid_argument& ia)
	{
		std::cout << "int:    impossible" << std::endl;
		return (0);
	}
	catch (const std::out_of_range& oor)
	{
		std::cout << "int:    out of range" << std::endl;
		return (0);
	}
	return (n);
}

Scalar::operator float (void)
{
	float	f = 0;

	if (!isValid(_str))
	{
		std::cout << "float:  impossible" << std::endl;
			return (0);
	}
	if (_str.length() == 1 && !std::isdigit(_str[0]))
	{
		f = static_cast<float>(_str[0]);
		std::cout << "float:  " << f << "f" << std::endl;
		return (f);
	}
	try
	{
		f = stof(_str);
		std::cout << "float:  " << f << "f" << std::endl;
	}
	catch (const std::invalid_argument& ia)
	{
		std::cout << "float:  impossible" << std::endl;
	}
	catch (const std::out_of_range& oor)
	{
		std::cout << "float:  out of range" << std::endl;
	}
	return (f);
}

Scalar::operator double (void)
{
	double	d = 0;

	if (!isValid(_str))
	{
		std::cout << "double: impossible" << std::endl;
		return (0);
	}
	if (_str.length() == 1 && !std::isdigit(_str[0]))
	{
		d = static_cast<double>(_str[0]);
		std::cout << "double: " << d << std::endl;
		return (d);
	}
	try
	{
		d = stof(_str);
		std::cout << "double: " << d << std::endl;
	}
	catch (const std::invalid_argument& ia)
	{
		std::cout << "double: impossible" << std::endl;
	}
	catch (const std::out_of_range& oor)
	{
		std::cout << "double: out of range" << std::endl;
	}
	return (d);
}

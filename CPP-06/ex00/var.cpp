/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   var.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:31:25 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/16 15:47:33 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scalar.hpp"

static bool	isChar(std::string src)
{
	if (src.length() == 3 && src[0] == '\'' && src[2] == '\'')
		return (true);
	return (false);
}

static bool	isInt(std::string src)
{
	int	i;

	i = 0;
	if ((src[0] == '+' || src[0] == '-') && src.length() > 1)
		i++;
	while (src[i])
	{
		if (!std::isdigit(src[i]))
			return (false);
		i++;
	}
	return (true);
}

static bool	isFloat(std::string src)
{
	int	i = 0;
	int	dot = 0;
	int	length = src.length();

	if (src[length - 1] != 'f')
		return (false);
	if ((src[0] == '+' || src[0] == '-') && length > 1)
		i++;
	while (i < length - 1)
	{
		if (!std::isdigit(src[i]))
		{
			if (src[i] == '.' && src[i + 1] && !dot)
				dot++;
			else
				return (false);
		}
		i++;
	}
	if (dot != 1)
		return (false);
	return (true);
}

static bool	isDouble(std::string src)
{
	int	i = 0;
	int	dot = 0;
	int	length = src.length();

	if ((src[0] == '+' || src[0] == '-') && length > 1)
		i++;
	while (i < length)
	{
		if (!std::isdigit(src[i]))
		{
			if (src[i] == '.' && src[i + 1] && !dot)
				dot++;
			else
				return (false);
		}
		i++;
	}
	if (dot > 1)
		return (false);
	return (true);
}

int	which_var(std::string src)
{
	if (isChar(src))
		return (CHAR);
	else if (isInt(src))
		return (INT);
	else if (isFloat(src))
		return (FLOAT);
	else if (isDouble(src))
		return (DOUBLE);
	return (0);
}

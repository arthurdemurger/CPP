/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 10:12:36 by ademurge          #+#    #+#             */
/*   Updated: 2023/04/04 10:39:22 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

bool	isInf(std::string str)
{
	return (str == "inf" || str == "+inf" || str == "-inf" || str == "nan");
}

bool	isInff(std::string str)
{
	return (str == "inff" || str == "+inff" || str == "-inff" || str == "nanf");
}

bool	isInt(std::string str)
{
	int	nb;

	try
	{
		nb = stoi(str);
	}
	catch (const std::invalid_argument &ia)
	{
		return (false);
	}
	catch (const std::out_of_range &oor)
	{
		return (false);
	}
	if ((str.find(".") != std::string::npos))
		return (true);
	return (false);
}
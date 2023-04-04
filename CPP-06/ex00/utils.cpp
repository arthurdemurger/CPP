/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 10:12:36 by ademurge          #+#    #+#             */
/*   Updated: 2023/04/04 12:31:06 by ademurge         ###   ########.fr       */
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

bool	isValid(std::string str)
{
	size_t		pos;
	std::string	tmp;

	pos = 0;
	if (std::isdigit(str[0]))
	{
		if (str.find_first_not_of("0123456789.f") != std::string::npos)
			return (false);
		if (((pos = str.find("f")) != std::string::npos) && pos != str.size() - 1)
			return (false);
	}
	return (true);
}

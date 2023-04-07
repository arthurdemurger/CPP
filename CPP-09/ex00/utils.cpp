/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 17:50:43 by ademurge          #+#    #+#             */
/*   Updated: 2023/04/07 10:03:36 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

/* Displays an error message and returns false. */
bool	put_error(std::string error)
{
	std::cout << error << std::endl;
	return (false);
}

/* Checks an input line. If an error is found,
displays a message and returns false.*/
bool		check_input(std::string str)
{
	size_t			pos;
	int				year = 0;
	int				month = 0;
	int				day = 0;
	float			value = 0;

	if (str.empty())
		return (put_error("Error: wrong input."));
	if ((pos = str.find("-")) != 4)
		return (put_error("Error: wrong input."));
	year = stoi(str.substr(0, pos));
	str.erase(0, pos + 1);
	if ((pos = str.find("-")) != 2)
		return (put_error("Error: wrong input."));
	month = stoi(str.substr(0, pos));
	str.erase(0, pos + 1);
	if ((pos = str.find(" ")) != 2)
		return (put_error("Error: wrong input."));
	day = stoi(str.substr(0, pos));
	str.erase(0, pos);
	if ((pos = str.find(" | ")) != 0)
		return (put_error("Error: wrong input."));
	str.erase(0, 3);
	if (!std::isdigit(str[0]) && str[0] != '+')
	{
		if (str[0] != '-')
			return (put_error("Error: invalid value."));
		else
			return (put_error("Error: negative value."));
	}
	try
	{
		value = stoi(str);
		value = stof(str);
	}
	catch(const std::invalid_argument &ia)
	{
		return (put_error("Error: invalid value."));
	}
	catch(const std::out_of_range &oor)
	{
		return (put_error("Error: value out of range."));
	}
	if (!is_valid_date(year, month, day))
		return (put_error("Error: invalid date."));
	if (value > 1000)
		return (put_error("Error: value cannot be bigger than 1000."));
	return (true);
}

/* Checks if a year is a leap year. */
bool	is_leap(int year)
{
	if (year % 4 == 0) {
		if (year % 100 == 0) {
			if (year % 400 == 0)
			  return (true);
			else
				return (false);
		}
		else
			return (true);
	}
	else
		return (false);
}

/* Checks if a date is valid. */
bool	is_valid_date(int year, int month, int day)
{
	time_t	t = time(0);
	tm		*local_t = localtime(&t);

	if ((year > 1900 + local_t->tm_year)
		|| ((year == 1900 + local_t->tm_year) && month > 1 + local_t->tm_mon)
		|| ((year == 1900 + local_t->tm_year) && (month == 1 + local_t->tm_mon) && (day > local_t->tm_mday)))
		return (false);
	if (day < 1)
		return (false);
	switch (month)
	{
		case FEBRUARY:
			if (is_leap(year) && day > 29)
				return (false);
			else if (!is_leap(year) && day > 28)
				return (false);
			break ;
		case JANUARY:
		case MARCH:
		case MAY:
		case JULY:
		case AUGUST:
		case OCTOBER:
		case DECEMBER:
			if (day > 31)
				return (false);
			break ;
		case APRIL:
		case JUNE:
		case SEPTEMBER:
		case NOVEMBER:
			if (day > 30)
				return (false);
			break;
		default:
			return (false);
			break;
	}
	return true;
}
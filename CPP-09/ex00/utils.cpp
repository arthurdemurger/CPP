/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 17:50:43 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/27 18:03:25 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	find_date(std::map<int, float> database, int date)
{
	if (database[date])
		return (date);
	return (0);
}

int	date_to_int(std::string date)
{
	int			sum;
	int			i;

	sum = 0;
	i = 0;
	while (date[i] == '-' || (date[i] >= '0' && date[i] <= '9'))
	{
		if (date[i] >= '0' && date[i] <= '9')
			sum = sum * 10 + date[i] - 48;
		i++;
	}
	return (sum);
}

bool		check_input(std::string str)
{
	size_t			pos;
	int				year = 0;
	int				month = 0;
	int				day = 0;
	float			value = 0;

	if (str.empty())
		return false;
	if ((pos = str.find("-")) != 4)
		return (false);
	year = stoi(str.substr(0, pos));
	str.erase(0, pos + 1);
	if ((pos = str.find("-")) != 2)
		return (false);
	month = stoi(str.substr(0, pos));
	str.erase(0, pos + 1);
	if ((pos = str.find(" ")) != 2)
		return (false);
	day = stoi(str.substr(0, pos));
	str.erase(0, pos);
	if ((pos = str.find(" | ")) != 0)
		return (false);
	str.erase(0, 3);
	if (!std::isdigit(str[0]) && str[0] != '+' && str[0] != '-')
		return (false);
	try
	{
		value = stoi(str);
		value = stof(str);
	}
	catch(const std::invalid_argument &ia)
	{
		return (false);
	}
	catch(const std::out_of_range &oor)
	{
		return (false);
	}
	// std::cout << year << "/" << month << "/" << day << " | " << value << std::endl;
	if (!is_valid_date(year, month, day))
		return (false);
	return (true);
}

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
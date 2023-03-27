/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 12:13:38 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/27 17:18:03 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

/*
** ------------------------------- CONSTRUCTORS --------------------------------
*/
BitcoinExchange::BitcoinExchange(void)
{
	parse_data("data.csv", ",", DATABASE);
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy) : _database(copy._database) { }

/*
** ------------------------------- DESTRUCTOR --------------------------------
*/
BitcoinExchange::~BitcoinExchange(void) { }

/*
** ------------------------------- ACCESSOR --------------------------------
*/
std::map<int, float>	BitcoinExchange::getMap(void) const { return (_database); }

/*
** ------------------------------- OVERLOAD --------------------------------
*/
BitcoinExchange	&BitcoinExchange::operator=(const BitcoinExchange &copy)
{
	if (this != &copy)
	{
		this->_database = copy._database;
	}
	return (*this);
}

/*
** ------------------------------- METHODS --------------------------------
*/

void	BitcoinExchange::display_value(std::string filename)
{
	std::ifstream	file;
	std::string		buf;

	file.open(filename);
	if (file.is_open())
		getline(file, buf);
	while (file.is_open() && !file.eof())
	{
		getline(file, buf);
		if (!check_input(buf))
			std::cerr << "Error: bad input. => Usage <year/month/day | value" << std::endl;
	}
}

int	BitcoinExchange::find_date(int	date)
{
	if (_database[date])
		return (date);
	return (0);
}

int	BitcoinExchange::date_to_int(std::string date)
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

bool		BitcoinExchange::check_input(std::string str)
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
	std::cout << year << "/" << month << "/" << day << " | " << value << std::endl;
	if (!is_valid_date(year, month, day))
		return (false);
	return (true);
}

void	BitcoinExchange::parse_data(std::string filename, std::string separator, int location)
{
	std::ifstream	file;
	std::string		buf;
	int				key;
	float			value;
	size_t			pos;

	file.open(filename);
	if (file.is_open())
		getline(file, buf);
	while (file.is_open() && !file.eof())
	{
		getline(file, buf);
		if (buf.empty())
			break ;
		pos = buf.find(separator);
		key = date_to_int(buf.substr(0, pos));
		value = stof(buf.substr(pos + 1, buf.size() - pos + 1));
		if (location == DATABASE)
			_database[key] = value;
		else if (location == INPUT)
			_input[key] = value;
	}
}

bool	BitcoinExchange::is_leap(int year)
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

bool	BitcoinExchange::is_valid_date(int year, int month, int day)
{
	time_t	t = time(0);
	tm		*local_t = localtime(&t);

	if ((year > 1900 + local_t->tm_year) || (month > 1 + local_t->tm_mon) || (day > local_t->tm_mday))
		return (false);
	if (day < 1)
		return (false);
	switch (month)
	{
		case FEBRUARY:
			if (is_leap(year) && day > 29)
				return (false);
			else if (day > 28)
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

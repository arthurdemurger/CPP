/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 12:13:38 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/27 18:09:15 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

/*
** ------------------------------- CONSTRUCTORS --------------------------------
*/
BitcoinExchange::BitcoinExchange(void)
{
	parse_data("data.csv", ",");
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy) : _database(copy._database) { }

/*
** ------------------------------- DESTRUCTOR --------------------------------
*/
BitcoinExchange::~BitcoinExchange(void) { }

/*
** ------------------------------- ACCESSOR --------------------------------
*/
std::map<int, float>	BitcoinExchange::getDataBase(void) const { return (_database); }
std::map<int, float>	BitcoinExchange::getInput(void) const { return (_input); }

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
	int				key;
	float			value;
	size_t			pos;

	file.open(filename);
	if (file.is_open())
		getline(file, buf);
	if (buf.compare("date | value"))
	{
			std::cerr << "Error: bad input. => Usage <year/month/day | value>" << std::endl;
			return ;
	}
	while (file.is_open() && !file.eof())
	{
		getline(file, buf);
		if (buf.empty())
			break ;
		if (!check_input(buf))
			std::cerr << "Error: bad input. => Usage <year/month/day | value>" << std::endl;
		pos = buf.find(" | ");
		key = date_to_int(buf.substr(0, pos));
		value = stof(buf.substr(pos + 3, buf.size() - pos + 3));
		_input[key] = value;
	}
}

void	BitcoinExchange::parse_data(std::string filename, std::string separator)
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
		_database[key] = value;
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 12:13:38 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/28 11:41:54 by ademurge         ###   ########.fr       */
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
std::map<std::string, float>	BitcoinExchange::getDataBase(void) const { return (_database); }
std::map<std::string, float>	BitcoinExchange::getInput(void) const { return (_input); }

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
/* Read the file line by line. Check each line.
If the input is correct, the function retrieves the date and value,
compares them with those in the database. It finally displays
the multiplication of the value by the exchange rate at this date.*/
bool	BitcoinExchange::display_value(std::string filename)
{
	std::ifstream							file;
	std::string								buf, date;
	float									value;
	size_t									pos;
	std::map<std::string, float>::iterator	dataIt;

	file.open(filename);
	if (file.is_open())
		getline(file, buf);
	else
		return (put_error("Error: could not open file."));
	if (buf.compare("date | value"))
		return (put_error("Error: wrong input."));
	while (file.is_open() && !file.eof())
	{
		getline(file, buf);
		if (buf.empty())
			continue ;
		if (!check_input(buf))
			continue ;
		pos = buf.find(" | ");
		date = buf.substr(0, pos);
		value = stof(buf.substr(pos + 3, buf.size() - pos + 3));
		dataIt = _database.begin();
		while ((dataIt != _database.end()) && (date >= dataIt->first))
			dataIt++;
		if (dataIt == _database.begin())
			std::cout << date << " => " << value << " = " << 0 << std::endl;
		else
			std::cout << date << " => " << value << " = " << (--dataIt)->second * value << std::endl;
	}
	file.close();
	return (true);
}

/* Parse the database ('data.csv') into a map container called _database */
void	BitcoinExchange::parse_data(std::string filename, std::string separator)
{
	std::ifstream	file;
	std::string		buf, key;
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
		key = buf.substr(0, pos);
		value = stof(buf.substr(pos + 1, buf.size() - pos + 1));
		_database[key] = value;
	}
	file.close();
}

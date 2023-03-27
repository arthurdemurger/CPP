/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 12:13:38 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/27 13:09:03 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

/*
** ------------------------------- CONSTRUCTORS --------------------------------
*/
BitcoinExchange::BitcoinExchange(void)
{
	std::ifstream	file;
	std::string		buf, key;
	float			value;
	size_t			pos;

	file.open("data.csv");
	if (file.is_open())
		getline(file, buf);
	while (file.is_open() && !file.eof())
	{
		getline(file, buf);
		if (buf.empty())
			break ;
		pos = buf.find(",");
		key = buf.substr(0, pos);
		value = stof(buf.substr(pos + 1, buf.size() - pos + 1));
		_map[key] = value;
	}
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy) : _map(copy._map) { }

/*
** ------------------------------- DESTRUCTOR --------------------------------
*/
BitcoinExchange::~BitcoinExchange(void) { }

/*
** ------------------------------- ACCESSOR --------------------------------
*/
std::map<std::string, float>	BitcoinExchange::getMap(void) const { return (_map); }

/*
** ------------------------------- OVERLOAD --------------------------------
*/
BitcoinExchange	&BitcoinExchange::operator=(const BitcoinExchange &copy)
{
	if (this != &copy)
	{
		this->_map = copy._map;
	}
	return (*this);
}

/*
** ------------------------------- METHODS --------------------------------
*/

std::string	BitcoinExchange::find_elem(std::string s)
{
	if (_map[s])
		return (s);
	
}

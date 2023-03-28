/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 12:12:56 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/28 11:17:36 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP

#define BITCOINEXCHANGE_HPP

/*
** ------------------------------- LIBRARIES --------------------------------
*/
#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <ctime>
#include <iterator>

/*
** ------------------------------- DEFINE CONSTANTS --------------------------------
*/
# define JANUARY 1
# define FEBRUARY 2
# define MARCH 3
# define APRIL 4
# define MAY 5
# define JUNE 6
# define JULY 7
# define AUGUST 8
# define SEPTEMBER 9
# define OCTOBER 10
# define NOVEMBER 11
# define DECEMBER 12

/*
** ------------------------------- UTILS FUNCTIONS --------------------------------
*/
bool	check_input(std::string str);
bool	is_valid_date(int year, int month, int day);
bool	put_error(std::string error);

/*
** ------------------------------- CLASS --------------------------------
*/
class BitcoinExchange
{
	public:
		/* Canonical form */
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &copy);
		BitcoinExchange &operator=(const BitcoinExchange &copy);
		~BitcoinExchange();

		/* Accessor */
		std::map<std::string, float>	getDataBase(void) const;
		std::map<std::string, float>	getInput(void) const;

		/* Public method*/
		bool						display_value(std::string filename);

	private:
		/* Attributes */
		std::map<std::string, float>	_database;
		std::map<std::string, float>	_input;
		std::string						_error;
		/* Private methods */
		void					parse_data(std::string filename, std::string separator);
		bool						parse_input(std::string filename);
};

#endif // BITCOIN_EXCHANGE_HPP
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 12:12:56 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/27 17:10:27 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP

#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <ctime>

class BitcoinExchange
{
	public:
		/* Canonical form */
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &copy);
		BitcoinExchange &operator=(const BitcoinExchange &copy);
		~BitcoinExchange();

		/* Accessor */
		std::map<int, float>	getMap(void) const;

		/* Public method*/
		void					display_value(std::string filename);

	private:
		/* Attributes */
		std::map<int, float>	_database;
		std::map<int, float>	_input;

		/* Private methods */
		int						date_to_int(std::string date);
		int						find_date(int date);
		void					parse_data(std::string filename, std::string separator, int location);
		bool					check_input(std::string filename);
		bool					is_valid_date(int year, int month, int day);
		bool					is_leap(int year);
};

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

# define DATABASE 0
# define INPUT 1

# define ICI std::cout << "ici\n";

#endif
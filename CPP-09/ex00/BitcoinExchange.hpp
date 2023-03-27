/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 12:12:56 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/27 13:04:34 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP

#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <map>
#include <string>
class BitcoinExchange
{
	public:
		/* Canonical form */
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &copy);
		BitcoinExchange &operator=(const BitcoinExchange &copy);
		~BitcoinExchange();

		/* Accesor */
		std::map<std::string, float>	getMap(void) const;
		std::string	find_elem(std::string s);

	private:
		/* Attributes */
		std::map<std::string, float>	_map;

		/* Methods */
};

#endif
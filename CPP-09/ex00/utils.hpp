/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 15:10:31 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/29 15:11:29 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP

# define UTILS_HPP

#include "BitcoinExchange.hpp"

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

#endif

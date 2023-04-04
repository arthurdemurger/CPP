/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 10:15:50 by ademurge          #+#    #+#             */
/*   Updated: 2023/04/04 10:32:20 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP

#define UTILS_HPP

/* Libraries*/
#include "Scalar.hpp"

/* Define constants*/
# define CHAR 1
# define INT 2
# define FLOAT 3
# define DOUBLE 4

/* utils functions */
bool	isInff(std::string str);
bool	isInf(std::string str);
bool	isInt(std::string str);

#endif
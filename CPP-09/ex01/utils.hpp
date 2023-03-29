/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 15:10:31 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/29 15:17:54 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP

# define UTILS_HPP

#include "RPN.hpp"

/*
** ------------------------------- DEFINE CONSTANTS --------------------------------
*/
#define ADD 1
#define SUB 2
#define MULT 3
#define DIV 4
#define VALID_CHAR "0123456789+-/*"

/*
** ------------------------------- UTILS FUNCTIONS --------------------------------
*/
int	is_operator(std::string elem);
int	ret_pop(std::stack<int> *stack);

#endif

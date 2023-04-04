/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:40:39 by ademurge          #+#    #+#             */
/*   Updated: 2023/04/04 10:41:26 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP

#define SCALAR_HPP

/* Libraries */
#include <iostream>
#include <iomanip>
#include <limits.h>
#include "utils.hpp"

/* Class */
class Scalar
{
	public:
		/* Canonical form*/
		~Scalar();
		Scalar(std::string str);
		Scalar(const Scalar &copy);
		Scalar	&operator=(const Scalar &copy);

		/* Accessor */
		std::string	getStr(void) const;

		/* Operators */
		operator char();
		operator int();
		operator float();
		operator double();

	private:
		Scalar();
		std::string	_str;
};

#endif /* SCALAR_HPP */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:40:39 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/24 15:15:57 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP

#define SCALAR_HPP

/* Libraries */
#include <iostream>
#include <limits.h>

/* Define constants*/
# define CHAR 1
# define INT 2
# define FLOAT 3
# define DOUBLE 4

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
		bool	isInf(std::string str);
		bool	isInff(std::string str);
};

#endif /* SCALAR_HPP */

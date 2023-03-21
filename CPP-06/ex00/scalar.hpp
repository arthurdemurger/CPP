/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:40:39 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/21 11:48:45 by ademurge         ###   ########.fr       */
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
# define ICI std::cout << "ici\n";

class Scalar
{
	public:
		~Scalar();
		Scalar(std::string str);
		Scalar(const Scalar &copy);
		Scalar	&operator=(const Scalar &copy);

		std::string	getStr(void) const;

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

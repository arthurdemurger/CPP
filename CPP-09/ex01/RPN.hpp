/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 11:49:49 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/28 13:04:06 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP

#define RPN_HPP

/* Libraries */
#include <iostream>
#include <stack>

/* Class */
class RPN
{
	public:
		/* Canonical form */
		RPN();
		RPN(const RPN &copy);
		RPN	&operator=(const RPN &copy);
		~RPN();

		/* Accessor */
		std::stack<int>	getStack(void) const;
		void			calculate(std::string arg);
	private:
		/* Attribute */
		std::stack<int>	_stack;
};

#endif //RPN_HPP
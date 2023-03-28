/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 11:49:49 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/28 18:47:13 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP

#define RPN_HPP

/* Libraries */
#include <iostream>
#include <stack>

/* Define constants */
#define ADD 1
#define SUB 2
#define MULT 3
#define DIV 4

/* Utils functions */
int	is_operator(std::string elem);
int	ret_pop(std::stack<int> *stack);

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
		std::stack<int>			getStack(void) const;

		/* Public methods */
		int						calculate(std::string arg);
		static int				put_error(std::string err);

	private:
		/* Private methods */
		int						do_operator(int	oper);
		bool					check_arg(std::string arg);

		/* Attribute */
		std::stack<int>	_stack;
};

#endif //RPN_HPP
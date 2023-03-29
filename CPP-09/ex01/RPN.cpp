/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 12:14:03 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/29 10:21:15 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

/*
** ------------------------------- CONSTRUCTORS --------------------------------
*/
RPN::RPN(void) { }

RPN::RPN(const RPN &copy) : _stack(copy._stack) { }
/*
** ------------------------------- DESTRUCTOR --------------------------------
*/
RPN::~RPN(void) { }

/*
** ------------------------------- ACCESSOR --------------------------------
*/
std::stack<int>	RPN::getStack(void) const { return(this->_stack); }

/*
** ------------------------------- METHODS --------------------------------
*/
/* Function that will first call another function
to check if the input is correct. It will then loop
over the string and advance element by element.
It finally returns the top of the stack
which contains the result of the operation.*/
int	RPN::calculate(std::string arg)
{
	size_t		pos;
	std::string	tmp;
	int			oper;

	if (!check_arg(arg))
		return (RPN::put_error("Error"));
	while (!arg.empty())
	{
		pos = arg.find_first_of(VALID_CHAR);
		if (pos != std::string::npos)
		{
			tmp = arg.substr(pos, 1);
			arg.erase(0, pos + 1);
			if ((oper = is_operator(tmp)))
			{
				if (do_operator(oper))
					return (EXIT_FAILURE);
			}
			else
				_stack.push(stoi(tmp));
		}
		else
			break ;
	}
	std::cout << _stack.top() << std::endl;
	return (EXIT_SUCCESS);
}

/* Function that will pop the first two elements
of the stack to perform the operation between them.*/
int	RPN::do_operator(int oper)
{
	int	a, b;

	if (_stack.size() < 2)
		return (put_error("Error"));
	b = ret_pop(&_stack);
	a = ret_pop(&_stack);
	if (oper == ADD)
		_stack.push(a + b);
	else if (oper == SUB)
		_stack.push(a - b);
	else if (oper == MULT)
		_stack.push(a * b);
	else if (oper == DIV)
	{
		if (b == 0)
			return (put_error("Error: Cannot divide by 0 !"));
		_stack.push(a / b);
	}
	return (EXIT_SUCCESS);
}

/* Displays an error message */
int	RPN::put_error(std::string err)
{
	std::cout << err << std::endl;
	return (EXIT_FAILURE);
}

/* Function that checks if the input is correct */
bool	RPN::check_arg(std::string arg)
{
	size_t	i = 0;
	int	nOperator, nOperand;

	nOperand = 0;
	nOperator = 0;
	while (i < arg.length())
	{
		if (arg[i] == ' ')
		{
			i++;
			continue ;
		}
		if (!std::isdigit(arg[i]) && arg[i] != '+' && arg[i] != '-'
			&& arg[i] != '*' && arg[i] != '/')
			return (false);
		if (std::isdigit(arg[i]))
			nOperand++;
		else
			nOperator++;
		i++;
	}
	if (nOperand - nOperator != 1)
		return (false);
	return (true);
}

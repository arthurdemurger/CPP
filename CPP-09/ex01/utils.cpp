/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 15:33:29 by ademurge          #+#    #+#             */
/*   Updated: 2023/04/07 11:08:35 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	ft_pop(std::stack<int> *stack)
{
	int	ret = stack->top();
	stack->pop();
	return (ret);
}

int	is_operator(std::string elem)
{
	if (!elem.compare("+"))
		return (ADD);
	else if (!elem.compare("-"))
		return (SUB);
	else if (!elem.compare("*"))
		return (MULT);
	else if (!elem.compare("/"))
		return (DIV);
	return (0);
}

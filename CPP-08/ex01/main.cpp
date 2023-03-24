/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 16:08:46 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/24 12:09:43 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main (void)
{
	Span	span(100);

	try
	{
			span.addNumber(5, 0, 1000);
	}
	catch (const std::exception &e)
	{
		std::cout << "No space left in the span." << std::endl;
	}
	std::cout << span;
	try
	{
		std::cout << "[Longest span] : " << span.longestSpan() << std::endl;
		std::cout << "[Shortest span] : " << span.shortestSpan() << std::endl;
	}
	catch(const std::out_of_range &oor)
	{
		std::cout << oor.what() << std::endl;
	}
}
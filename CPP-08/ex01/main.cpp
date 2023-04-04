/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 16:08:46 by ademurge          #+#    #+#             */
/*   Updated: 2023/04/04 12:59:19 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main (void)
{
	Span	span(500);

	try
	{
			span.addNumber(500, 0, 10000000);
			std::cout << span;
			std::cout << "[Longest span] : " << span.longestSpan() << std::endl;
			std::cout << "[Shortest span] : " << span.shortestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "No space left in the span." << std::endl;
	}
	catch(const std::out_of_range &oor)
	{
		std::cout << oor.what() << std::endl;
	}
}
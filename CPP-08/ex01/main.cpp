/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 16:08:46 by ademurge          #+#    #+#             */
/*   Updated: 2023/04/07 10:57:07 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main (void)
{
	Span	span(10000);

	try
	{
			span.addNumber(0, 0, 1000000);
			std::cout << span;
			std::cout << "[Longest span] : " << span.longestSpan() << std::endl;
			std::cout << "[Shortest span] : " << span.shortestSpan() << std::endl;
	}
	catch(const std::invalid_argument &ia)
	{
		std::cout << ia.what() << std::endl;
	}
	catch (const Span::SpanFullException &spe)
	{
		std::cout << spe.what() << std::endl;
	}
	catch(const std::out_of_range &oor)
	{
		std::cout << oor.what() << std::endl;
	}

}
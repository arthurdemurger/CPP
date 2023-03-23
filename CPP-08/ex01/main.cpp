/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 16:08:46 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/23 16:40:40 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main (void)
{
	Span	span(100);

	try
	{
		for (int i = 0; i < 10; i++)
			span.addNumber(i);
	}
	catch (const std::exception &e)
	{
		std::cout << "No space left in the span." << std::endl;
	}

		// std::cout << (span.getVec())[0] << " ";

	try
	{
		std::cout << "[Longest span] : " << span.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "Minimum two elements in the span." << std::endl;
	}
}
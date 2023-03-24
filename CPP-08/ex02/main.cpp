/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 11:14:42 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/24 12:00:03 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	srand(time(0));
	MutantStack<int> mutant;

	for (int i = 0; i < 10; i++)
		mutant.push(rand() % 100);
	MutantStack<int>::iterator begin = mutant.begin();
	MutantStack<int>::iterator end = mutant.end();
	std::cout << "[Stack] : " << std::endl;
	while (begin != end)
	{
		std::cout << *begin << " ";
		++begin;
	}
	std::cout << std::endl;
	std::stack<int> s(mutant);
}

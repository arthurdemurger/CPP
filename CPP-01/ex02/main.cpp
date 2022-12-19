/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 16:41:21 by ademurge          #+#    #+#             */
/*   Updated: 2022/12/19 16:50:33 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (void)
{
	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "address of string          : " << &string << std::endl;
	std::cout << "address in stringPTR       : " << stringPTR << std::endl;
	std::cout << "address in stringREF       : " << &stringREF << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "value of string            : " << string << std::endl;
	std::cout << "value pointed by stringPTR : " << *stringPTR << std::endl;
	std::cout << "value pointed by stringREF : " << stringREF << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 13:45:18 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/01 16:48:44 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	public:
		Animal();
		Animal(std::string type);
		Animal(const Animal &a);
		Animal &operator=(const Animal &rhs);
		virtual ~Animal();

		virtual void	makeSound() const;
		std::string		getType() const;
	protected:
		std::string	_type;
};

#endif
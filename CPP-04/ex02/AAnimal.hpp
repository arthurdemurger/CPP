/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 13:45:18 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/06 12:13:54 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class AAnimal
{
	public:
		AAnimal();
		AAnimal(std::string type);
		AAnimal(const AAnimal &a);
		AAnimal &operator=(const AAnimal &rhs);
		virtual ~AAnimal();

		virtual void	makeSound() const = 0;
		std::string		getType() const;
	protected:
		std::string	_type;
};

#endif
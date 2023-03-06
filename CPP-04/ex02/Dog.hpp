/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 16:19:35 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/06 12:14:31 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP

# define DOG_HPP


#include "AAnimal.hpp"

class Dog : public AAnimal
{
	public:
		Dog();
		Dog(const Dog &c);
		Dog	&operator=(const Dog &rhs);
		~Dog();
		void	makeSound(void) const;
	private:
		Brain	*_brain;
};

#endif
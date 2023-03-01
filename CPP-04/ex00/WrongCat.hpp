/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 16:19:24 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/01 16:59:25 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP

# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public Animal
{
	public:
		WrongCat();
		WrongCat(const WrongCat &c);
		WrongCat	&operator=(const WrongCat &rhs);
		~WrongCat();
		void	makeSound(void) const;
};

#endif
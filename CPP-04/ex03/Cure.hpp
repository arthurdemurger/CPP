/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:25:00 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/15 11:35:09 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP

# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	Cure();
	Cure(const Cure &copy);
	Cure	&operator=(const Cure &rhs);
	~Cure();
	virtual	AMateria	*clone() const;
};

#endif

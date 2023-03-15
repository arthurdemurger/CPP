/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:07:29 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/15 18:05:01 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP

#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	public:
		AMateria(std::string const &type);
		AMateria(const AMateria &copy);
		AMateria	&operator=(const AMateria &rhs);
		virtual	~AMateria();

		std::string const	&getType() const;
		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter &target);

	protected:
		std::string	_type;
	private:
		AMateria(void);
};


#endif

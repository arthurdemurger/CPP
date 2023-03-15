/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 17:14:59 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/15 17:17:36 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP

#define IMATERIASOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource
{
	public:
		virtual	~IMateriaSource() {};
		virtual void	learnMateria(AMateria *) = 0;
		virtual AMateria	*createMateria(std::string const &type) = 0;
};

#endif

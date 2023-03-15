/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 17:18:17 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/15 18:13:16 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP

#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &copy);
		MateriaSource const &operator=(const MateriaSource &copy);
		~MateriaSource();

		virtual void	learnMateria(AMateria *);
		virtual AMateria	*createMateria(std::string const &type);

	private:
		AMateria	*_knowledge[4];
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:50:17 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/15 16:55:26 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP

# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
		Character(const std::string name);
		Character(const Character &copy);
		Character const &operator=(const Character &copy);
		~Character();

		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);

	private:
		std::string	_name;
		AMateria	*_inventory[4];
		Character();
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 16:52:52 by ademurge          #+#    #+#             */
/*   Updated: 2022/12/20 00:20:09 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
public:
	HumanB(std::string name);
	HumanB(std::string name, Weapon weapon);
	~HumanB();
	void	attack(void) const;
	void	setWeapon(Weapon &weapon);
private:
	std::string	_name;
	Weapon		*_weapon;
};

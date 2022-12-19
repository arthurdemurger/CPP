/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 16:52:11 by ademurge          #+#    #+#             */
/*   Updated: 2022/12/19 17:11:41 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Weapon
{
public:
	Weapon();
	Weapon(std::string type);
	~Weapon();

	void	setType(std::string type);
	std::string const	&getType(void);
private:
	std::string _type;

};

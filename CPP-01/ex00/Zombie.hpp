/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 20:42:21 by ademurge          #+#    #+#             */
/*   Updated: 2022/12/18 21:03:29 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
public:
	Zombie(std::string name);
	~Zombie();
	void	announce(void);
	Zombie	*newZombie(std::string name);
	void	randomChump(std::string name);

private:
	std::string	_name;
};

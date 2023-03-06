/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 11:40:52 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/06 11:44:56 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP

#define BRAIN_HPP

#include <iostream>

class Brain
{
	public:
		Brain();
		Brain(const Brain &b);
		Brain &operator=(const Brain &rhs);
		~Brain();
	protected:
		std::string ideas[100];
};

#endif
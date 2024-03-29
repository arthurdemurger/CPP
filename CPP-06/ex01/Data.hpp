/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 10:27:23 by ademurge          #+#    #+#             */
/*   Updated: 2023/04/04 11:14:09 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP

# define DATA_HPP

#include <iostream>

class Data
{
	public:
		/* Canonical form */
		Data();
		Data(int data);
		Data(const Data &copy);
		Data &operator=(const Data &copy);
		~Data();

		/* Accessor */
		int	getData(void) const;

	private:
		int		_data;
};

#endif
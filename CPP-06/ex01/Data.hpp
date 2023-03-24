/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 10:27:23 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/24 15:16:19 by ademurge         ###   ########.fr       */
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

		/* Method */
		int	getData(void) const;

	private:
		int		_data;
};

#endif
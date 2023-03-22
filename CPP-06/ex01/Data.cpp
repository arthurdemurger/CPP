/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 10:27:20 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/22 10:51:07 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(void) : _data(0) { }

Data::Data(int data) : _data(data) { }

Data::Data(const Data &copy) : _data(copy._data) { }

Data	&Data::operator=(const Data  &copy)
{
	if (this != &copy)
		this->_data = copy._data;
	return (*this);
}

Data::~Data(void) { }

int	Data::getData(void) const { return (this->_data); }

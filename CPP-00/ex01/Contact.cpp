/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 17:36:10 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/16 09:38:18 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

/*
** ------------------------------- CONSTRUCTORS --------------------------------
*/

Contact::Contact(void)
{
	//std::cout << "Constructor called" << std::endl;
	this->phoneNumber = 0;
	return ;
}


/*
** ------------------------------- DESTRUCTORS --------------------------------
*/

Contact::~Contact(void)
{
	//std::cout << "Destructor called" << std::endl;
	return ;
}


/*
** ------------------------------- ACCESSOR --------------------------------
*/
std::string	Contact::getDarkSecret(void) const
{
	return (this->darkSecret);
}

std::string	Contact::getFirstName(void) const
{
	return (this->firstName);
}

std::string	Contact::getLastName(void) const
{
	return (this->lastName);
}

std::string	Contact::getNickName(void) const
{
	return (this->nickName);
}

unsigned long long	Contact::getPhoneNumber(void) const
{
	return (this->phoneNumber);
}

void	Contact::setDarkSecret(std::string s)
{
	this->darkSecret = s;
}

void	Contact::setFirstName(std::string s)
{
	this->firstName = s;
}

void	Contact::setLastName(std::string s)
{
	this->lastName = s;
}

void	Contact::setNickName(std::string s)
{
	this->nickName = s;
}

void	Contact::setPhoneNumber(unsigned long long nb)
{
	this->phoneNumber = nb;
}

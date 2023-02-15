/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 17:36:14 by ademurge          #+#    #+#             */
/*   Updated: 2023/02/15 11:48:10 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

/* Constructor */
PhoneBook::PhoneBook(void)
{
	//std::cout << "Constructor called" << std::endl;
	this->_index = 0;
	return ;
}

/* Destructor */
PhoneBook::~PhoneBook(void)
{
	//std::cout << "Destructor called" << std::endl;
	return ;
}

/* Setter */

void	PhoneBook::incrementIndex(void)
{
	if (this->_index < 7)
		this->_index++;
	else
		this->_index = 0;
}

void	PhoneBook::resetContact(void)
{
	this->_contacts[this->_index].setFirstName("");
	this->_contacts[this->_index].setLastName("");
	this->_contacts[this->_index].setNickName("");
	this->_contacts[this->_index].setDarkSecret("");
	this->_contacts[this->_index].setPhoneNumber(0);
}

/* Add a contact to the phonebook */
void	PhoneBook::addContact(void)
{
	std::string	input;

	if (this->_contacts[this->_index].getFirstName() != "")
		resetContact();
	while (this->_contacts[this->_index].getFirstName() == "")
	{
		std::cout << "Enter your first name : ";
		getline(std::cin, input);
		this->_contacts[this->_index].setFirstName(input);
	}
	while (this->_contacts[this->_index].getLastName() == "")
	{
		std::cout << "Enter your last name : ";
		getline(std::cin, input);
		this->_contacts[this->_index].setLastName(input);
	}
	while (this->_contacts[this->_index].getNickName() == "")
	{
		std::cout << "Enter your nick name : ";
		getline(std::cin, input);
		this->_contacts[this->_index].setNickName(input);
	}
	while (this->_contacts[this->_index].getDarkSecret() == "")
	{
		std::cout << "Enter your dark secret : ";
		getline(std::cin, input);
		this->_contacts[this->_index].setDarkSecret(input);
	}
	while (this->_contacts[this->_index].getPhoneNumber() == 0)
	{
		std::cout << "Enter your phone number : ";
		getline(std::cin, input);
		if (isPhoneNumber(input))
			this->_contacts[this->_index].setPhoneNumber(ft_stoi(input));
		if (this->_contacts[this->_index].getPhoneNumber() == 0)
			std::cout << "Wrong input." << std::endl;
	}
	incrementIndex();
}

/* Displays the directory and then searches
and displays the requested contact via an index*/
void	PhoneBook::searchContact(void)
{
	bool		valid_input;
	std::string	input;
	int			i;

	valid_input = false;
	displayPhoneBook();
	std::cout << std::endl << "Enter an index : " << std::endl;
	while (!valid_input)
	{
		getline(std::cin, input);
		if (isdigit(input[0]) && input.length() == 1)
		{
			i = input[0] - 48;
			if (i >= 0 && i <= 7)
				valid_input = true;
		}
		if (!valid_input)
			std::cout << "Please enter a valid index (0 - 7) : " << std::endl;
	}
	if (this->_contacts[i].getFirstName() != "")
		displayOneContact(i);
	else
		std::cout << "This contact doesn't exist." << std::endl;
}


/* Displays a string in 10 char */
void	PhoneBook::displaySmallContact(std::string s)
{
	int	i;

	i = 0;
	while (s[i] && i < 10)
	{
		if (i == 9)
			putchar('.');
		else
			putchar(s[i]);
		i++;
	}
	while (i++ < 10)
		putchar(' ');
}

/* Displays the phonebook with pipes */
void	PhoneBook::displayPhoneBook(void)
{
	int	i;

	i = -1;
	std::cout << "  index   |first name|last  name| nick name" << std::endl;
	std::cout << "----------+----------+----------+----------" << std::endl;
	while (++i < 8)
	{
		std::cout << "    " << i << "     |";
		displaySmallContact(this->_contacts[i].getFirstName());
		putchar('|');
		displaySmallContact(this->_contacts[i].getLastName());
		putchar('|');
		displaySmallContact(this->_contacts[i].getNickName());
		std::cout << std::endl;
	}
}

/* Displays all informations of a contact*/
bool	PhoneBook::displayOneContact(int i)
{
	if (!(i >= 0 && i <= 7))
		return (false);
	std::cout << "--------------" << std::endl << "[contact " << i << "]" << std::endl;
	std::cout << "first name : " << this->_contacts[i].getFirstName() << std::endl;
	std::cout << "last name : " << this->_contacts[i].getLastName() << std::endl;
	std::cout << "nick name : " << this->_contacts[i].getNickName() << std::endl;
	std::cout << "dark secret : " << this->_contacts[i].getDarkSecret() << std::endl;
	std::cout << "phonenumber : " << this->_contacts[i].getPhoneNumber() << std::endl;
	return (true);
}

bool	PhoneBook::isPhoneNumber(std::string s)
{
	int	i;

	i = -1;
	while (s[++i])
	{
		if (!std::isdigit(s[i]))
			return (false);
	}
	return (true);
}

int	PhoneBook::ft_stoi(std::string s)
{
	unsigned long long	sum;
	int					i;

	sum = 0;
	i = -1;
	while (s[++i])
		sum = sum * 10 + s[i] - '0';
	return (sum);
}

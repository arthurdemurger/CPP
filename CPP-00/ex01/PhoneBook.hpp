/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 17:36:16 by ademurge          #+#    #+#             */
/*   Updated: 2022/12/18 20:43:14 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONE_BOOK_HPP

# define PHONE_BOOK_HPP

# include "Contact.hpp"
# include <iostream>

class PhoneBook
{
public:
	PhoneBook(void);
	~PhoneBook(void);
	void	addContact(void);
	void	searchContact(void);

private:
	void	resetContact(void);
	void	incrementIndex(void);
	bool	isPhoneNumber(std::string s);
	int		ft_stoi(std::string s);
	bool	displayOneContact(int i);
	void	displaySmallContact(std::string s);
	void	displayPhoneBook(void);

	Contact	_contacts[8];
	int		_index;
};

#endif

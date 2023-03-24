/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 13:36:02 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/24 14:32:40 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	public:
		/* Canonical form */
		Bureaucrat(std::string name, unsigned int grade);
		Bureaucrat(const Bureaucrat &b);
		Bureaucrat &operator=(const Bureaucrat &rhs);
		Bureaucrat();
		~Bureaucrat();

		/* Accessors */
		std::string		getName() const;
		int				getGrade() const;

		/* Methods */
		void			incrementGrade();
		void			decrementGrade();
		void			signForm(Form &f);

		/* Exceptions */
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw() { return "Grade too high"; };
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw() { return "Grade too low"; };
		};

	private:
		std::string		_name;
		unsigned int	_grade;

};

std::ostream&	operator<<(std::ostream& o, const Bureaucrat& rhs);

#endif
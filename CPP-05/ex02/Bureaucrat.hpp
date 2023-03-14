/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 13:36:02 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/14 15:00:41 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
	public:
		Bureaucrat(std::string name, unsigned int grade);
		Bureaucrat(const Bureaucrat &b);
		Bureaucrat &operator=(const Bureaucrat &rhs);
		Bureaucrat();
		~Bureaucrat();

		void			incrementGrade();
		void			decrementGrade();
		std::string		getName() const;
		int				getGrade() const;
		void			signForm(AForm &f);
		void			executeForm(AForm const &form) const;

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return "Grade too high";
				};
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return "Grade too low";
				};
		};

	private:
		std::string		_name;
		unsigned int	_grade;

};

std::ostream&	operator<<(std::ostream& o, const Bureaucrat& rhs);

#endif
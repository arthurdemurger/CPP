/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 14:15:48 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/14 13:29:37 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP

#define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;

class AForm
{
	public:
		AForm(const std::string name, int signGrade, int execGrade);
		AForm(const AForm &f);
		AForm &operator=(const AForm &rhs);
		virtual ~AForm();

		std::string		getName(void) const;
		int				getSignGrade(void) const;
		int				getExecGrade(void) const;
		bool			getIsSigned(void) const;
		void			beSigned(Bureaucrat &b);
		 virtual void	execute(const Bureaucrat& executor) const = 0;
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw ()
				{
					return ("Grade too high");
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

		class FormNotSignedException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return "Form not signed";
				};
		};
	private:
		AForm();
		const std::string	_name;
		bool				_isSigned;
		const int			_signGrade;
		const int			_execGrade;
};

std::ostream&	operator<<(std::ostream& o, const AForm& rhs);

#endif
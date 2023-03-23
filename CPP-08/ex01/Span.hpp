/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 15:11:58 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/23 16:27:14 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP

#define SPAN_HPP

#include <iostream>
#include <vector>
#include <limits.h>

class Span
{
	public:
		Span(unsigned int N);
		Span(const Span &copy);
		Span &operator=(const Span &copy);
		~Span();

		std::vector<int>	getVec(void) const;
		unsigned int		getSize(void) const;
		unsigned int		getNbOfInts(void) const;

		void			addNumber(int nb);
		// unsigned int	shortestSpan(void);
		unsigned int	longestSpan(void);

	private:
		// void			sort(std::vector<int> &span);
		Span();
		std::vector<int>	_span;
		unsigned int		_size;
		unsigned int		_nbOfInts;
};

std::ostream & operator<<( std::ostream & o, Span const &rhs);

#endif
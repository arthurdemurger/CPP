/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 11:16:09 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/29 16:29:54 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP

# define PMERGEME_HPP

/* Libraries */
#include <iostream>
#include <vector>
#include <deque>
#include <iterator>
#include <time.h>
#include "utils.hpp"

/* Class definition */
class PmergeMe
{
	public:
		/* Canonical form */
		PmergeMe(int ac, char **av);
		PmergeMe(const PmergeMe &copy);
		PmergeMe &operator=(const PmergeMe &copy);
		~PmergeMe();

		/* Accessors */
		std::vector<unsigned int>	getVec(void) const;
		std::deque<unsigned int>	getDeq(void) const;

		/* Methods*/
		void						mergesort_deque();
		void						mergesort_vector();

		/* Exception */
		class WrongInputException : public std::exception
		{
			public:
				virtual const char *what() const throw() { return "Error: wrong input."; };
		};

	private:
		/* Canonical form */
		PmergeMe();

		/* Methods*/
		bool						initializeDeque(char **av);
		bool						initializeVector(char **av);
		void						display_all(int ac, char **av);

		/* Attributes */
		std::vector<unsigned int>	_vec;
		std::deque<unsigned int>	_deq;
		clock_t						_vecTime;
		clock_t						_dequeTime;
};

#endif //PMERGEME_HPP

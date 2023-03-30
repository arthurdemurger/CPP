/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 11:16:09 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/30 13:01:55 by ademurge         ###   ########.fr       */
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
#include <iomanip>
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
		std::vector<int>	getVec(void) const;
		std::deque<int>	getDeq(void) const;

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
		void						deque_merge_insert(std::deque<int> &vec, int start, int end);
		void						vector_merge_insert(std::vector<int> &vec, int start, int end);

		/* Attributes */
		std::vector<int>			_vec;
		std::deque<int>				_deq;
		double						_vecTime;
		double						_dequeTime;
};

#endif //PMERGEME_HPP

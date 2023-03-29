/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 11:16:09 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/29 12:59:04 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP

# define PMERGEME_HPP

/* Libraries */
#include <iostream>
#include <vector>
#include <deque>
#include <iterator>

/* Define constants */
# define DEQUE 0
# define VECTOR 1

/* Class definition */
class PmergeMe
{
	public:
		/* Canonical form */
		PmergeMe();
		PmergeMe(const PmergeMe &copy);
		PmergeMe &operator=(const PmergeMe &copy);
		~PmergeMe();

		/* Accessors */
		std::vector<unsigned int>	getVec(void) const;
		std::deque<unsigned int>	getDeq(void) const;

		/* Methods*/
		void	addNumber(unsigned int nb);
		void	display(int type);
		void	mergesort_deque();
		void	mergesort_vector();

	private:
		/* Attributes */
		std::vector<unsigned int>	_vec;
		std::deque<unsigned int>	_deq;
};

#endif //PMERGEME_HPP

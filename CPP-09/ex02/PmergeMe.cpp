/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 11:35:42 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/29 12:52:52 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

/*
** ------------------------------- CONSTRUCTORS --------------------------------
*/
PmergeMe::PmergeMe(void) { }

PmergeMe::PmergeMe(const PmergeMe &copy) : _vec(copy._vec), _deq(copy._deq) { }

/*
** ------------------------------- DESTRUCTOR --------------------------------
*/
PmergeMe::~PmergeMe(void) { }

/*
** ------------------------------- OVERLOAD --------------------------------
*/
PmergeMe &PmergeMe::operator=(const PmergeMe &copy)
{
	this->_deq = copy._deq;
	this->_vec = copy._vec;
	return (*this);
}

/*
** ------------------------------- ACCESSOR --------------------------------
*/

std::vector<unsigned int> PmergeMe::getVec(void) const { return (_vec); }

std::deque<unsigned int> PmergeMe::getDeq(void) const { return (_deq); }

/*
** ------------------------------- METHODS --------------------------------
*/

void	PmergeMe::addNumber(unsigned int nb)
{
	_vec.insert(_vec.end(), nb);
	_deq.insert(_deq.end(), nb);
}

void	PmergeMe::display(int type)
{
	if (type == VECTOR)
	{
		std::vector<unsigned int>::iterator	it = _vec.begin();
		while (it != _vec.end())
			std::cout << *(it++) << " ";
		std::cout << std::endl;
	}
	if (type == DEQUE)
	{
		std::deque<unsigned int>::iterator	it = _deq.begin();
		while (it != _deq.end())
			std::cout << *(it++) << " ";
		std::cout << std::endl;
	}
}

void	PmergeMe::mergesort_vector(void)
{

}

void	PmergeMe::mergesort_deque(void)
{

}
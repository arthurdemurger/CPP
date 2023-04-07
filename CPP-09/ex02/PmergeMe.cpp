/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 11:35:42 by ademurge          #+#    #+#             */
/*   Updated: 2023/04/07 12:16:14 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

/*
** ------------------------------- CONSTRUCTORS --------------------------------
*/
PmergeMe::PmergeMe(int ac, char **av)
{

	clock_t	vecStart = clock();
	if (!initialize(_vec, av))
		throw WrongInputException();
	merge_insert(_vec, 0, _vec.size() - 1);
	clock_t	vecEnd = clock();

	clock_t	dequeStart = clock();
	if (!initialize(_deq, av))
		throw WrongInputException();
	merge_insert(_deq, 0, _deq.size() - 1);
	clock_t	dequeEnd = clock();

	_vecTime = vecEnd - vecStart;
	_dequeTime = dequeEnd - dequeStart;

	display_all(ac, av);
}

PmergeMe::PmergeMe(const PmergeMe &copy) : _vec(copy._vec), _deq(copy._deq), _vecTime(copy._vecTime), _dequeTime(copy._dequeTime) { }

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
	this->_vecTime = copy._vecTime;
	this->_dequeTime = copy._dequeTime;
	return (*this);
}

/*
** ------------------------------- ACCESSOR --------------------------------
*/
std::vector<int> PmergeMe::getVec(void) const { return (_vec); }

std::deque<int> PmergeMe::getDeq(void) const { return (_deq); }

/*
** ------------------------------- METHODS --------------------------------
*/
/* Displays the final output */
void	PmergeMe::display_all(int ac, char **av)
{
	int	i = 0;

	std::cout << "Before: ";
	while (++i < ac)
		std::cout << av[i] << " ";
	std::cout << std::endl;

	std::cout << "After:  ";
	std::vector<int>::iterator	it = _vec.begin();
	while (it != _vec.end())
		std::cout << *(it++) << " ";
	std::cout << std::endl;

	std::cout << std::fixed << std::setprecision(3);
	std::cout << "Time to proccess a range of " << _vec.size() << " with std::vector : " << (_vecTime / CLOCKS_PER_SEC) * 1000 << "ms" << std::endl;
	std::cout << "Time to proccess a range of " << _deq.size() << " with std::deque  : " << (_dequeTime / (CLOCKS_PER_SEC)) * 1000 << "ms" << std::endl;
}

/* Displays an error message */
bool	PmergeMe::display_error(std::string err)
{
	std::cout << err << std::endl;
	return (false);
}

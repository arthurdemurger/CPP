/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 11:35:42 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/30 13:15:47 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

/*
** ------------------------------- CONSTRUCTORS --------------------------------
*/
PmergeMe::PmergeMe(int ac, char **av)
{

	clock_t	vecStart = clock();
	if (!initializeVector(av))
		throw WrongInputException();
	vector_merge_insert(_vec, 0, _vec.size() - 1);
	clock_t	vecEnd = clock();

	clock_t	dequeStart = clock();
	if (!initializeDeque(av))
		throw WrongInputException();
	deque_merge_insert(_deq, 0, _deq.size() - 1);
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

	std::cout << std::fixed << std::setprecision(6);
	std::cout << "Time to proccess a range of " << _vec.size() << " with std::vector : " << (_vecTime / CLOCKS_PER_SEC)  << "s" << std::endl;
	std::cout << "Time to proccess a range of " << _deq.size() << " with std::deque  : " << (_dequeTime / (CLOCKS_PER_SEC) ) << "s" << std::endl;
}

void	PmergeMe::vector_merge_insert(std::vector<int> &vector, int start, int end)
{
	if (end - start > THRESHOLD)
	{
		int median = (start + end) / 2;
		vector_merge_insert(vector, start, median);
		vector_merge_insert(vector, median + 1, end);
		vector_merge_sort(vector, start, end);
	}
	else
		vector_insertion_sort(vector, start, end);
}

void	PmergeMe::deque_merge_insert(std::deque<int> &deque, int start, int end)
{
	if (end - start > THRESHOLD)
	{
		int median = (start + end) / 2;
		deque_merge_insert(deque, start, median);
		deque_merge_insert(deque, median + 1, end);
		deque_merge_sort(deque, start, end);
	}
	else
		deque_insertion_sort(deque, start, end);
}

bool	PmergeMe::initializeDeque(char **av)
{
	int	i = 0;

	while (av[++i])
	{
		try
		{
			_deq.push_back(std::stoi(av[i]));
		}
		catch(const std::invalid_argument &ia)
		{
			return (put_error("Error: not an unsigned int"));
		}
		catch(const std::out_of_range &oor)
		{
			return (put_error("Error: out of range"));
		}
		if (_deq.back() < 0)
			return (put_error("Error: not an unsigned int"));
	}
	return (true);
}

bool	PmergeMe::initializeVector(char **av)
{
	int	i = 0;

	while (av[++i])
	{
		try
		{
			_vec.push_back(std::stoi(av[i]));
		}
		catch(const std::invalid_argument &ia)
		{
			return (put_error("Error: not an unsigned int"));
		}
		catch(const std::out_of_range &oor)
		{
			return (put_error("Error: out of range"));
		}
		if (_vec.back() < 0)
			return (put_error("Error: not an unsigned int"));
	}
	return (true);
}

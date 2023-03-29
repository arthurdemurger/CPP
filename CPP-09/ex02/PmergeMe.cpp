/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 11:35:42 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/29 16:29:49 by ademurge         ###   ########.fr       */
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
	mergesort_vector();
	clock_t	vecEnd = clock();

	clock_t	dequeStart = clock();
	if (!initializeDeque(av))
		throw WrongInputException();
	mergesort_deque();
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
std::vector<unsigned int> PmergeMe::getVec(void) const { return (_vec); }

std::deque<unsigned int> PmergeMe::getDeq(void) const { return (_deq); }

/*
** ------------------------------- METHODS --------------------------------
*/

void	PmergeMe::display_all(int ac, char **av)
{
	int	i = 0;

	std::cout << "Before:";
	while (++i < ac)
		std::cout << av[i] << " ";
	std::cout << std::endl;

	std::cout << "After:";
	std::vector<unsigned int>::iterator	it = _vec.begin();
	while (it != _vec.end())
		std::cout << *it << " ";
	std::cout << std::endl;

	std::cout << "Time to proccess a range of " << _vec.size() << " with std::vector : " << _vecTime << std::endl;
	std::cout << "Time to proccess a range of " << _deq.size() << " with std::deque  : " << _dequeTime << std::endl;
}
void	PmergeMe::mergesort_vector(void)
{
	size_t i, key, j;

    for (i = 1; i < _vec.size(); i++)
    {
        key = _vec[i];
        j = i - 1;
        while (j >= 0 && _vec[j] > key)
        {
            _vec[j + 1] = _vec[j];
            j = j - 1;
        }
        _vec[j + 1] = key;
    }
}

void	PmergeMe::mergesort_deque(void)
{
	size_t i, key, j;

    for (i = 1; i < _deq.size(); i++)
    {
        key = _deq[i];
        j = i - 1;
        while (j >= 0 && _deq[j] > key)
        {
            _deq[j + 1] = _deq[j];
            j = j - 1;
        }
        _deq[j + 1] = key;
    }
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

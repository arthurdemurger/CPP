/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 11:16:09 by ademurge          #+#    #+#             */
/*   Updated: 2023/04/07 12:16:45 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP

# define PMERGEME_HPP

/* Libraries */

#include "algo.hpp"

/* Class definition */
class PmergeMe
{
	public:
		/*
		** ------------------------------- Canonical form --------------------------------
		*/
		PmergeMe(int ac, char **av);
		PmergeMe(const PmergeMe &copy);
		PmergeMe &operator=(const PmergeMe &copy);
		~PmergeMe();

		/*
		** ------------------------------- Accessors --------------------------------
		*/
		std::vector<int>	getVec(void) const;
		std::deque<int>		getDeq(void) const;

		/*
		** ------------------------------- Templates --------------------------------
		*/
		/* Retrieve the numbers from the input and check if they are correct. */
		template	<typename T>
		bool	initialize(T &stl, char **av)
		{
			int	i = 0;

			while (av[++i])
			{
				try
				{
					stl.push_back(std::stoi(av[i]));
				}
				catch(const std::invalid_argument &ia)
				{
					return (display_error("Error: not an unsigned int"));
				}
				catch(const std::out_of_range &oor)
				{
					return (display_error("Error: out of range"));
				}
				if (stl.back() < 0)
					return (display_error("Error: not an unsigned int"));
			}
			return (true);
		}
		/* Does the main algorithm */
		template	<typename T>
		void	merge_insert(T &stl, int start, int end)
		{
			if (end - start > THRESHOLD)
			{
				int median = (start + end) / 2;
				merge_insert(stl, start, median);
				merge_insert(stl, median + 1, end);
				merge_sort(stl, start, end);
			}
			else
				insertion_sort(stl, start, end);
		}

		/*
		** ------------------------------- Exception --------------------------------
		*/
		class WrongInputException : public std::exception
		{
			public:
				virtual const char *what() const throw() { return "Error: wrong input."; };
		};

	private:
		/* Canonical form */
		PmergeMe();

		/* Methods*/
		void						display_all(int ac, char **av);
		bool						display_error(std::string err);

		/* Attributes */
		std::vector<int>			_vec;
		std::deque<int>				_deq;
		double						_vecTime;
		double						_dequeTime;
};

#endif //PMERGEME_HPP

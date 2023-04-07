/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 15:10:31 by ademurge          #+#    #+#             */
/*   Updated: 2023/04/07 12:18:22 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP

# define UTILS_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <iterator>
#include <time.h>
#include <iomanip>
#include "PmergeMe.hpp"

/*
** ------------------------------- DEFINE CONSTANTS --------------------------------
*/
# define DEQUE 0
# define VECTOR 1
# define THRESHOLD 5

/*
** ------------------------------- TEMPLATES --------------------------------
*/

/* Insertion sort */
template	<typename T>
void	insertion_sort(T &stl, int start, int end)
{
	for(int i = start + 1; i < end; i++)
	{
		int key = stl[i];
		int j = i - 1;

		while(j >= 0 && stl[j] > key)
		{
			stl[j + 1] = stl[j];
			j--;
		}
		stl[j + 1] = key;
	}
}

/* Merge sort */
template	<typename T>
void	merge(T &stl, size_t start, size_t middle, size_t end)
{
	size_t l_index = 0, r_index = 0, cur_index = start;

	T	l_stl(middle - start + 1);
	T	r_stl(end - middle);

	for (size_t i = 0; i < l_stl.size(); ++i)
		l_stl[i] = stl[start + i];
	for (size_t i = 0; i < r_stl.size(); ++i)
		r_stl[i] = stl[middle + 1 + i];

	while (l_index < l_stl.size() && r_index < r_stl.size()) {
		if (l_stl[l_index] <= r_stl[r_index]) {
			stl[cur_index] = l_stl[l_index];
			l_index++;
		} else {
			stl[cur_index] = r_stl[r_index];
			r_index++;
		}
		cur_index++;
	}
	while (l_index < l_stl.size())
		stl[cur_index++] = l_stl[l_index++];
	while (r_index < r_stl.size())
		stl[cur_index++] = r_stl[r_index++];
}

template	<typename T>
void	merge_sort(T &stl, size_t start, size_t end)
{
	if (start < end)
	{
		size_t	median = (start + end) / 2;

		merge_sort(stl, start, median);
		merge_sort(stl, median + 1, end);
		merge(stl, start, median, end);
	}
}

#endif

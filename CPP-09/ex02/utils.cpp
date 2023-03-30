/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 15:25:21 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/30 12:51:58 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

/*
** ------------------------------- UTILS FUNCTIONS --------------------------------
*/
/* insertion sort DEQUE */
void deque_insertion_sort(std::deque<int> &deque, int start, int end)
{
	for(int j = start + 1; j < end; j++)
	{
		int key = deque[j];
		int i = j - 1;

		while(i >= 0 && deque[i] > key)
		{
			deque[i + 1] = deque[i];
			i--;
		}
		deque[i + 1] = key;
	}
}
/* insertion sort VECTOR */
void vector_insertion_sort(std::vector<int> &vector, int start, int end)
{
	for(int j = start + 1; j < end; j++)
	{
		int key = vector[j];
		int i = j - 1;

		while(i >= 0 && vector[i] > key)
		{
			vector[i + 1] = vector[i];
			i--;
		}
		vector[i + 1] = key;
	}
}

/* merge sort DEQUE */
void deque_merge(std::deque<int> &deque, size_t start, size_t middle, size_t end)
{
	size_t leftIndex = 0, rightIndex = 0;
	std::deque<int> leftDeque(middle - start + 1);
	std::deque<int> rightDeque(end - middle);
	size_t currentIndex = start;

	for (size_t i = 0; i < leftDeque.size(); ++i)
		leftDeque[i] = deque[start + i];
	for (size_t i = 0; i < rightDeque.size(); ++i)
		rightDeque[i] = deque[middle + 1 + i];

	while (leftIndex < leftDeque.size() && rightIndex < rightDeque.size()) {
		if (leftDeque[leftIndex] <= rightDeque[rightIndex]) {
			deque[currentIndex] = leftDeque[leftIndex];
			leftIndex++;
		} else {
			deque[currentIndex] = rightDeque[rightIndex];
			rightIndex++;
		}
		currentIndex++;
	}
	while (leftIndex < leftDeque.size())
		deque[currentIndex++] = leftDeque[leftIndex++];
	while (rightIndex < rightDeque.size())
		deque[currentIndex++] = rightDeque[rightIndex++];
}
void deque_merge_sort(std::deque<int> &deque, size_t start, size_t end)
{
	if (start < end)
	{
		size_t median = (start + end) / 2;

		deque_merge_sort(deque, start, median);
		deque_merge_sort(deque, median + 1, end);
		deque_merge(deque, start, median, end);
	}
}

/* merge sort VECTOR */
void vector_merge(std::vector<int> &vector, size_t start, size_t middle, size_t end)
{
	size_t leftIndex = 0, rightIndex = 0;
	std::vector<int> leftVector(middle - start + 1);
	std::vector<int> rightVector(end - middle);
	size_t currentIndex = start;

	for (size_t i = 0; i < leftVector.size(); ++i)
		leftVector[i] = vector[start + i];
	for (size_t i = 0; i < rightVector.size(); ++i)
		rightVector[i] = vector[middle + 1 + i];
	while (leftIndex < leftVector.size() && rightIndex < rightVector.size()) {
		if (leftVector[leftIndex] <= rightVector[rightIndex]) {
			vector[currentIndex] = leftVector[leftIndex];
			leftIndex++;
		} else {
			vector[currentIndex] = rightVector[rightIndex];
			rightIndex++;
		}
		currentIndex++;
	}
	while (leftIndex < leftVector.size())
		vector[currentIndex++] = leftVector[leftIndex++];
	while (rightIndex < rightVector.size())
		vector[currentIndex++] = rightVector[rightIndex++];
}
void vector_merge_sort(std::vector<int> &vector, size_t start, size_t end)
{
	if (start < end)
	{
		size_t median = (start + end) / 2;

		vector_merge_sort(vector, start, median);
		vector_merge_sort(vector, median + 1, end);
		vector_merge(vector, start, median, end);
	}
}

bool	put_error(std::string err)
{
	std::cout << err << std::endl;
	return (false);
}
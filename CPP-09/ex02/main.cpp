/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 12:11:25 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/30 11:37:03 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void insertion_sort(std::vector<int> &vec)
{
	for(std::size_t j = 1; j < vec.size(); j++)
	{
		int key = vec[j];
		int i = j - 1;

		while(i >= 0 && vec[i] > key)
		{
			vec[i + 1] = vec[i];
			i--;
		}
		vec[i + 1] = key;
	}
}

void merge(std::vector<int> &arr, size_t start, size_t middle, size_t end)
{
	size_t leftIndex = 0, rightIndex = 0;
	std::vector<int> leftArray(middle - start + 1);
	std::vector<int> rightArray(end - middle);
	size_t currentIndex = start;

	for (size_t i = 0; i < leftArray.size(); ++i)
		leftArray[i] = arr[start + i];
	for (size_t i = 0; i < rightArray.size(); ++i)
		rightArray[i] = arr[middle + 1 + i];

	while (leftIndex < leftArray.size() && rightIndex < rightArray.size()) {
		if (leftArray[leftIndex] <= rightArray[rightIndex]) {
			arr[currentIndex] = leftArray[leftIndex];
			leftIndex++;
		} else {
			arr[currentIndex] = rightArray[rightIndex];
			rightIndex++;
		}
		currentIndex++;
	}
	while (leftIndex < leftArray.size())
		arr[currentIndex++] = leftArray[leftIndex++];
	while (rightIndex < rightArray.size())
		arr[currentIndex++] = rightArray[rightIndex++];
}

void merge_sort(std::vector<int> &arr, size_t start, size_t end) {
	if (start < end)
	{
		size_t middle = (start + end) / 2;

		merge_sort(arr, start, middle);
		merge_sort(arr, middle + 1, end);
		merge(arr, start, middle, end);
	}
}

// void merge_insert(std::vector<int> &vec, int p, int r) {
// 	if (r - p > THRESHOLD)
// 	{
// 		int q = (p + r) / 2;
// 		merge_insert(vec, p, q);
// 		merge_insert(vec, q + 1, r);
// 		merge_sort(vec, p, q, r);
// 	}
// 	else
// 		insertion_sort(vec, p, r);
// }

int main ()
{
	srand(time(0));
	std::vector<int>	vec, tmp;

	for(int i = 0; i < 20; i++)
		vec.push_back(rand() % 100);
	insertion_sort(vec);
	std::vector<int>::iterator	it = vec.begin();
	while (it != vec.end())
		std::cout << *(it++) << " ";
	std::cout << std::endl;
	// try
	// {
	// 	PmergeMe	test(ac, av);
	// }
	// catch(const PmergeMe::WrongInputException& wie)
	// {
	// 	std::cerr << wie.what() << std::endl;
	// }
	// int			i = 0;

	// if (!check_args(av))
	// 	return (EXIT_FAILURE);
	// while (av[++i])
	// 	sort.addNumber(atoi(av[i]));
	// sort.display(DEQUE);
	// return (0);
}

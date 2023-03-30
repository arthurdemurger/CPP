/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 15:10:31 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/30 12:46:32 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP

# define UTILS_HPP

#include "PmergeMe.hpp"

/*
** ------------------------------- DEFINE CONSTANTS --------------------------------
*/
# define DEQUE 0
# define VECTOR 1
# define THRESHOLD 5



# define ICI std::cout << "ici\n";


/*
** ------------------------------- UTILS FUNCTIONS --------------------------------
*/
bool	put_error(std::string err);
void	vector_merge_sort(std::vector<int> &vector, size_t start, size_t end);
void	deque_merge_sort(std::deque<int> &deque, size_t start, size_t end);
void	vector_insertion_sort(std::vector<int> &vector, int start, int end);
void	deque_insertion_sort(std::deque<int> &deque, int start, int end);


#endif

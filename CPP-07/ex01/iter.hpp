/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 13:00:32 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/22 18:45:23 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP

#define ITER_HPP

#include <iostream>

template <typename T>
void	iter(T *array, int length, void (* f)(T &ref))
{
	for (int i = 0; i < length; i++)
		f(array[i]);
}

template <typename T>
void	display(T &ref)
{
	std::cout << ref << " ";
}

template <typename T>
void	increment(T &ref)
{
	ref++;
}

#endif
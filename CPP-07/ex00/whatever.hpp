/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 12:42:48 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/22 13:44:26 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP

# define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T &a, T &b)
{
	T swp;

	swp = a;
	a = b;
	b = swp;
}

template <typename T>
T &min(const T &a, const T &b)
{
	return (const_cast<T &> (a < b ? a : b));
}

template <typename T>
T &max(const T &a, const T &b)
{
	return (const_cast<T &> (a > b ? a : b));
}

#endif
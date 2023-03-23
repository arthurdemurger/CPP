/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 11:15:34 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/23 15:07:58 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP

# define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <iterator>
#include <list>
#include <array>

template <typename T>
typename T::iterator	easyfind(T stack, int nb)
{
	typename T::iterator	it;

	it = std::find(stack.begin(), stack.end(), nb);
	if (it == stack.end())
		throw std::exception();
	return (it);
}

#endif
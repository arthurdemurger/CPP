/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 11:15:34 by ademurge          #+#    #+#             */
/*   Updated: 2023/04/05 09:27:13 by ademurge         ###   ########.fr       */
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

	if ((it = std::find(stack.begin(), stack.end(), nb)) == stack.end())
		throw std::exception();
	return (it);
}

#endif
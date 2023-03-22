/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 13:00:35 by ademurge          #+#    #+#             */
/*   Updated: 2023/03/22 14:03:49 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main (void)
{
	char	string[3] = {'a', 'b', 'c'};
	int		array[5] = {1, 2, 3, 4, 5};

	iter(string, 3, display(string));
	iter(array, 5, display(array));
	return (0);
}
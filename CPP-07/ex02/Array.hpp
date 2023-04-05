/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademurge <ademurge@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 10:00:43 by ademurge          #+#    #+#             */
/*   Updated: 2023/04/05 10:24:21 by ademurge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP

#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
	public:
		Array() : _array(NULL), _size(0) { }

		Array(int n) : _size(n)
		{
			this->_array = new T[n];
		}

		Array(const Array &copy) : _size(copy._size)
		{
			this->_array = new T[copy._size];
			for (int i = 0; i < copy._size; i++)
				this->_array[i] = copy._array[i];
		}

		Array &operator=(const Array &copy)
		{
			if (this != &copy)
			{
				delete [] _array;
				this->_size = copy._size;
				this->_array = new T[this->_size];
				for (int i = 0; i < copy._size; i++)
					this->_array[i] = copy._array[i];
			}
			return (*this);
		}

		~Array()
		{
			if (this->_array)
				delete [] this->_array;
		}

		T	&operator[](int index)
		{
			if (index < 0 || index > this->_size - 1)
				throw std::out_of_range("error: index out of range.");
			return (this->_array[index]);
		}

		int	size(void) { return (this->_size); }

		private:
			T				*_array;
			int				_size;
};



#endif
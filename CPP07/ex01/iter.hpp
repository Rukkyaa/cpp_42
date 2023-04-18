/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 19:59:17 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/04/18 20:11:00 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>

using	std::cout;
using	std::endl;
using	std::string;
using	std::cin;

template<typename T>
void	iter(T *array, size_t size, void(*f)(const T &elem)) {
	for (size_t i = 0; i < size; ++i) {
		f(array[i]);
	}
}

template<typename T>
void	print(const T &elem) {
	std::cout << elem << std::endl;
}
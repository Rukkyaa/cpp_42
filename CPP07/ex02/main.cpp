/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 20:14:08 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/04/18 22:20:06 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main( void ) {
	Array<int>	arr(10);

	for (size_t i = 0; i < arr.size(); ++i)
		arr[i] = i;
	Array<int>	arr2(arr);

	arr[0] = 42;
	arr2[1] = 24;
	arr2.printArray();
	arr.printArray();

	return (EXIT_SUCCESS);
}
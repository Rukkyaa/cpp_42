/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 19:59:31 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/04/18 20:11:17 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main( void ) {
	cout << "\033[3;36mGenerating an array of 5 ints {82, 42, 69, 13, 37}..." << endl;
	int	array[5] = {82, 42, 69, 13, 37};
	cout << "\033[3;33mIterating through the array and printing each element...\033[0m" << endl;
	iter(array, 5, &print);
	cin.get();
	cout << "\033[3;36mGenerating an array of 6 strings {\"Hello\", \"World\", \"!\", \"I\", \"am\", \"Axel\"}..." << endl;
	string	array2[6] = {"Hello", "World", "!", "I", "am", "Axel"};
	cout << "\033[3;33mIterating through the array and printing each element...\033[0m" << endl;
	iter(array2, 6, &print);
	return (EXIT_SUCCESS);
}
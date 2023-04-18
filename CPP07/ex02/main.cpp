/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 20:14:08 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/04/18 22:51:24 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

void    arrayHeader(void) {
        cout << "\033[2J\033[1;1H";
        cout << BOLD_WHITE"╔═══════════════════════════════════════════════════╗" << endl;
    cout << BOLD_WHITE"╠═══════════════════════════════════════════════════╣" << endl;
    cout << BOLD_WHITE"║               SOME TESTS FOR ARRAYS               ║" << endl;
    cout << BOLD_WHITE"╠═══════════════════════════════════════════════════╣" << endl;
    cout << BOLD_WHITE"╚═══════════════════════════════════════════════════╝" << endl << endl;
}

void	arrayTest( void ) {
	arrayHeader();
	cout << BOLD_MAGENTA"Testing Array<int>:" << RESET << endl;
	cout << ITALIC_YELLOW"Creating an array of 10 integers..." << RESET << endl;
	Array<int>	arr(10);
	cout << ITALIC_YELLOW"Randomly filling the array..." << RESET << endl;
	arr.randomFill();
	cout << ITALIC_YELLOW"Printing the array:" << RESET << endl;
	arr.printArray();
	cout << BOLD_ITALIC_GREEN << "Press ENTER to continue..." << RESET << endl;
	cin.get();
}

int	main( void ) {
	srand(time(NULL));
	// arrayTest();
	Array<int>	arr(10);
	cout << arr[5] << endl;

	return (EXIT_SUCCESS);
}
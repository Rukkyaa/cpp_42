/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 11:42:11 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/04/16 12:23:03 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

void	printChar( int c ) {
	cout << "Char: ";

	if (c < NULL_CHAR || c > DEL_CHAR)
		cout << "Impossible";
	else if (c < SPACE_CHAR || c >= DEL_CHAR || (c >= ZERO_CHAR && c <= NINE_CHAR))
		cout << "Non displayable";
	else
		cout << char(c);
		
	cout << endl;
}

// void	printInt( int nb ) {
// 	cout << "Int: ";

// 	if ()
// }
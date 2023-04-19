/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:29:40 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/04/19 14:37:17 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void	ft_wait( float sec) {
	clock_t endwait;
	endwait = clock() + sec * CLOCKS_PER_SEC;
	while (clock() < endwait) {}
}

void	hideCursor( void ) {
	cout << "\033[?25l";
}

void	showCursor( void ) {
	cout << "\033[?25h";
}

void	my_assert( bool res, string test_name) {
	cout << "\t" << std::setw(24) << std::left << test_name << ": " << std::right << std::flush;
	ft_wait(0.2);
	if (res)
		cout << GREEN"OK" << RESET << endl;
	else
		cout << RED"KO" << RESET << endl;
	ft_wait(0.2);
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 10:45:02 by axlamber          #+#    #+#             */
/*   Updated: 2023/03/13 15:01:57 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

void	diapo_one( void ) {
	Fixed	i;

	std::cout << "\033[2J\033[1;1H";
	std::cout << BOLD_WHITE"╔═══════════════════════════════════════════════════╗" << std::endl;
	std::cout << BOLD_WHITE"╠═══════════════════════════════════════════════════╣" << std::endl;
	std::cout << BOLD_WHITE"║             POST / PRE INCREMENTATION             ║" << std::endl;
	std::cout << BOLD_WHITE"╠═══════════════════════════════════════════════════╣" << std::endl;
	std::cout << BOLD_WHITE"╚═══════════════════════════════════════════════════╝" << std::endl << std::endl;
	std::cout << YELLOW"Start value of i: " RESET << std::endl;
	std::cout << BOLD_CYAN"i: " CYAN << i << std::endl;
	std::cout << YELLOW"\033[3mDoing i++ (It will not change, because it is incremented after the print): " RESET << std::endl;
	std::cout << BOLD_CYAN"i: " CYAN << i++ << std::endl;
	std::cout << YELLOW"But if we look afterwards, the value of i has changed: " << std::endl;
	std::cout << YELLOW"(i != 1 because we increment i by the value shifted by 8 bits, and not by 1 unit)" << std::endl;
	std::cout << BOLD_CYAN"i: " CYAN << i << std::endl;
	std::cout << YELLOW"\033[3mDoing ++i (It will change, because it is incremented before the print): " RESET << std::endl;
	std::cout << BOLD_CYAN"i: " CYAN << ++i << std::endl;
	std::cout << YELLOW"Since this is a pre-increment, we can do ++i, but also ++++i" RESET << std::endl;
	std::cout << YELLOW"\033[3mDoing ++++i: " RESET << std::endl;
	std::cout << BOLD_CYAN"i: " CYAN << ++++i << std::endl << std::endl;

	std::cout << BOLD_GREEN"Press <ENTER> to continue...";
	std::cin.get();
}

void	diapo_two( void ) {
	Fixed	i(0.015625f);
	
	std::cout << "\033[2J\033[1;1H";
	std::cout << BOLD_WHITE"╔═══════════════════════════════════════════════════╗" << std::endl;
	std::cout << BOLD_WHITE"╠═══════════════════════════════════════════════════╣" << std::endl;
	std::cout << BOLD_WHITE"║             POST / PRE DECREMENTATION             ║" << std::endl;
	std::cout << BOLD_WHITE"╠═══════════════════════════════════════════════════╣" << std::endl;
	std::cout << BOLD_WHITE"╚═══════════════════════════════════════════════════╝" << std::endl << std::endl;
	std::cout << YELLOW"Start value of i: " RESET << std::endl;
	std::cout << BOLD_MAGENTA"i: " MAGENTA << i << std::endl;
	std::cout << YELLOW"\033[3mDoing i-- (It will not change, because it is incremented after the print): " RESET << std::endl;
	std::cout << BOLD_MAGENTA"i: " MAGENTA << i-- << std::endl;
	std::cout << YELLOW"But if we look afterwards, the value of i has changed: " << std::endl;
	std::cout << YELLOW"(i != 1 because we increment i by the value shifted by 8 bits, and not by 1 unit)" << std::endl;
	std::cout << BOLD_MAGENTA"i: " MAGENTA << i << std::endl;
	std::cout << YELLOW"\033[3mDoing --i (It will change, because it is incremented before the print): " RESET << std::endl;
	std::cout << BOLD_MAGENTA"i: " MAGENTA << --i << std::endl;
	std::cout << YELLOW"Since this is a pre-increment, we can do --i, but also ----i" RESET << std::endl;
	std::cout << YELLOW"\033[3mDoing ----i: " RESET << std::endl;
	std::cout << BOLD_MAGENTA"i: " MAGENTA << ----i << std::endl << std::endl;

	std::cout << BOLD_GREEN"Press <ENTER> to continue...";
	std::cin.get();
}

void	diapo_three( void ) {
	Fixed		a(10.28f);
	Fixed const b(15);
	
	std::cout << "\033[2J\033[1;1H";
	std::cout << BOLD_WHITE"╔═══════════════════════════════════════════════════╗" << std::endl;
	std::cout << BOLD_WHITE"╠═══════════════════════════════════════════════════╣" << std::endl;
	std::cout << BOLD_WHITE"║                 / * + - OPERATORS                 ║" << std::endl;
	std::cout << BOLD_WHITE"╠═══════════════════════════════════════════════════╣" << std::endl;
	std::cout << BOLD_WHITE"╚═══════════════════════════════════════════════════╝" << std::endl << std::endl;
	std::cout << YELLOW"Start value of a & b: " RESET << std::endl;
	std::cout << BOLD_BLUE"a: " BLUE << a << std::endl << BOLD_BLUE"b: " BLUE << b << std::endl;
	std::cout << YELLOW"\033[3mTesting the addition: " RESET << std::endl;
	std::cout << BOLD_BLUE"a + b: " BLUE << a + b << std::endl;
	std::cout << YELLOW"\033[3mTesting the soustraction: " RESET << std::endl;
	std::cout << BOLD_BLUE"a - b: " BLUE << a - b << std::endl;
	std::cout << BOLD_BLUE"b - a: " BLUE << b - a << std::endl;
	std::cout << YELLOW"\033[3mTesting the multiplication: " RESET << std::endl;
	std::cout << BOLD_BLUE"a * b: " BLUE << a * b << std::endl;
	std::cout << BOLD_BLUE"b * a: " BLUE << a * b << std::endl;
	std::cout << YELLOW"\033[3mTesting the division: " RESET << std::endl;
	std::cout << BOLD_BLUE"a / b: " BLUE << a / b << std::endl;
	std::cout << BOLD_BLUE"b / a: " BLUE << b / a << std::endl << std::endl;

	std::cout << BOLD_GREEN"Press <ENTER> to continue...";
	std::cin.get();
}

void	diapo_four( void ) {	
	std::cout << "\033[2J\033[1;1H";
	std::cout << BOLD_WHITE"╔═══════════════════════════════════════════════════╗" << std::endl;
	std::cout << BOLD_WHITE"╠═══════════════════════════════════════════════════╣" << std::endl;
	std::cout << BOLD_WHITE"║                COMPARISON OPERATORS               ║" << std::endl;
	std::cout << BOLD_WHITE"╠═══════════════════════════════════════════════════╣" << std::endl;
	std::cout << BOLD_WHITE"╚═══════════════════════════════════════════════════╝" << std::endl << std::endl;
	std::cout << YELLOW"Testing the superior operator: " RESET << std::endl;
	std::cout << BOLD_RED << Fixed(1.219f) << " > " << Fixed(10.92f) << ": " RED << (Fixed(1.219f) > Fixed(10.92f)) << std::endl;
	std::cout << BOLD_RED << Fixed(5) << " > " << Fixed(5) << ": " RED << (Fixed(5) > Fixed(5)) << std::endl;
	std::cout << BOLD_RED << Fixed(9) << " > " << Fixed(8.5f) << ": " RED << (Fixed(9) > Fixed(8.5f)) << std::endl;
	std::cout << BOLD_RED << Fixed(0) << " > " << Fixed(19.29f) << ": " RED << (Fixed(0) > Fixed(19.29f)) << std::endl;
	std::cout << YELLOW"Testing the superior or equal operator: " RESET << std::endl;
	std::cout << BOLD_RED << Fixed(1.219f) << " >= " << Fixed(10.92f) << ": " RED << (Fixed(1.219f) >= Fixed(10.92f)) << std::endl;
	std::cout << BOLD_RED << Fixed(5) << " >= " << Fixed(5) << ": " RED << (Fixed(5) >= Fixed(5)) << std::endl;
	std::cout << BOLD_RED << Fixed(9) << " >= " << Fixed(8.5f) << ": " RED << (Fixed(9) >= Fixed(8.5f)) << std::endl;
	std::cout << BOLD_RED << Fixed(0) << " >= " << Fixed(19.29f) << ": " RED << (Fixed(0) >= Fixed(19.29f)) << std::endl;
	std::cout << YELLOW"Testing the inferior operator: " RESET << std::endl;
	std::cout << BOLD_RED << Fixed(1.219f) << " < " << Fixed(10.92f) << ": " RED << (Fixed(1.219f) < Fixed(10.92f)) << std::endl;
	std::cout << BOLD_RED << Fixed(5) << " < " << Fixed(5) << ": " RED << (Fixed(5) < Fixed(5)) << std::endl;
	std::cout << BOLD_RED << Fixed(9) << " < " << Fixed(8.5f) << ": " RED << (Fixed(9) < Fixed(8.5f)) << std::endl;
	std::cout << BOLD_RED << Fixed(0) << " < " << Fixed(19.29f) << ": " RED << (Fixed(0) < Fixed(19.29f)) << std::endl;
	std::cout << YELLOW"Testing the inferior or equal operator: " RESET << std::endl;
	std::cout << BOLD_RED << Fixed(1.219f) << " <= " << Fixed(10.92f) << ": " RED << (Fixed(1.219f) <= Fixed(10.92f)) << std::endl;
	std::cout << BOLD_RED << Fixed(5) << " <= " << Fixed(5) << ": " RED << (Fixed(5) <= Fixed(5)) << std::endl;
	std::cout << BOLD_RED << Fixed(9) << " <= " << Fixed(8.5f) << ": " RED << (Fixed(9) <= Fixed(8.5f)) << std::endl;
	std::cout << BOLD_RED << Fixed(0) << " <= " << Fixed(19.29f) << ": " RED << (Fixed(0) <= Fixed(19.29f)) << std::endl;
	std::cout << YELLOW"Testing the equal operator: " RESET << std::endl;
	std::cout << BOLD_RED << Fixed(1.219f) << " == " << Fixed(10.92f) << ": " RED << (Fixed(1.219f) == Fixed(10.92f)) << std::endl;
	std::cout << BOLD_RED << Fixed(5) << " == " << Fixed(5) << ": " RED << (Fixed(5) == Fixed(5)) << std::endl;
	std::cout << BOLD_RED << Fixed(9) << " == " << Fixed(8.5f) << ": " RED << (Fixed(9) == Fixed(8.5f)) << std::endl;
	std::cout << BOLD_RED << Fixed(0) << " == " << Fixed(19.29f) << ": " RED << (Fixed(0) == Fixed(19.29f)) << std::endl;
	std::cout << YELLOW"Testing the inferior or equal operator: " RESET << std::endl;
	std::cout << BOLD_RED << Fixed(1.219f) << " != " << Fixed(10.92f) << ": " RED << (Fixed(1.219f) != Fixed(10.92f)) << std::endl;
	std::cout << BOLD_RED << Fixed(5) << " != " << Fixed(5) << ": " RED << (Fixed(5) != Fixed(5)) << std::endl;
	std::cout << BOLD_RED << Fixed(9) << " != " << Fixed(8.5f) << ": " RED << (Fixed(9) != Fixed(8.5f)) << std::endl;
	std::cout << BOLD_RED << Fixed(0) << " != " << Fixed(19.29f) << ": " RED << (Fixed(0) != Fixed(19.29f)) << std::endl << std::endl;
	std::cout << BOLD_GREEN"Press <ENTER> to continue...";
	std::cin.get();
}

void	diapo_five( void ) {
	const Fixed	a(81.320f);
	const Fixed	b(-29);
	
	std::cout << "\033[2J\033[1;1H";
	std::cout << BOLD_WHITE"╔═══════════════════════════════════════════════════╗" << std::endl;
	std::cout << BOLD_WHITE"╠═══════════════════════════════════════════════════╣" << std::endl;
	std::cout << BOLD_WHITE"║                MAX AND MIN FUNCTIONS              ║" << std::endl;
	std::cout << BOLD_WHITE"╠═══════════════════════════════════════════════════╣" << std::endl;
	std::cout << BOLD_WHITE"╚═══════════════════════════════════════════════════╝" << std::endl << std::endl;

	std::cout << YELLOW"Testing the max function: " RESET << std::endl;
	std::cout << BOLD_CYAN"max(" << Fixed(5.03f) << ", " << Fixed(283) << "): " CYAN << Fixed::max(Fixed(5.03f), Fixed(283)) << std::endl;
	std::cout << BOLD_CYAN"max(" << Fixed(10.0f) << ", " << Fixed(10) << "): " CYAN << Fixed::max(Fixed(10.0f), Fixed(10)) << std::endl;
	std::cout << BOLD_CYAN"max(" << Fixed(-2.21f) << ", " << Fixed(21.32f) << "): " CYAN << Fixed::max(Fixed(-2.21f), Fixed(21.32f)) << std::endl;
	std::cout << YELLOW"Testing the max const function: " RESET << std::endl;
	std::cout << BOLD_CYAN"max(" << a << ", " << b << "): " CYAN << Fixed::max(a, b) << std::endl;
	std::cout << BOLD_CYAN"max(" << a << ", " << Fixed(10) << "): " CYAN << Fixed::max(a, Fixed(10)) << std::endl;
	std::cout << BOLD_CYAN"max(" << Fixed(-2.21f) << ", " << b << "): " CYAN << Fixed::max(Fixed(-2.21f), b) << std::endl;
	std::cout << YELLOW"Testing the min function: " RESET << std::endl;
	std::cout << BOLD_CYAN"min(" << Fixed(5.03f) << ", " << Fixed(283) << "): " CYAN << Fixed::min(Fixed(5.03f), Fixed(283)) << std::endl;
	std::cout << BOLD_CYAN"min(" << Fixed(10.0f) << ", " << Fixed(10) << "): " CYAN << Fixed::min(Fixed(10.0f), Fixed(10)) << std::endl;
	std::cout << BOLD_CYAN"min(" << Fixed(-2.21f) << ", " << Fixed(21.32f) << "): " CYAN << Fixed::min(Fixed(-2.21f), Fixed(21.32f)) << std::endl;
	std::cout << YELLOW"Testing the min const function: " RESET << std::endl;
	std::cout << BOLD_CYAN"min(" << a << ", " << b << "): " CYAN << Fixed::min(a, Fixed(283)) << std::endl;
	std::cout << BOLD_CYAN"min(" << a << ", " << Fixed(10) << "): " CYAN << Fixed::min(a, Fixed(10)) << std::endl;
	std::cout << BOLD_CYAN"min(" << Fixed(-2.21f) << ", " << b << "): " CYAN << Fixed::min(Fixed(-2.21f), b) << std::endl << std::endl;

	std::cout << BOLD_GREEN"Press <ENTER> to continue...";
	std::cin.get();
}

int main( void ) {
	diapo_one();
	diapo_two();
	diapo_three();
	diapo_four();
	diapo_five();
	return 0;
}

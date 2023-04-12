/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 10:45:02 by axlamber          #+#    #+#             */
/*   Updated: 2023/04/12 10:23:46 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void ) {
	std::cout << BOLD_CYAN"A(4; 4), B(3; -2), C(-2; 3)." CYAN " is (4; 1) in the triangle ? :";
	std::cout << (bsp(Point(4, 4), Point(3, -2), Point(-2, 3), Point(4, 1)) ? BOLD_GREEN" Yes !" : BOLD_RED" No !") << std::endl;
	std::cout << BOLD_CYAN"A(4; 4), B(3; -2), C(-2; 3)." CYAN " is (2; 2) in the triangle ? :";
	std::cout << (bsp(Point(4, 4), Point(3, -2), Point(-2, 3), Point(2, 2)) ? BOLD_GREEN" Yes !" : BOLD_RED" No !") << std::endl;
	std::cout << BOLD_CYAN"A(4; 4), B(3; -2), C(-2; 3)." CYAN " is (-1; 2.5) in the triangle ? :";
	std::cout << (bsp(Point(4, 4), Point(3, -2), Point(-2, 3), Point(-1, 2.5)) ? BOLD_GREEN" Yes !" : BOLD_RED" No !") << std::endl;
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 19:30:08 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/04/18 19:53:56 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main( void ) {
	std::cout << "\033[3;36mGenerating 2 ints (a = 2, b = 3)..." << std::endl;
	int a = 2;
	int b = 3;
	std::cout << "\033[3;33mSwapping a and b..." << std::endl;
	::swap( a, b );
	std::cout << "\033[0;32ma = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::cin.get();

	std::cout << "\033[3;36mGenerating 2 floats (c = 2.1, d = 3.4)..." << std::endl;
	float c = 2.1f;
	float d = 3.4f;
	std::cout << "\033[3;33mSwapping c and d..." << std::endl;
	::swap(c, d);
	std::cout << "\033[0;32mc = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	std::cin.get();

	std::cout << "\033[3;36mGenerating 2 strings (e = chaine1, f = chaine2)..." << std::endl;
	std::string e = "chaine1";
	std::string f = "chaine2";
	std::cout << "\033[3;33mSwapping c and d..." << std::endl;
	::swap(e, f);
	std::cout << "\033[0;32me = " << e << ", f = " << f << std::endl;
	std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl;
	std::cout << "max( e, f ) = " << ::max( e, f ) << std::endl;
	return 0;
}
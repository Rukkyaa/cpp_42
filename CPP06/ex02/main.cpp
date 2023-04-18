/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 18:35:36 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/04/18 19:00:59 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>

class Base { public: virtual ~Base( void ) { /*Code*/ } };
class A : public Base {};
class B : public Base {};
class C : public Base {};

Base	*generate( void ) {
	switch ( std::rand() % 3 ) {
		case 1:
			std::cout << "Generating object A" << std::endl;
			return (new A);
		case 2:
			std::cout << "Generating object B" << std::endl;
			return (new B);
		default:
			std::cout << "Generating object C" << std::endl;
			return (new C);
	}
}

void	identify( Base *base ) {
	if ( dynamic_cast<A*>(base) )
		std::cout << "The type of the object is A !" << std::endl;
	else if ( dynamic_cast<B*>(base) )
		std::cout << "The type of the object is B !" << std::endl;
	else
		std::cout << "The type of the object is C !" << std::endl;
}

void	identify( Base &base ) {
	Base	test;

	(void) test;
	try {
		test = dynamic_cast<A&>(base);
		std::cout << "The type of the object is A !" << std::endl;
	} catch ( const std::exception &e ) {
		try {
			test = dynamic_cast<B&>(base);
			std::cout << "The type of the object is B !" << std::endl;
		} catch ( const std::exception &e ) {
			try {
				test = dynamic_cast<C&>(base);
				std::cout << "The type of the object is C !" << std::endl;
			} catch ( const std::exception &e ) {}
		}
	}
}

int	main( void ) {
	std::srand(time(NULL));
	Base	*first = generate();
	Base	*two = generate();
	Base	*three = generate();

	identify(first);
	identify(*first);
	identify(two);
	identify(three);

	delete first;
	delete two;
	delete three;
}
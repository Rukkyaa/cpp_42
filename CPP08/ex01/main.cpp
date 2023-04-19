/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 00:34:58 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/04/19 13:06:51 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void	my_assert( bool res, string test_name);
void	zeroSizeTest( void );
void	oneSizeTest( void );
void	shortestSpanTest( void );

int main()
{
	srand(time(NULL));
	
	zeroSizeTest();
	oneSizeTest();
	shortestSpanTest();
	return (0);
}

void	my_assert( bool res, string test_name) {
	if (res)
		cout << "\t" << std::setw(24) << std::left << test_name << ": " << GREEN"OK" << RESET << std::right << endl;
	else
		cout << "\t" << std::setw(24) << std::left << test_name << ": " << RED"KO" << RESET << std::right << endl;
}

vector<int>	fillVector( unsigned int size) {
	vector<int>	tmp;

	for (unsigned int i = 0; i < size; ++i)
		tmp.push_back(rand() % 1000);
	return (tmp);
}

int	getShortestSpan( vector<int> &v) {
	int	min = abs(v[0] - v[1]);

	sort(v.begin(), v.end());
	for (size_t i = 0; i < v.size() - 1; ++i)
		if (abs(v[i] - v[i + 1]) < min)
			min = abs(v[i] - v[i + 1]);
	return (min);
}

void	zeroSizeTest( void ) {
	cout << BOLD_WHITE"Zero size test:" RESET << endl;
	Span sp(0);

	my_assert(sp.getSize() == 0, "getSize");
	my_assert(sp.getContentSize() == 0, "getContentSize");

	try {
		sp.addNumber(42);
		my_assert(false, "addNumber");
	} catch (exception &e) {
		my_assert(true, "addNumber");
	}

	try {
		sp.shortestSpan();
		my_assert(false, "shortestSpan");
	} catch (exception &e) {
		my_assert(true, "shortestSpan");
	}

	try {
		sp.longestSpan();
		my_assert(false, "longestSpan");
	} catch (exception &e) {
		my_assert(true, "longestSpan");
	}
}

void	oneSizeTest( void ) {
	cout << BOLD_WHITE"One size test:" RESET << endl;
	Span sp(1);

	my_assert(sp.getSize() == 1, "getSize");
	my_assert(sp.getContentSize() == 0, "getContentSize");

	try {
		sp.addNumber(42);
		my_assert(true, "addNumber");
	} catch (exception &e) {
		my_assert(false, "addNumber");
	}

	my_assert(sp.getContentSize() == 1, "getContentSizeAfterAdd");

	try {
		sp.addNumber(42);
		my_assert(false, "tooMuchValues");
	} catch (exception &e) {
		my_assert(true, "tooMuchValues");
	}

	my_assert(sp.getContentSize() == 1, "getContentSizeAfterFail");


	try {
		sp.shortestSpan();
		my_assert(false, "shortestSpan");
	} catch (exception &e) {
		my_assert(true, "shortestSpan");
	}

	try {
		sp.longestSpan();
		my_assert(false, "longestSpan");
	} catch (exception &e) {
		my_assert(true, "longestSpan");
	}
}

void shortestSpanTest( void ) {
	cout << BOLD_WHITE"Shortest span test:" RESET << endl;

	Span 		sp(5);
	vector<int> numbers = fillVector(5);
	int			shortestVector = getShortestSpan(numbers);
	
	sp.addNumber(numbers.begin(), numbers.end());
	sp.printSpan();
	cout << sp.shortestSpan() << endl;
	cout << shortestVector << endl;
	try {
		int shortest = sp.shortestSpan();
		my_assert(shortest == shortestVector, "shortestSpan");
	} catch (exception &e) {
		my_assert(false, "shortestSpan");
	}

	try {
		Span sp2(2);
		sp2.addNumber(10);
		sp2.shortestSpan();
		my_assert(false, "shortestSpanEmpty");
	} catch (exception &e) {
		my_assert(true, "shortestSpanEmpty");
	}

	try {
		Span sp3(1);
		sp3.addNumber(10);
		sp3.shortestSpan();
		my_assert(false, "shortestSpanSingle");
	} catch (exception &e) {
		my_assert(true, "shortestSpanSingle");
	}
}

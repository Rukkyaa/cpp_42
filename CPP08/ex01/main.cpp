/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 00:34:58 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/04/19 14:11:09 by rukkyaa          ###   ########.fr       */
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

vector<int>	fillNegativeVector( unsigned int size) {
	vector<int>	tmp;

	for (unsigned int i = 0; i < size; ++i)
		tmp.push_back(rand() % 1000 - 500);
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

	try {
		Span empty(2);
		empty.shortestSpan();
		my_assert(false, "shortestSpanEmpty");
	} catch (exception &e) {
		my_assert(true, "shortestSpanEmpty");
	}

	try {
		Span	halfEmpty(2);
		halfEmpty.addNumber(42);
		halfEmpty.shortestSpan();
		my_assert(false, "shortestSpanHalfEmpty");
	} catch (exception &e) {
		my_assert(true, "shortestSpanHalfEmpty");
	}

	try {
		Span single(1);
		single.addNumber(42);
		single.shortestSpan();
		my_assert(false, "shortestSpanSingle");
	} catch (exception &e) {
		my_assert(true, "shortestSpanSingle");
	}

	try {
		Span	same(2);
		same.addNumber(42);
		same.addNumber(42);
		my_assert(same.shortestSpan() == 0, "shortestSpanSame");
	} catch (exception &e) {
		my_assert(true, "shortestSpanSame");
	}

	try {
		Span	negative(500);
		vector<int> numbers = fillNegativeVector(500);
		int			shortestVector = getShortestSpan(numbers);

		negative.addNumber(numbers.begin(), numbers.end());
		my_assert(negative.shortestSpan() == shortestVector, "shortestSpanNegative");
	} catch (exception &e) {
		my_assert(false, "shortestSpanNegative");
	}

	try {
		Span	sorted(100);
		vector<int> numbers = fillVector(100);
		int			shortestVector;

		sort(numbers.begin(), numbers.end());
		sorted.addNumber(numbers.begin(), numbers.end());
		shortestVector = getShortestSpan(numbers);
		my_assert(sorted.shortestSpan() == shortestVector, "shortestSpanSorted");
	} catch (exception &e) {
		my_assert(false, "shortestSpanSorted");
	}

	try {
		Span	basic(5);
		vector<int> numbers = fillVector(5);
		int			shortestVector = getShortestSpan(numbers);

		basic.addNumber(numbers.begin(), numbers.end());
		my_assert(basic.shortestSpan() == shortestVector, "shortestSpanBasic");
	} catch (exception &e) {
		my_assert(false, "shortestSpanBasic");
	}

	try {
		Span	medium(10000);
		vector<int> numbers = fillVector(10000);
		int			shortestVector = getShortestSpan(numbers);

		medium.addNumber(numbers.begin(), numbers.end());
		my_assert(medium.shortestSpan() == shortestVector, "shortestSpanMedium");
	} catch (exception &e) {
		my_assert(false, "shortestSpanMedium");
	}

	try {
		Span	big(1000000);
		vector<int> numbers = fillVector(1000000);
		int			shortestVector = getShortestSpan(numbers);

		big.addNumber(numbers.begin(), numbers.end());
		my_assert(big.shortestSpan() == shortestVector, "shortestSpanBig");
	} catch (exception &e) {
		my_assert(false, "shortestSpanBig");
	}

	try {
		Span	huge(10000000);
		vector<int> numbers = fillVector(10000000);
		int			shortestVector = getShortestSpan(numbers);

		huge.addNumber(numbers.begin(), numbers.end());
		my_assert(huge.shortestSpan() == shortestVector, "shortestSpanHuge");
	} catch (exception &e) {
		my_assert(false, "shortestSpanHuge");
	}
}

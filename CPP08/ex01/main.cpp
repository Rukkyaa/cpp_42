/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 00:34:58 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/04/19 16:29:42 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void	zeroSizeTest( void );
void	oneSizeTest( void );
void	shortestSpanTest( void );
void	longestSpanTest( void );
void	addNumberRangeTest( void );

int main()
{
	srand(time(NULL));

	hideCursor();
	zeroSizeTest();
	oneSizeTest();
	shortestSpanTest();
	longestSpanTest();
	addNumberRangeTest();
	showCursor();
	return (0);
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

void longestSpanTest( void ) {
	cout << BOLD_WHITE"Longest span test:" RESET << endl;

	try {
		Span empty(2);
		empty.longestSpan();
		my_assert(false, "longestSpanEmpty");
	} catch (exception &e) {
		my_assert(true, "longestSpanEmpty");
	}

	try {
		Span	halfEmpty(2);
		halfEmpty.addNumber(42);
		halfEmpty.longestSpan();
		my_assert(false, "longestSpanHalfEmpty");
	} catch (exception &e) {
		my_assert(true, "longestSpanHalfEmpty");
	}

	try {
		Span single(1);
		single.addNumber(42);
		single.longestSpan();
		my_assert(false, "longestSpanSingle");
	} catch (exception &e) {
		my_assert(true, "longestSpanSingle");
	}

	try {
		Span	same(2);
		same.addNumber(42);
		same.addNumber(42);
		my_assert(same.longestSpan() == 0, "longestSpanSame");
	} catch (exception &e) {
		my_assert(true, "longestSpanSame");
	}

	try {
		Span	negative(500);
		vector<int> numbers = fillNegativeVector(500);
		int			longestVector = getLongestSpan(numbers);

		negative.addNumber(numbers.begin(), numbers.end());
		my_assert(negative.longestSpan() == longestVector, "longestSpanNegative");
	} catch (exception &e) {
		my_assert(false, "longestSpanNegative");
	}

	try {
		Span	sorted(100);
		vector<int> numbers = fillVector(100);
		int			longestVector;

		sort(numbers.begin(), numbers.end());
		sorted.addNumber(numbers.begin(), numbers.end());
		longestVector = getLongestSpan(numbers);
		my_assert(sorted.longestSpan() == longestVector, "longestSpanSorted");
	} catch (exception &e) {
		my_assert(false, "longestSpanSorted");
	}

	try {
		Span	basic(5);
		vector<int> numbers = fillVector(5);
		int			longestVector = getLongestSpan(numbers);

		basic.addNumber(numbers.begin(), numbers.end());
		my_assert(basic.longestSpan() == longestVector, "longestSpanBasic");
	} catch (exception &e) {
		my_assert(false, "longestSpanBasic");
	}

	try {
		Span	medium(10000);
		vector<int> numbers = fillVector(10000);
		int			longestVector = getLongestSpan(numbers);

		medium.addNumber(numbers.begin(), numbers.end());
		my_assert(medium.longestSpan() == longestVector, "longestSpanMedium");
	} catch (exception &e) {
		my_assert(false, "longestSpanMedium");
	}

	try {
		Span	big(1000000);
		vector<int> numbers = fillVector(1000000);
		int			longestVector = getLongestSpan(numbers);

		big.addNumber(numbers.begin(), numbers.end());
		my_assert(big.longestSpan() == longestVector, "longestSpanBig");
	} catch (exception &e) {
		my_assert(false, "longestSpanBig");
	}

	try {
		Span	huge(10000000);
		vector<int> numbers = fillVector(10000000);
		int			longestVector = getLongestSpan(numbers);

		huge.addNumber(numbers.begin(), numbers.end());
		my_assert(huge.longestSpan() == longestVector, "longestSpanHuge");
	} catch (exception &e) {
		my_assert(false, "longestSpanHuge");
	}
}

void	addNumberRangeTest( void ) {
	cout << BOLD_WHITE"Add number range test:" RESET << endl;

	try {
		Span		single(1);
		vector<int> numbers = fillVector(2);

		single.addNumber(numbers.begin(), numbers.end());
		my_assert(false, "addNumberTooMany");
	} catch (exception &e) {
		my_assert(true, "addNumberTooMany");
	}

	try {
		Span		single(1);
		vector<int> numbers = fillVector(1);

		single.addNumber(numbers.begin(), numbers.end());
		my_assert(true, "addNumberSingle");
	} catch (exception &e) {
		my_assert(false, "addNumberSingle");
	}

	try {
		Span		single(1);
		vector<int> numbers = fillVector(0);

		single.addNumber(numbers.begin(), numbers.end());
		my_assert(true, "addNumberEmpty");
	} catch (exception &e) {
		my_assert(false, "addNumberEmpty");
	}

	try {
		Span	basic(5);
		vector<int> numbers = fillVector(5);

		basic.addNumber(numbers.begin(), numbers.end());
		my_assert(true, "addNumberBasic");
	} catch (exception &e) {
		my_assert(false, "addNumberBasic");
	}

	try {
		Span	medium(10000);
		vector<int> numbers = fillVector(10000);

		medium.addNumber(numbers.begin(), numbers.end());
		my_assert(true, "addNumberMedium");
	} catch (exception &e) {
		my_assert(false, "addNumberMedium");
	}

	try {
		Span	big(1000000);
		vector<int> numbers = fillVector(1000000);

		big.addNumber(numbers.begin(), numbers.end());
		my_assert(true, "addNumberBig");
		try {
			big.addNumber(numbers.begin(), numbers.end());
			my_assert(false, "addNumberBigTooMany");
		} catch (exception &e) {
			my_assert(true, "addNumberBigTooMany");
		}
	} catch (exception &e) {
		my_assert(false, "addNumberBig");
	}
}
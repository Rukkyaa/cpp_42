/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 00:12:09 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/04/19 13:13:21 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( unsigned int size ) : _size(size) {
	_content.reserve(size);
}

void	Span::addNumber( int nb ) {
	if (_content.size() >= _size)
		throw(Span::TooMuchValuesException());
	_content.push_back(nb);
}

void	Span::addNumber( vector<int>::iterator begin, vector<int>::iterator end) {
	if (distance(begin, end) + _content.size() > _size)
		throw(Span::TooMuchValuesException());
	_content.insert(_content.end(), begin, end);
}

int	Span::longestSpan( void ) const {
	if (_content.size() < 2)
		throw(Span::TooLittleValuesException());

	vector<int>	tmp = _content;

	sort(tmp.begin(), tmp.end());
	return (abs(tmp[tmp.size() - 1] - tmp[0]));
}

int	Span::shortestSpan( void ) const {
	if (_content.size() < 2)
		throw(Span::TooLittleValuesException());

	vector<int>	tmp = _content;

	sort(tmp.begin(), tmp.end());
	int			min = abs(tmp[0] - tmp[1]);
	for (size_t i = 0; i < tmp.size() - 1; ++i)
		if (abs(tmp[i] - tmp[i + 1]) < min)
			min = abs(tmp[i] - tmp[i + 1]);
	return (min);
}

void	Span::printSpan( void ) const {
	for (size_t i = 0; i < _content.size(); ++i)
		cout << _content[i] << " ";
	cout << endl;
}

unsigned int	Span::getSize( void ) const {
	return (_size);
}

unsigned int	Span::getContentSize( void ) const {
	return (_content.size());
}

const char	*Span::TooMuchValuesException::what( void ) const throw() {
	return ("\033[1;31m[ERROR]\033[0;31m Too much values in the Span\033[0m");
}

const char	*Span::TooLittleValuesException::what( void ) const throw() {
	return ("\033[1;31m[ERROR]\033[0;31m Too little values in the Span\033[0m");
}

Span::Span( void ) {
	// 
}

Span::Span( const Span &rhs ) {
	(void)rhs;
}

Span	&Span::operator=( const Span &rhs ) {
	(void)rhs;
	return (*this);
}

Span::~Span( void ) {
	// 
}

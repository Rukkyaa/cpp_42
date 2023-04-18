/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 00:12:09 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/04/19 00:42:57 by rukkyaa          ###   ########.fr       */
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 10:43:07 by axlamber          #+#    #+#             */
/*   Updated: 2023/03/11 17:38:11 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed &rhs ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = rhs;
}

Fixed	&Fixed::operator=( const Fixed &rhs ) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		_value = rhs.getRawBits();
	return (*this);
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (_value);
}

void	Fixed::setRawBits( const int raw ) {
	_value = raw;
}

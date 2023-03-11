/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 10:43:07 by axlamber          #+#    #+#             */
/*   Updated: 2023/03/11 17:34:15 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int n ) : _value(n << _fractionalBits) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float n ) : _value(roundf(n * (1 << _fractionalBits))) {
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed( const Fixed &rhs) {
	std::cout << "Copy constructor called" << std::endl;
	*this = rhs;
}

Fixed	&Fixed::operator=( const Fixed &rhs) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		_value = rhs.getRawBits();
	return (*this);
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
}

void	Fixed::setRawBits( const int raw ) {
	_value = raw;
}

int		Fixed::getRawBits( void ) const {
	return (_value);
}

float	Fixed::toFloat( void ) const {
	return (static_cast<float>( this->getRawBits() ) / ( 1 << _fractionalBits ));
}

int		Fixed::toInt( void ) const {
	return (_value >> _fractionalBits);
}

std::ostream	&operator<<( std::ostream &stream, Fixed const &rhs) {
	stream << rhs.toFloat();
	return (stream);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 10:43:07 by axlamber          #+#    #+#             */
/*   Updated: 2023/03/13 13:18:07 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _value(0) {
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int n ) : _value(n << _fractionalBits) {
	// std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float n ) : _value(roundf(n * (1 << _fractionalBits))) {
	// std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed( const Fixed &rhs) {
	// std::cout << "Copy constructor called" << std::endl;
	*this = rhs;
}

Fixed	&Fixed::operator=( const Fixed &rhs) {
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		_value = rhs.getRawBits();
	return (*this);
}

Fixed::~Fixed( void ) {
	// std::cout << "Destructor called" << std::endl;
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

Fixed	&Fixed::operator++( void ) {
	++_value;
	return (*this);
}

Fixed	Fixed::operator++( int ) {
	Fixed	tmp(*this);

	++_value;
	return (tmp);
}

Fixed	&Fixed::operator--( void ) {
	--_value;
	return (*this);
}

Fixed	Fixed::operator--( int ) {
	Fixed	tmp(*this);

	--_value;
	return (tmp);
}

Fixed	Fixed::operator+( const Fixed &rhs ) const {
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed	Fixed::operator-( const Fixed &rhs ) const {
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed	Fixed::operator*( const Fixed &rhs ) const {
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed	Fixed::operator/( const Fixed &rhs ) const {
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

bool	Fixed::operator>( const Fixed &rhs ) const {
	return (_value > rhs.getRawBits());
}

bool	Fixed::operator>=( const Fixed &rhs ) const {
	return (_value >= rhs.getRawBits());
}

bool	Fixed::operator<( const Fixed &rhs ) const {
	return (_value < rhs.getRawBits());
}

bool	Fixed::operator<=( const Fixed &rhs ) const {
	return (_value <= rhs.getRawBits());
}

bool	Fixed::operator==( const Fixed &rhs ) const {
	return (_value == rhs.getRawBits());
}

bool	Fixed::operator!=( const Fixed &rhs ) const {
	return (_value != rhs.getRawBits());
}

Fixed	&Fixed::max( Fixed &lhs, Fixed &rhs) {
	return (lhs > rhs ? lhs : rhs);
}

const Fixed	&Fixed::max( const Fixed &lhs, const Fixed &rhs) {
	return (lhs > rhs ? lhs : rhs);
}

Fixed	&Fixed::min( Fixed &lhs, Fixed &rhs) {
	return (lhs < rhs ? lhs : rhs);
}

const Fixed	&Fixed::min( const Fixed &lhs, const Fixed &rhs) {
	return (lhs < rhs ? lhs : rhs);
}

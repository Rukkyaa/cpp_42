/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 15:11:53 by axlamber          #+#    #+#             */
/*   Updated: 2023/03/13 16:44:25 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ) : _x(Fixed()), _y(Fixed()){
	//
}

Point::Point( const float x, const float y) : _x(Fixed(x)), _y(Fixed(y)) {
	//
}

Point::Point( const Point &rhs) : _x(rhs.getX()), _y(rhs.getY()) {
	*this = rhs;
}

Point	&Point::operator=( const Point &rhs) {
	if (this != &rhs) {
		(Fixed)_x = rhs.getX();
		(Fixed)_y = rhs.getY();
	}
	return (*this);
}

Fixed	Point::getX( void ) const {
	return (_x);
}

Fixed	Point::getY( void ) const {
	return (_y);
}

Point::~Point( void ) {
	//
}

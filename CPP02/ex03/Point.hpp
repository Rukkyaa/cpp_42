/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 15:06:37 by axlamber          #+#    #+#             */
/*   Updated: 2023/03/13 16:38:16 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class	Point {
	private:
		const	Fixed	_x;
		const	Fixed	_y;
	public:
		Point	( void );
		Point	( const float x, const float y);
		Point	( const Point &rhs );
		Point	&operator=( const Point &rhs );
		~Point	( void );

		Fixed	getX( void ) const;
		Fixed	getY( void ) const;
};

bool	bsp( Point const a, Point const b, Point const c, Point const point);

#endif

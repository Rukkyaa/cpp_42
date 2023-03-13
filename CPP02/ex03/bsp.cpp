/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 15:33:56 by axlamber          #+#    #+#             */
/*   Updated: 2023/03/13 16:48:19 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	sign(Point const a, Point const b, Point const c) {
	return ((a.getX() - c.getX()) * (b.getY() - c.getY()) - (b.getX() - c.getX()) * (a.getY() - c.getY()));
}

bool	bsp( Point const a, Point const b, Point const c, Point const point) {
	bool	sign_a = sign(point, a, b) > 0;
	bool	sign_b = sign(point, b, c) > 0;
	bool	sign_c = sign(point, c, a) > 0;
	
	return (sign_a == sign_b && sign_b == sign_c);
}

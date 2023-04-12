/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 15:33:56 by axlamber          #+#    #+#             */
/*   Updated: 2023/04/12 10:22:12 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed	ft_abs(Fixed x) {
    if (x < 0)
        return x * -1;
    return x;
}

static Fixed	area( Point const a, Point const b, Point const c ) {
    return ( ( ( a.getX() * ( b.getY() - c.getY() ) ) +
             ( b.getX() * ( c.getY() - a.getY() ) ) +
             ( c.getX() * ( a.getY() - b.getY() ) ) ) / 2 );
}

bool bsp( Point const a, Point const b, Point const c, Point const point) {
    Fixed	abc = ft_abs(area( a, b, c ));
    Fixed	pab = ft_abs(area( point, a, b ));
    Fixed	pbc = ft_abs(area( point, b, c ));
    Fixed	pca = ft_abs(area( point, c, a ));

	if (pab == 0 || pbc == 0 || pca == 0)
		return (false);
    return  ( abc == pab + pbc + pca );
}
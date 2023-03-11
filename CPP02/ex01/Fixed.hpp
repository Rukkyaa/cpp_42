/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:41:54 by axlamber          #+#    #+#             */
/*   Updated: 2023/03/11 17:36:13 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class	Fixed {
	public:
		Fixed	( void );
		Fixed	( const int );
		Fixed	( const float );
		Fixed	( const Fixed &rhs );
		Fixed	&operator=( const Fixed &rhs );
		~Fixed	();
		void	setRawBits( int const raw );
		int		getRawBits( void ) const;
		float	toFloat( void ) const;
		int		toInt( void ) const;
	private:
		static const int	_fractionalBits = 8;
		int					_value;
};

std::ostream	&operator<<( std::ostream &stream, const Fixed &rhs );

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:41:54 by axlamber          #+#    #+#             */
/*   Updated: 2023/03/11 17:39:02 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class	Fixed {
	public:
		Fixed	( void );
		Fixed	( const Fixed &rhs );
		Fixed	&operator=(const Fixed &rhs );
		~Fixed	( void );
		void	setRawBits( const int raw );
		int		getRawBits( void ) const;
	private:
		static const int	_fractionalBits = 8;
		int					_value;
};

#endif

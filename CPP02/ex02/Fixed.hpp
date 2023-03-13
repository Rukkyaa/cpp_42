/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:41:54 by axlamber          #+#    #+#             */
/*   Updated: 2023/03/13 13:21:21 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

# define BLACK "\033[0;30m"
# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define BLUE "\033[0;34m"
# define MAGENTA "\033[0;35m"
# define CYAN "\033[0;36m"
# define WHITE "\033[0;37m"

# define BOLD_BLACK "\033[1;30m"
# define BOLD_RED "\033[1;31m"
# define BOLD_GREEN "\033[1;32m"
# define BOLD_YELLOW "\033[1;33m"
# define BOLD_BLUE "\033[1;34m"
# define BOLD_MAGENTA "\033[1;35m"
# define BOLD_CYAN "\033[1;36m"
# define BOLD_WHITE "\033[1;37m"

#define RESET "\033[0m"


class	Fixed {
	public:
		Fixed	( void );
		Fixed	( const int );
		Fixed	( const float );
		Fixed	( const Fixed &rhs );
		Fixed	&operator=( const Fixed &rhs );
		Fixed	&operator++( void );
		Fixed	operator++( int );
		Fixed	&operator--( void );
		Fixed	operator--( int );
		Fixed	operator+( const Fixed &rhs ) const;
		Fixed	operator-( const Fixed &rhs ) const;
		Fixed	operator*( const Fixed &rhs ) const;
		Fixed	operator/( const Fixed &rhs ) const;
		bool	operator>( const Fixed &rhs ) const;
		bool	operator>=( const Fixed &rhs ) const;
		bool	operator<( const Fixed &rhs ) const;
		bool	operator<=( const Fixed &rhs ) const;
		bool	operator==( const Fixed &rhs ) const;
		bool	operator!=( const Fixed &rhs ) const;
		static Fixed	&max( Fixed &lhs, Fixed &rhs );
		static const Fixed	&max( const Fixed &lhs, const Fixed &rhs );
		static Fixed	&min( Fixed &lhs, Fixed &rhs );
		static const Fixed	&min( const Fixed &lhs, const Fixed &rhs );
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

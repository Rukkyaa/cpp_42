/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 00:09:05 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/04/19 00:42:36 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <exception>
# include <vector>

using	std::cout;
using	std::endl;
using	std::exception;
using	std::vector;

class	Span {
	public:
		Span					( unsigned int n );
		~Span					( void );

		void		addNumber	( int );

		class		TooMuchValuesException: public exception {
			virtual const char	*what( void ) const throw();
		};

		class		TooLittleValuesException: public exception {
			virtual const char	*what( void ) const throw();
		};
	private:
		Span					( void );
		Span					( const Span &rhs );
		Span		&operator=	( const Span &rhs );
		unsigned int			_size;
		vector<int>				_content;
};

#endif
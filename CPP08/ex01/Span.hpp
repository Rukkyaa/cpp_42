/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 00:09:05 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/04/19 16:25:53 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <exception>
# include <vector>
# include <cassert>
# include <iomanip>
# include <ctime>
# include "colors.hpp"

using	std::cout;
using	std::endl;
using	std::exception;
using	std::vector;
using	std::sort;
using	std::abs;
using	std::distance;
using	std::string;

class	Span {
	public:
		class		TooMuchValuesException: public exception {
			virtual const char	*what( void ) const throw();
		};

		class		TooLittleValuesException: public exception {
			virtual const char	*what( void ) const throw();
		};
		
		Span							( unsigned int n );
		Span							( const Span &rhs );
		~Span							( void );

		void			addNumber		( int n );
		void			addNumber		( vector<int>::iterator begin, vector<int>::iterator end );
		void			printSpan		( void ) const ;
		int				longestSpan		( void ) const;
		int				shortestSpan	( void ) const;
		unsigned int	getSize			( void ) const;
		unsigned int	getContentSize	( void ) const;
	private:
		Span							( void );
		Span			&operator=		( const Span &rhs );
		unsigned int					_size;
		vector<int>						_content;
};

void		hideCursor( void );
void		showCursor( void );
void		ft_wait( float sec );
void		my_assert( bool res, string test_name);
vector<int>	fillVector( unsigned int size);
vector<int>	fillNegativeVector( unsigned int size);
int			getShortestSpan( vector<int> &v);
int			getLongestSpan( vector<int> &v);

#endif
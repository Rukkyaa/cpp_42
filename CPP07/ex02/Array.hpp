/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 20:15:27 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/04/18 22:30:32 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <cstdlib>
# include <cctype>
# include <sstream>
# include "colors.hpp"

using	std::cout;
using	std::endl;
using	std::cin;
using	std::string;
using	std::stringstream;

template<typename T>
class	Array {
	public:
		Array						( void );
		Array						( unsigned int n );
		Array						( const Array &rhs );
		~Array						( void );

		Array			&operator=	( const Array &rhs ) const;
		T				&operator[]	( unsigned int id ) const;

		unsigned int	size		( void ) const;
		void			printArray	( void ) const;
		void			randomFill	( void );
		class	OutOfRangeException : public std::exception {
			virtual const char	*what( void ) const throw();
		};
		
	private:
		unsigned int	_n;
		T				*_content;
};

# include "Array.tpp"

#endif
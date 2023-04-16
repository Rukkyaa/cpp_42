/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 22:38:47 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/04/16 17:39:47 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <cfloat>
# include <climits>
# include <iomanip>
# include <sstream>
# include "colors.hpp"

# define CHAR 0
# define INT 1
# define FLOAT 2
# define DOUBLE 3
# define ERROR 4

# define SPACE_CHAR 32
# define DEL_CHAR 127
# define ZERO_CHAR 48
# define NINE_CHAR 57
# define NULL_CHAR 0

# define R_WALL CYAN"║ " RESET
# define L_WALL CYAN" ║" RESET

using	std::cout;
using	std::endl;
using	std::string;
using	std::isprint;
using	std::setw;
using	std::left;
using	std::right;

void			convert			( string const &str );
void			convertFromChar	( string const &str );
void			convertFromInt	( string const &str );
void			convertFromFloat( string const &str );
void			convertFromDouble( string const &str );

bool			isChar			( string const &str );
bool			isInt			( string const &str );
bool			isFloat			( string const &str );
bool			isDouble		( string const &str );
unsigned short	getType			( string const &str );

void			printAll		( char c, int i, float f, double d, string const &str );
void			printChar		( char c, int i, size_t maxLen );
void			printInt		( float f, int i, size_t maxLen );
void			printFloat		( float f, int i, size_t maxLen );
void			printDouble		( double d, int i, size_t maxLen );


#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 22:38:47 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/05/12 14:56:41 by axlamber         ###   ########.fr       */
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
# define NAN_OR_INF 4
# define ERROR 5

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

void			my_convert				( string const &str );
void			convertFromChar		( string const &str );
void			convertFromInt		( string const &str );
void			convertFromFloat	( string const &str );
void			convertFromDouble	( string const &str );
void			convertFromNanOrInf	( string const &str );

bool			isChar				( string const &str );
bool			isInt				( string const &str );
bool			isFloat				( string const &str );
bool			isDouble			( string const &str );
bool			isNan				( string const &str );
bool			isInf				( string const &str );
bool			isNanOrInf			( string const &str );
unsigned short	getType				( string const &str );

void			printAll			( char c, int i, float f, double d, string const &str );
void			printChar			( char c, int i, size_t maxLen );
void			printInt			( float f, int i, size_t maxLen );
void			printFloat			( float f, int i, size_t maxLen );
void			printDouble			( double d, int i, size_t maxLen );


#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 22:38:47 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/04/16 10:24:34 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <cstdlib>
# include <cfloat>

# include "colors.hpp"

# define CHAR 0
# define INT 1
# define FLOAT 2
# define DOUBLE 3
# define ERROR 4

using	std::cout;
using	std::endl;
using	std::string;
using	std::isprint;

void			convert		( string const &str );
bool			isChar		( string const &str );
bool			isInt		( string const &str );
bool			isFloat		( string const &str );
bool			isDouble	( string const &str );
unsigned short	getType		( string const &str );

#endif
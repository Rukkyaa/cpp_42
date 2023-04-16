/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 22:59:03 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/04/16 10:05:53 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

void	convert( string const &str ) {
	// char	cValue = 0;
	// int		iValue = 0;
	// float	fValue = 0;
	// double	dValue = 0;

	if (isChar(str))
		cout << "Char" << endl;
	else if (isInt(str))
		cout << "Int" << endl;
	else if (isDouble(str))
		cout << "Double" << endl;
	else if (isFloat(str))
		cout << "Float" << endl;
	else
		cout << "Error" << endl;
}

unsigned int	getType( string const &str ) {
	bool	(*checkFunction[4])( string const & ) = {isChar, isInt, isFloat, isDouble};
	
}

bool	isChar( string const &str ) {
	return (str.length() == 1 && isprint(str[0]));
}

bool	isInt( string const &str ) {
	for (size_t i = str[0] == '-' || str[0] == '+'; i < str.length(); ++i) {
		if (!std::isdigit(str[i]))
			return (false);
	}
	return (true);
}

bool	isFloat( string const &str) {
    bool	decimalFound = false;
	
    for (size_t i = str[0] == '-' || str[0] == '+'; i < str.length(); ++i) {
        if (!isdigit(str[i])) {
            if (str[i] == '.' && !decimalFound)
                decimalFound = (true);
            else if (str[i] == 'f' || str[i] == 'F')
                return (i == str.length() - 1);
            else
                return (false);
        }
    }
    return	(decimalFound);
}

bool	isDouble( string const &str ) {
	bool	decimalFound = false;
	
    for (size_t i = str[0] == '-' || str[0] == '+'; i < str.length(); ++i) {
        if (!isdigit(str[i])) {
            if (str[i] == '.' && !decimalFound)
                decimalFound = (true);
            else
                return (false);
        }
    }
    return	(decimalFound);
}

// return ((str[0] >= ' ' && str[0] < '0') || (str[0] > '9' && str[0] < 127));

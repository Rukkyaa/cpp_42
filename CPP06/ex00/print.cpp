/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 16:21:36 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/04/16 18:14:39 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

size_t	getMaxLen( string const &str, char c, int i, float f ) {
	size_t	maxLen = (str.length() > 3) ? str.length() : str.length() + 3;
	size_t	fLen = 0;

	std::stringstream ss;
	ss << f;
	fLen = ss.str().length();		
	if (f == static_cast<float>(i))
		fLen += 3;
	else
		fLen += 1;
	if (i > 127 || i < 0)
		maxLen = (maxLen > 10) ? maxLen : 10;
	else if (!isprint(c))
		maxLen = (maxLen > 15) ? maxLen : 15;
	if (f > INT_MAX || f < INT_MIN)
		maxLen = (maxLen > 10) ? maxLen : 10;
	if (fLen > maxLen)
		maxLen = fLen;
	if (fLen == 14)
		maxLen = 14;
	else if (fLen == 12)
		maxLen = 12;
	return (maxLen);
}

void	printHighLine( size_t maxLen ) {
	cout << CYAN << "╔";
	for (size_t i = 0; i < maxLen + 10; i++)
		cout << "═";
	cout << "╗" << RESET << endl;
}

void	printLowLine( size_t maxLen ) {
	cout << CYAN << "╚";
	for (size_t i = 0; i < maxLen + 10; i++)
		cout << "═";
	cout << "╝" << RESET << endl;
}

void	printAll( char c, int i, float f, double d, string const &str ) {
	size_t	maxLen = getMaxLen(str, c, i, f);
	
	printHighLine(maxLen);
	cout << R_WALL << BLUE << std::setw(8) << "char: ";
	if (i > 127 || i < 0)
		cout << BOLD_RED << setw(maxLen) << left << "Impossible" << L_WALL << RESET << endl;
	else if (!isprint(c))
		cout << BOLD_RED << setw(maxLen) << left << "Non displayable" << L_WALL << RESET << endl;
	else
		cout << BOLD_GREEN << setw(maxLen) << left << c << L_WALL << RESET << endl;
	cout << R_WALL << BLUE << setw(8) << right << "int: ";
	if (f > INT_MAX || f < INT_MIN)
		cout << BOLD_RED << setw(maxLen) << left << "Impossible" << L_WALL << RESET << endl;
	else
		cout << BOLD_GREEN << setw(maxLen) << left << i << L_WALL << RESET << endl;

	cout << R_WALL << BLUE << setw(8) << right << "float: ";
	if (f == static_cast<float>(i)) {
		std::stringstream	ss;
		ss << f << ".0f";
		string	fStr = ss.str();
		cout << BOLD_GREEN << setw(maxLen) << left << fStr << L_WALL << RESET << endl;
	} else {
		std::stringstream	ss;
		ss << f << "f";
		string	fStr = ss.str();
		cout << BOLD_GREEN << setw(maxLen) << left << fStr << L_WALL << RESET << endl;
	}
	cout << R_WALL << BLUE << setw(8) << right << "double: ";
	if (d == static_cast<double>(i)) {
		std::stringstream	ss;
		ss << d << ".0";
		string	dStr = ss.str();
		cout << BOLD_GREEN << setw(maxLen) << left << dStr << L_WALL << RESET << endl;
	} else
		cout << BOLD_GREEN << setw(maxLen) << left << d << L_WALL << RESET << endl;
	printLowLine(maxLen);
}

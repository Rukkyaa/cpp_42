/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 16:21:36 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/05/12 15:42:14 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

size_t	getMaxLen( string const &str, char c, int i, double f ) {
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

bool	is_overflow_from_float(string str) {
	char	*endptr = NULL;
	long	iValue = std::strtol(str.c_str(), &endptr, 10);

	if (endptr == str.c_str() || (*endptr != '\0' && *endptr != 'f' && *endptr != 'F' && *endptr != '.'))
		return (true);
	if (iValue > INT_MAX || iValue < INT_MIN)
		return (true);
	return (false);
}

void	printAll( char c, int i, float f, double d, string const &str ) {
	size_t	maxLen = getMaxLen(str, c, i, d);
	
	printHighLine(maxLen);
	cout << R_WALL << BLUE << std::setw(8) << "char: ";
	if (i > 127 || i < 0)
		cout << BOLD_RED << setw(maxLen) << left << "Impossible" << L_WALL << RESET << endl;
	else if (!isprint(c))
		cout << BOLD_RED << setw(maxLen) << left << "Non displayable" << L_WALL << RESET << endl;
	else
		cout << BOLD_GREEN << setw(maxLen) << left << c << L_WALL << RESET << endl;
	cout << R_WALL << BLUE << setw(8) << right << "int: ";
	if (is_overflow_from_float(str))
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

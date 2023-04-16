/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 22:59:03 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/04/16 12:40:43 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

void	convert( string const &str ) {
	char			cValue = 0;
	int				iValue = 0;
	float			fValue = 0.0f;
	double			dValue = 0.0;
	unsigned short	type = getType(str);

	switch (type)
	{
		case CHAR:
			cValue = str[0];
			iValue = static_cast<int>(cValue);
			fValue = static_cast<float>(iValue);
			dValue = static_cast<double>(iValue);
			break;
		case INT:
			iValue = std::atoi(str.c_str());
			cValue = static_cast<char>(iValue);
			fValue = static_cast<float>(iValue);
			dValue = static_cast<double>(iValue);
			break;
		case DOUBLE:
			dValue = std::stod(str);
			iValue = std::atoi(str.c_str());
			cValue = static_cast<char>(iValue);
			fValue = static_cast<float>(iValue);
			break;
		case FLOAT:
			cout << "The type is float";
			break;
		default:
			cout << "The type is unknown";
			break;
	}
	cout << "Char: " << cValue << endl;
	cout << "Int: " << iValue << endl;
	cout << "Float: " << fValue << endl;
	cout << "Double: " << dValue << endl;
}

void	convertFromChar( string const &str ) {
	(void)str;
	// char			cValue = 0;
	// int				iValue = 0;
	// float			fValue = 0;
	// double			dValue = 0;

	// cValue = str[0];
	// iValue = static_cast<int>(cValue);
	// fValue = static_cast<float>(iValue);
	// dValue = static_cast<double>(iValue);
	// printChar(cValue);
}

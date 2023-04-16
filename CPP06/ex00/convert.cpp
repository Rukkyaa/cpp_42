/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 22:59:03 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/04/16 10:25:23 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

void	convert( string const &str ) {
	// char			cValue = 0;
	// int				iValue = 0;
	// float			fValue = 0;
	// double			dValue = 0;
	unsigned short	type = getType(str);

	switch (type)
	{
		case CHAR:
			cout << "The type is char";
			break;
		case INT:
			cout << "The type is int";
			break;
		case DOUBLE:
			cout << "The type is double";
			break;
		case FLOAT:
			cout << "The type is float";
			break;
		default:
			cout << "The type is unknown";
			break;
	}
	cout << endl;
}

/**
*** @brief Détermine le type d'une chaîne de caractères.
*** @param str La chaîne de caractères à évaluer.
*** @return unsigned short Le type détecté : CHAR, INT, DOUBLE ou FLOAT, ou ERROR si le type n'a pas été détecté.
**/
unsigned short	getType( string const &str ) {
	bool			(*checkFunction[4])( string const & ) = {isChar, isInt, isDouble, isFloat};
	unsigned short	res[4] = {CHAR, INT, DOUBLE, FLOAT};

	for (unsigned short i = 0; i < 4; ++i)
		if (checkFunction[i](str))
			return (res[i]);
	return (ERROR);
}

/**
*** @brief Vérifie si une chaîne de caractères représente un caractère imprimable.
*** @param str La chaîne de caractères à vérifier.
*** @return true si la chaîne représente un caractère imprimable, false sinon.
**/
bool	isChar( string const &str ) {
	return (str.length() == 1 && isprint(str[0]));
}

/**
*** @brief Vérifie si une chaîne de caractères représente un entier valide.
*** @param str La chaîne de caractères à vérifier.
*** @return true si la chaîne représente un entier valide, false sinon.
**/
bool	isInt( string const &str ) {
	for (size_t i = str[0] == '-' || str[0] == '+'; i < str.length(); ++i) {
		if (!std::isdigit(str[i]))
			return (false);
	}
	return (true);
}

/**
*** @brief Vérifie si une chaîne de caractères représente un float valide.
*** @param str La chaîne de caractères à vérifier.
*** @return true si la chaîne représente un float valide, false sinon.
**/
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

/**
*** @brief Vérifie si une chaîne de caractères représente un double valide.
*** @param str La chaîne de caractères à vérifier.
*** @return true si la chaîne représente un double valide, false sinon.
**/
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

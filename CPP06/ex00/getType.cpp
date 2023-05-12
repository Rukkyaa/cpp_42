/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getType.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 11:36:00 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/05/12 15:47:43 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

/**
*** @brief Détermine le type d'une chaîne de caractères.
*** @param str La chaîne de caractères à évaluer.
*** @return unsigned short Le type détecté : CHAR, INT, DOUBLE, FLOAT, NAN, INF, ou ERROR si le type n'a pas été détecté.
**/
unsigned short	getType( string const &str ) {
	bool			(*checkFunction[5])( string const & ) = {isInt, isChar, isDouble, isFloat, isNanOrInf};
	unsigned short	res[5] = {INT, CHAR, DOUBLE, FLOAT, NAN_OR_INF};

	for (unsigned short i = 0; i < 5; ++i)
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

/**
*** @brief Vérifie si une chaîne de caractères contient une valeur NaN
*** @param str La chaîne de caractères à vérifier.
*** @return true si la chaîne représente un NaN, false sinon.
**/
bool	isNan( string const &str ) {
	return (str == "nan" || str == "nanf" || str == "+nan" || str == "+nanf" || str == "-nan" || str == "-nanf");
}

/**
*** @brief Vérifie si une chaîne de caractères contient une valeur infinie
*** @param str La chaîne de caractères à vérifier.
*** @return true si la chaîne représente une valeur infinie, false sinon.
**/
bool	isInf( string const &str ) {
	return (str == "inf" || str == "inff" || str == "+inf" || str == "+inff" || str == "-inf" || str == "-inff");
}

/**
*** @brief Vérifie si une chaîne de caractères contient une valeur infinie ou NaN
*** @param str La chaîne de caractères à vérifier.
*** @return true si la chaîne représente une valeur infinie ou NaN, false sinon.
**/
bool	isNanOrInf( string const &str ) {
	return (isNan(str) || isInf(str));
}
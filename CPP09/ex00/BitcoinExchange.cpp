/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 20:30:54 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/04/19 21:03:31 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange( string const &dataBase ) {
	ifstream	dataBaseFile;
	string		line;
	string		date;
	float		price;
	size_t		pos;

	dataBaseFile.open(dataBase.c_str());
	if (dataBaseFile.fail())
		throw BitcoinExchange::FileOpenException();
	getline(dataBaseFile, line);
	while (getline(dataBaseFile, line)) {
		pos = line.find(',');
		date = line.substr(0, pos);
		price = atof(line.substr(pos + 1).c_str());
		_btcPrices[date] = price;
	}
	dataBaseFile.close();
}

const char	*BitcoinExchange::FileOpenException::what() const throw() {
	return (BOLD_RED"[ERROR] " RED "File could not be opened !" RESET);
}
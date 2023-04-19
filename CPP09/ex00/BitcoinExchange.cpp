/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 20:30:54 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/04/19 22:40:05 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange( string const &dataBase ) {
	fillBtcPrices(dataBase);
}

void	BitcoinExchange::fillBtcPrices( string const &dataBase ) {
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

float	BitcoinExchange::getExchange( string const &line ) {
	string		date;
	float		value;

	if (line.find('|') == string::npos)
		throw BitcoinExchange::WrongFormatException();
	date = line.substr(0, line.find('|') - 1);
	if (!isValidDate(date))
		throw BitcoinExchange::InvalideDateException();
	value = atof(line.substr(line.find('|') + 2).c_str());
	if (value < 0)
		throw BitcoinExchange::NegativeValueException();
	else if (value == 0)
		return (0);
	else if (value > 1000)
		throw BitcoinExchange::TooHighValueException();
	return (_btcPrices[date] * value);
}

bool	isValidDate( string const &date ) {
	regex_t	date_regex;
	bool	ret;
	int		year;
	int		month;
	int		day;
	
	if (regcomp(&date_regex, "^[0-9]{4}-[0-9]{2}-[0-9]{2}$", REG_EXTENDED) != 0) {
		cout << BOLD_RED"[ERROR] " RED "Regex compilation failed !" RESET << endl;
		return (false);
	}
	ret = !regexec(&date_regex, date.c_str(), 0, NULL, 0);
	regfree(&date_regex);
	if (!ret)
		return (false);
	year = atoi(date.substr(0, 4).c_str());
	month = atoi(date.substr(5, 2).c_str());
	day = atoi(date.substr(8, 2).c_str());
	return (!(year < 2009 || (year == 2009 && month == 1 && day < 3) || year > 9999
		|| month < 1 || month > 12 || day < 1 || day > 31));
}

const char	*BitcoinExchange::FileOpenException::what() const throw() {
	return (BOLD_RED"[ERROR] " RED "File could not be opened !" RESET);
}

const char	*BitcoinExchange::WrongFormatException::what() const throw() {
	return (BOLD_RED"[ERROR] " RED "Wrong format !" RESET);
}

const char	*BitcoinExchange::NegativeValueException::what() const throw() {
	return (BOLD_RED"[ERROR] " RED "Negative price !" RESET);
}

const char	*BitcoinExchange::InvalideDateException::what() const throw() {
	return (BOLD_RED"[ERROR] " RED "Date not found !" RESET);
}

const char	*BitcoinExchange::TooHighValueException::what() const throw() {
	return (BOLD_RED"[ERROR] " RED "Too high price !" RESET);
}
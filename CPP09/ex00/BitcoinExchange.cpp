/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 20:30:54 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/04/19 23:45:05 by rukkyaa          ###   ########.fr       */
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

void	BitcoinExchange::getExchange( string const &line ) {
	string		date;
	string		closestDate;
	string		tmp;
	float		value;

	if (line.find('|') == string::npos)
		throw BitcoinExchange::WrongFormatException();
	date = line.substr(0, line.find('|') - 1);
	if (!isValidDate(date))
		throw BitcoinExchange::InvalideDateException();
	closestDate = getClosestDate(date);
	tmp = line.substr(line.find('|') + 2);
	if (tmp.find_last_not_of("0123456789.") != string::npos || tmp.find('.') != tmp.find_last_of('.')
		|| tmp.find_first_of("0123456789") > 0)
		throw BitcoinExchange::WrongFormatException();
	value = atof(line.substr(line.find('|') + 2).c_str());
	if (value < 0)
		throw BitcoinExchange::NegativeValueException();
	else if (value > 1000)
		throw BitcoinExchange::TooHighValueException();
	cout << BOLD_GREEN"[INFO] " GREEN "The exchange rate on " << date << " was " << _btcPrices[closestDate] * value << "$." << RESET << endl;
}

string	BitcoinExchange::getClosestDate( string const &date ) {
	string	closestDate;
	int		year;
	int		month;
	int		day;
	int		yearClosest;
	int		monthClosest;
	int		dayClosest;
	int		diff = INT_MAX;

	year = atoi(date.substr(0, 4).c_str());
	month = atoi(date.substr(5, 2).c_str());
	day = atoi(date.substr(8, 2).c_str());

	for (map<string, float>::iterator it = _btcPrices.begin(); it != _btcPrices.end(); it++) {
		yearClosest = atoi(it->first.substr(0, 4).c_str());
		monthClosest = atoi(it->first.substr(5, 2).c_str());
		dayClosest = atoi(it->first.substr(8, 2).c_str());
		if (abs(yearClosest - year) * 365 + abs(monthClosest - month) * 30 + abs(dayClosest - day) < diff) {
			diff = abs(yearClosest - year) * 365 + abs(monthClosest - month) * 30 + abs(dayClosest - day);
			closestDate = it->first;
		}
	}
	return (closestDate);
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
	return (!(year < 2009 || (year == 2009 && month == 1 && day < 2) || year > 9999
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
	return (BOLD_RED"[ERROR] " RED "Invalid date found !" RESET);
}

const char	*BitcoinExchange::TooHighValueException::what() const throw() {
	return (BOLD_RED"[ERROR] " RED "Too high price !" RESET);
}
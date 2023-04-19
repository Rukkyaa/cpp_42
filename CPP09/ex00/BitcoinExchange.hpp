/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 20:31:01 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/04/19 22:57:37 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOIN_EXCHANGE_HPP
# define BITCOIN_EXCHANGE_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <fstream>
# include <map>
# include <regex.h>

# include "colors.hpp"

using	std::cout;
using	std::endl;
using	std::string;
using	std::ifstream;
using	std::exception;
using	std::map;

class	BitcoinExchange {
	public:
		class	FileOpenException: public exception {
			public:
				virtual const char* what() const throw();
		};

		class	WrongFormatException: public exception {
			public:
				virtual const char* what() const throw();
		};

		class	NegativeValueException: public exception {
			public:
				virtual const char* what() const throw();
		};

		class	InvalideDateException: public exception {
			public:
				virtual const char* what() const throw();
		};

		class	TooHighValueException: public exception {
			public:
				virtual const char* what() const throw();
		};

		void			fillBtcPrices	( const string &dataBase );
		string 			getClosestDate	( const string &date );
		void			getExchange		( const string &line );
		BitcoinExchange					( const string &dataBase );
	private:
		BitcoinExchange( void ) {};
		map<string, float>	_btcPrices;
		map<string, int>	_exchanges;
};

bool	isValidDate( string const &date );

#endif
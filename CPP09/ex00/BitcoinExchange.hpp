/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 20:31:01 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/04/19 20:55:46 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOIN_EXCHANGE_HPP
# define BITCOIN_EXCHANGE_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <fstream>
# include <map>

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

		BitcoinExchange( const string &dataBase );
	private:
		BitcoinExchange( void ) {};
		map<string, double>	_btcPrices;
};
#endif
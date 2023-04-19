/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 20:31:08 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/04/19 23:00:11 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main( int argc, char **argv ) {
	if (argc != 2) {
		cout << "[ERROR] Wrong number of arguments ! Usage: './btc <dataBaseFile>'" << endl;
		return (EXIT_FAILURE);
	}
	ifstream	inputFile(argv[1]);
	string		line;

	if (inputFile.fail()) {
		cout << "[ERROR] File could not be opened !" << endl;
		return (EXIT_FAILURE);
	}

	BitcoinExchange	change("data.csv");
	
	getline(inputFile, line);
	while (getline(inputFile, line)) {
		try {
			change.getExchange(line);
		} catch (exception &e) {
			cout << e.what() << endl;
		}
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 20:31:08 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/04/19 20:40:25 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main( int argc, char **argv ) {
	if (argc != 2) {
		cout << "[ERROR] Wrong number of arguments ! Usage: './btc <dataBaseFile>'" << endl;
		return (EXIT_FAILURE);
	}
	BitcoinExchange	change(argv[1]);
}
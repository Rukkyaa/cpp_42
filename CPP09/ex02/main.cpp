/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:35:51 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/04/20 12:03:48 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main( int argc, char **argv ) {
	if (argc < 2) {
		cout << BOLD_RED"[ERROR] " RED"Wrong number of arguments ! Usage: './PmergeMe <number> <number> ...'" << endl;
		return (EXIT_FAILURE);
	}
	try {
		PmergeMe	mergeMe(argc, argv);
	} catch (std::exception &e) {
		cout << e.what() << endl;
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}
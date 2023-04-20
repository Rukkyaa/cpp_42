/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 00:16:24 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/04/20 10:55:50 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main( int argc, char **argv ) {
	if (argc != 2) {
		cout << BOLD_RED"[ERROR] " RED"Wrong number of arguments ! Usage: './RPN <expr>'" << endl;
		return (EXIT_FAILURE);
	}
	try {
		RPN	rpn(argv[1]);
	} catch (std::exception &e) {
		cout << e.what() << endl;
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}

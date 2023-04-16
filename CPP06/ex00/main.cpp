/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 22:38:22 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/04/16 17:56:51 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"



int main(int argc, char **argv)
{
	(void)argv;
	if (argc != 2)
	{
		cout << BOLD_RED "[ERROR] " RESET RED "Invalid number of arguments" << endl;
		cout << "Usage: ./convert [string]" RESET << endl;
		return (EXIT_FAILURE);
	}
	convert(argv[1]);
	return (EXIT_SUCCESS);
}
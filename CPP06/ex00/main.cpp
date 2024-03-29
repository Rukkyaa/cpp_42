/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 22:38:22 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/05/12 14:56:53 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"
#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
	(void)argv;
	if (argc != 2)
	{
		cout << BOLD_RED "[ERROR] " RESET RED "Invalid number of arguments" << endl;
		cout << "Usage: ./convert [string]" RESET << endl;
		return (EXIT_FAILURE);
	}
	my_convert(argv[1]);
	return (EXIT_SUCCESS);
}
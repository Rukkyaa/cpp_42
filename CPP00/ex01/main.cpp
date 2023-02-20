/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:22:26 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/02/19 16:49:48 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main() {
	PhoneBook	book;
	string		input;
	
	book._nb_contact = 0;
	while (1)
	{
		std::getline(std::cin, input);
		if (std::cin.eof() || !input.compare("EXIT"))
			book._exit();
		else if (!input.compare("ADD"))
			book._add();
		else if (!input.compare("SEARCH"))
			book._search();
	}
	return (0);
}

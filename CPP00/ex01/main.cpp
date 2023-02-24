/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:22:26 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/02/24 17:21:09 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main() {
	PhoneBook	book;
	string		input;
	
	book._nb_contact = 0;
	while (1)
	{
		std::cout << "Enter a command: ";
		std::getline(std::cin, input);
		if (std::cin.eof() || !input.compare("EXIT"))
			book._exit();
		else if (!input.compare("ADD"))
			book._add();
		else if (!input.compare("SEARCH"))
			book._search();
		else
			std::cout << "Invalid command this PhoneBook works only with ADD/SEARCH/EXIT" << std::endl;
	}
	return (0);
}

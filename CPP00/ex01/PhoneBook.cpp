/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 15:58:32 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/02/27 17:32:11 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	this->_nb_contact = 0;
}

void	PhoneBook::_add() {
	Contact	contact;

	if (this->_nb_contact == 8)
		this->_nb_contact = 0;
	contact._set_first_name();
	contact._set_last_name();
	contact._set_nickname();
	contact._set_phone_number();
	contact._set_darkest_secret();
	this->_contacts[this->_nb_contact] = contact;
	this->_nb_contact ++;
}

void	PhoneBook::_search() {
	string	input;
	int		nb;
	
	if (!this->_nb_contact)
		return ((void)(std::cout << "Any contact in the phone !" << std::endl));
	this->_show_format_contact();
	while (1)
	{
		std::cout << "Enter the id of the contact you want to see : ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			exit(0);
		nb = std::atoi(input.c_str());
		if (nb <= 0 || nb > 8 || this->_contacts[nb - 1]._get_first_name().empty())
			std::cout << "Invalid input !" << std::endl;
		else
			break ;
	}
	this->_contacts[nb - 1]._show_contact(nb);
}

void	PhoneBook::_exit()
{
	exit(0);
}

void	PhoneBook::_show_format_contact() {
	std::cout << "\033[1;35m╔════════════╦════════════╦════════════╦════════════╗" << std::endl << "║ ";
	std::cout << std::setw(10) << "Id    " << " ║ ";
	std::cout << std::setw(10) << "First Name" << " ║ ";
	std::cout << std::setw(10) << "Last Name " << " ║ ";
	std::cout << std::setw(10) << "Nickname " << " ║ " << std::endl;
	for (int i = 0; i < 8 && !this->_contacts[i]._get_first_name().empty(); i++)
	{
		std::cout << "╠════════════╬════════════╬════════════╬════════════╣" << std::endl;
		std::cout << "║ " << std::setw(10) << i + 1 << " ║ ";
		this->_contacts[i]._print_trunc(this->_contacts[i]._get_first_name());
		std::cout << " ║ ";
		this->_contacts[i]._print_trunc(this->_contacts[i]._get_last_name());
		std::cout << " ║ ";
		this->_contacts[i]._print_trunc(this->_contacts[i]._get_nickname());
		std::cout << " ║" << std::endl;
	}
	std::cout << "╚════════════╩════════════╩════════════╩════════════╝\033[m" << std::endl;
}

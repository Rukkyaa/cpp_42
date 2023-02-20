/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 15:23:53 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/02/19 16:37:58 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

string	Contact::_get_first_name() {
	return (this->_first_name);
}

string	Contact::_get_last_name() {
	return (this->_last_name);
}

string	Contact::_get_nickname() {
	return (this->_nickname);
}

string	Contact::_get_phone_number() {
	return (this->_phone_number);
}

string	Contact::_get_darkest_secret() {
	return (this->_darkest_secret);
}

void	Contact::_set_first_name() {
	string	tmp;
	bool	valid = false;
	
	while (!valid)
	{
		std::cout << "Enter a first name : ";
		std::getline(std::cin, tmp);
		valid = (tmp.empty()) ? false : true;
		if (valid)
			this->_first_name = tmp;
		else
			std::cout << "Invalid input for first name !" << std::endl;
	}
}

void	Contact::_set_last_name() {
	string	tmp;
	bool	valid = false;
	
	while (!valid)
	{
		std::cout << "Enter a last name : ";
		std::getline(std::cin, tmp);
		valid = (tmp.empty()) ? false : true;
		if (valid)
			this->_last_name = tmp;
		else
			std::cout << "Invalid input for last name !" << std::endl;
	}
}

void	Contact::_set_nickname() {
	string	tmp;
	bool	valid = false;
	
	while (!valid)
	{
		std::cout << "Enter a nickname : ";
		std::getline(std::cin, tmp);
		valid = (tmp.empty()) ? false : true;
		if (valid)
			this->_nickname = tmp;
		else
			std::cout << "Invalid input for nickname !" << std::endl;
	}
}

void	Contact::_set_phone_number() {
	string	tmp;
	bool	valid = false;
	
	while (!valid)
	{
		std::cout << "Enter a phone number : ";
		std::getline(std::cin, tmp);
		valid = (tmp.empty()) ? false : true;
		if (valid)
			this->_phone_number = tmp;
		else
			std::cout << "Invalid input for phone number !" << std::endl;
	}
}

void	Contact::_set_darkest_secret() {
	string	tmp;
	bool	valid = false;
	
	while (!valid)
	{
		std::cout << "Enter a darkest secret : ";
		std::getline(std::cin, tmp);
		valid = (tmp.empty()) ? false : true;
		if (valid)
			this->_darkest_secret = tmp;
		else
			std::cout << "Invalid input for darkest secret !" << std::endl;
	}
}

void	Contact::_show_contact(int id) {
	std::cout << "\033[1;32mId            : " << id << std::endl;
	std::cout << "First Name    : " << this->_get_first_name() << std::endl;
	std::cout << "Last Name     : " << this->_get_last_name() << std::endl;
	std::cout << "Nickname      : " << this->_get_nickname() << std::endl;
	std::cout << "Phone number  : " << this->_get_phone_number() << std::endl;
	std::cout << "Darkest secret: " << this->_get_darkest_secret() << "\033[m" << std::endl;
}

void	Contact::_print_trunc(string str) {
	if (str.length() > 10)
		std::cout << std::setw(9) << str.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << str;
}

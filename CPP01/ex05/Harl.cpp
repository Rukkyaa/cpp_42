/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 18:20:07 by axlamber          #+#    #+#             */
/*   Updated: 2023/02/27 18:37:11 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {
	std::cout << "\033[1;32mHarl created with success !\033[0m" << std::endl; 
}

Harl::~Harl() {
	std::cout << "\033[1;31mHarl destroyed with success !\033[0m" << std::endl; 
}

void	Harl::debug(void) {
	std::cout << "Debug" << std::endl;
	// std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
}

void	Harl::info(void) {
	std::cout << "Info" << std::endl;
	// std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void	Harl::warning(void) {
	std::cout << "Warning" << std::endl;
	// std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void) {
	std::cout << "Error" << std::endl;
	// std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

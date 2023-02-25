/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:39:51 by axlamber          #+#    #+#             */
/*   Updated: 2023/02/26 00:44:15 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::attack() {
	std::string	weapon_name = _weapon ? _weapon->getType() : "bare hand";
	
	std::cout << "\033[1;33m" << this->_name << "\033[0;33m attacks with their " << weapon_name << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon) {
	this->_weapon = &weapon;
}

HumanB::HumanB(std::string name): _name(name), _weapon(NULL){
	std::cout << "\033[1;32mHuman B: \033[0;32m" << _name << " created without weapon !\033[0;m" << std::endl;
}

HumanB::~HumanB() {
	std::cout << "\033[1;31mHuman B: \033[0;31m" << _name << " destroyed !\033[0m" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:23:52 by axlamber          #+#    #+#             */
/*   Updated: 2023/02/25 23:36:05 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

string	Weapon::getType() {
	return (this->_type);
}

void	Weapon::setType(string type) {
	std::cout << "\033[1;32mWeapon: \033[0;32m" << _type << " become " << type << "!\033[0m" << std::endl;
	this->_type = type;
}

Weapon::Weapon(string type) : _type(type){
	std::cout << "\033[1;31mWeapon: \033[0;31m" << _type << " created !\033[0m" << std::endl;
}

Weapon::Weapon() : _type("Unknown"){
	std::cout << "\033[1;31mWeapon: \033[0;31m" << _type << " created !\033[0m" << std::endl;
}

Weapon::~Weapon() {
	std::cout << "\033[1;35mWeapon: \033[0;35m" << _type << " destroyed !\033[0m" << std::endl;
}

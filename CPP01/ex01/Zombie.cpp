/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:47:56 by axlamber          #+#    #+#             */
/*   Updated: 2023/02/25 09:10:24 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name){
	std::cout << name << " created" << std::endl;
}

Zombie::Zombie() {
	this->_name = "Unknown zombie";
	std::cout << _name << " created" << std::endl;
}

Zombie::~Zombie() {
	std::cout << "\033[0;30m" << this->_name << " destroyed ! 🪦\033[0m" << std::endl;
}

void	Zombie::announce() {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ... 🧟" << std::endl;
}

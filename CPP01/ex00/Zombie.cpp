/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:47:56 by axlamber          #+#    #+#             */
/*   Updated: 2023/02/24 17:56:53 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(string name) {
	this->_name = name;
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:47:56 by axlamber          #+#    #+#             */
/*   Updated: 2023/02/28 10:00:39 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name){
	std::cout << _name << " created" << std::endl;
}

Zombie::Zombie() : _name("Unknown  zombie") {
	std::cout << _name << " created" << std::endl;
}

Zombie::~Zombie() {
	std::cout << "\033[0;30m" << _name << " destroyed ! 🪦\033[0m" << std::endl;
}

void	Zombie::announce() {
	std::cout << _name << ": BraiiiiiiinnnzzzZ... 🧟" << std::endl;
}

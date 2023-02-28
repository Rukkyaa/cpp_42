/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:36:26 by axlamber          #+#    #+#             */
/*   Updated: 2023/02/28 10:19:08 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::attack() {
	std::cout << "\033[1;33m" <<_name << "\033[0;33m attacks with their " << this->_weapon.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon) {
	std::cout << "\033[1;32mHuman A: \033[0;32m" << _name << " created with " << _weapon.getType() << " as weapon !\033[0;m" << std::endl;
}

HumanA::~HumanA() {
	std::cout << "\033[1;31mHuman A: \033[0;31m" << _name << " destroyed !\033[0m" << std::endl;
}

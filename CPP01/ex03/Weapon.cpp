/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:23:52 by axlamber          #+#    #+#             */
/*   Updated: 2023/02/20 17:33:07 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

string	Weapon::getType() {
	return (this->_type);
}

void	Weapon::setType(string type) {
	this->_type = type;
}

Weapon::Weapon(string type) {
	this->setType(type);
}

Weapon::Weapon() {
	
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 11:37:40 by axlamber          #+#    #+#             */
/*   Updated: 2023/03/14 12:52:34 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap() {
	std::cout << BOLD_GREEN"[Scav trap] " GREEN << _name << " created !" << std::endl;
	_hitPoint = 100;
	_maxHitPoint = 100;
	_energyPoint = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name) {
	std::cout << BOLD_GREEN"[Scav trap] " GREEN << _name << " created !" << std::endl;
	_hitPoint = 100;
	_maxHitPoint = 100;
	_energyPoint = 50;
	_attackDamage = 20;
}

ScavTrap::~ScavTrap( void ) {
	std::cout << BOLD_RED"[Scav trap] " RED << _name << " destroyed !" << std::endl;
}

void	ScavTrap::attack( const std::string &target) {
	if (_energyPoint) {
		std::cout << BOLD_CYAN"[Scav trap] " CYAN<< _name << " attacked " << target << " and dealt " << _attackDamage << " damages !" << std::endl;
		_energyPoint -= 1;
	} else
		std::cout << BOLD_RED"[Scav trap] ERROR " RED << _name << " doesn't have enough energy points to attack ! " << std::endl;
}

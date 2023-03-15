/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 15:48:14 by axlamber          #+#    #+#             */
/*   Updated: 2023/03/15 09:24:10 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "_clap_name") {
	_name = name;
	_hitPoint = FragTrap::_hitPoint;
	_energyPoint = ScavTrap::_energyPoint;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << BOLD_GREEN"[Diamond trap] " GREEN << _name << " created !" << std::endl;
}

DiamondTrap::DiamondTrap( void ) : ClapTrap("Nameless_clap_name") {
	_name = "Nameless";
	_hitPoint = FragTrap::_hitPoint;
	_energyPoint = ScavTrap::_energyPoint;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << BOLD_GREEN"[Diamond trap] " GREEN << _name << " created !" << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap &rhs) : ClapTrap(rhs) {
	*this = rhs;
	std::cout << BOLD_GREEN"[Diamond trap] " GREEN << _name << " created by copy !" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=( DiamondTrap const & rhs ) {
	if (this == &rhs)
		return (*this);
	_name = rhs._name;
	_hitPoint = rhs._hitPoint;
	_energyPoint = rhs._energyPoint;
	_attackDamage = rhs._attackDamage;
	std::cout << BOLD_GREEN"[Diamond trap] " GREEN << _name << " created by assignement !" << std::endl;
	return (*this);
}

void	DiamondTrap::whoAmI( void ) {
	std::cout << BOLD_WHITE"[Diamond trap] " WHITE << _name << " is " << ClapTrap::_name << std::endl;
}

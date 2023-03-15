/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 15:48:14 by axlamber          #+#    #+#             */
/*   Updated: 2023/03/15 10:06:42 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/*
** DiamondTrap's default constructor, initialize the name to "Nameless" and the
** other attributes by default. It also display a message to say that the
** DiamondTrap has been created.
**
** @param  none
** @return none
*/
DiamondTrap::DiamondTrap( void ) : ClapTrap("Nameless_clap_name") {
	_name = "Nameless";
	_hitPoint = FragTrap::_hitPoint;
	_energyPoint = ScavTrap::_energyPoint;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << BOLD_GREEN"[Diamond trap] " GREEN << _name << " created !" << std::endl;
}

/*
** DiamondTrap's constructor, initialize the name to the given parameter and the
** other attributes by default. It also display a message to say that the
** DiamondTrap has been created.
**
** @param  name : the name of the DiamondTrap
** @return none
*/
DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "_clap_name") {
	_name = name;
	_hitPoint = FragTrap::_hitPoint;
	_energyPoint = ScavTrap::_energyPoint;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << BOLD_GREEN"[Diamond trap] " GREEN << _name << " created !" << std::endl;
}

/*
** DiamondTrap's copy constructor, initialize the DiamondTrap with the attributes of
** the given DiamondTrap. It also display a message to say that the DiamondTrap has
** been created.
**
** @param  target : the DiamondTrap to copy
** @return none
*/
DiamondTrap::DiamondTrap( const DiamondTrap &rhs) : ClapTrap(rhs) {
	*this = rhs;
	std::cout << BOLD_GREEN"[Diamond trap] " GREEN << _name << " created by copy !" << std::endl;
}

/*
** DiamondTrap's assignement operator, initialize the DiamondTrap with the attributes of
** the given DiamondTrap. It also display a message to say that the DiamondTrap has
** been created.
**
** @param  target : the DiamondTrap to copy
** @return none
*/
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

/*
** DiamondTrap's destructor, display a message to say that the DiamondTrap has been
** destroyed.
**
** @param  none
** @return none
*/
DiamondTrap::~DiamondTrap( void ) {
	std::cout << BOLD_RED"[Diamond trap] " RED << _name << " destroyed !" << std::endl;
}

/*
** DiamondTrap's whoAmI method, display a message to say that the DiamondTrap is
** actually a ClapTrap.
**
** @param  none
** @return none
*/
void	DiamondTrap::whoAmI( void ) {
	std::cout << BOLD_WHITE"[Diamond trap] " WHITE << _name << " is " << ClapTrap::_name << std::endl;
}

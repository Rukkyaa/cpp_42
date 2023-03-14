/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 11:37:40 by axlamber          #+#    #+#             */
/*   Updated: 2023/03/14 15:24:50 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*
** ScavTrap's default constructor, initialize the name to "Nameless" and the
** other attributes by default. It also display a message to say that the
** ScavTrap has been created.
**
** @param  none
** @return none
*/
ScavTrap::ScavTrap( void ) : ClapTrap() {
	std::cout << BOLD_GREEN"[Scav trap] " GREEN << _name << " created !" << std::endl;
	_hitPoint = SCAV_HIT_POINT;
	_maxHitPoint = _hitPoint;
	_energyPoint = SCAV_ENERGY_POINT;
	_attackDamage = SCAV_ATTACK_DAMAGE;
}

/*
** ScavTrap's constructor, initialize the name to the given parameter and the
** other attributes by default. It also display a message to say that the
** ScavTrap has been created.
**
** @param  name : the name of the ScavTrap
** @return none
*/
ScavTrap::ScavTrap( std::string name ) : ClapTrap(name) {
	std::cout << BOLD_GREEN"[Scav trap] " GREEN << _name << " created !" << std::endl;
	_hitPoint = SCAV_HIT_POINT;
	_maxHitPoint = _hitPoint;
	_energyPoint = SCAV_ENERGY_POINT;
	_attackDamage = SCAV_ATTACK_DAMAGE;
}

/*
** ScavTrap's copy constructor, initialize the ScavTrap with the attributes of
** the given ScavTrap. It also display a message to say that the ScavTrap has
** been created.
**
** @param  target : the ScavTrap to copy
** @return none
*/
ScavTrap::ScavTrap( ScavTrap const & rhs ) : ClapTrap(rhs) {
	*this = rhs;
	std::cout << BOLD_GREEN"[Scav trap] " GREEN << _name << " created by copy !" << std::endl;
}

/*
** ScavTrap's assignement operator, initialize the ScavTrap with the attributes
** of the given ScavTrap. It also display a message to say that the ScavTrap has
** been created.
**
** @param  target : the ScavTrap to copy
** @return none
*/
ScavTrap & ScavTrap::operator=( ScavTrap const & rhs ) {
	if (this == &rhs)
		return *this;
	_name = rhs._name;
	_hitPoint = rhs._hitPoint;
	_energyPoint = rhs._energyPoint;
	_maxHitPoint = rhs._maxHitPoint;
	std::cout << BOLD_GREEN"[Scav trap] " GREEN << _name << " created by assignement !" << std::endl;
	return (*this);
}

/*
** ScavTrap's destructor, display a message to say that the ScavTrap has been
** destroyed.
**
** @param  none
** @return none
*/
ScavTrap::~ScavTrap( void ) {
	std::cout << BOLD_RED"[Scav trap] " RED << _name << " destroyed !" << std::endl;
}

/*
** ScavTrap's copy constructor, initialize the ScavTrap with the attributes of
** the given ScavTrap.
**
** @param  target : the ScavTrap to copy
** @return none
*/
void	ScavTrap::attack( const std::string &target) {
	if (_energyPoint) {
		std::cout << BOLD_CYAN"[Scav trap] " CYAN<< _name << " attacked " << target << " and dealt " << _attackDamage << " damages !" << std::endl;
		_energyPoint -= 1;
	} else
		std::cout << BOLD_RED"[Scav trap] ERROR " RED << _name << " doesn't have enough energy points to attack ! " << std::endl;
}

/*
** ScavTrap's guardGate method, display a message to say that the ScavTrap is
** guarding the gate.
**
** @param  none
** @return none
*/
void	ScavTrap::guardGate( void ) {
	std::cout << BOLD_BLUE"[Scav trap] " BLUE << _name << " is guarding the gate !" << std::endl;
}

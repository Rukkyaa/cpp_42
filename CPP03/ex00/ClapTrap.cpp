/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 18:36:15 by axlamber          #+#    #+#             */
/*   Updated: 2023/03/14 11:32:12 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*
** ClapTrap's default constructor, initialize the name to "Nameless" and the
** other attributes by default. It also display a message to say that the
** ClapTrap has been created.
**
** @param  none
** @return none
*/
ClapTrap::ClapTrap( void ) :
	_name("Nameless"),
	_hitPoint(10),
	_energyPoint(10),
	_attackDamage(0){
		std::cout << BOLD_GREEN"Clap trap " GREEN << _name << " created !" << std::endl;
}

/*
** ClapTrap's constructor, initialize the name to the given parameter and the
** other attributes by default. It also display a message to say that the
** ClapTrap has been created.
**
** @param  name : the name of the ClapTrap
** @return none
*/
ClapTrap::ClapTrap( std::string name ) :
	_name(name),
	_hitPoint(10),
	_energyPoint(10),
	_attackDamage(0),
	_maxHitPoint(10){
		std::cout << BOLD_GREEN"Clap trap " GREEN << _name << " created !" << std::endl;
}

/*
** ClapTrap's destructor, display a message to say that the ClapTrap has been
** destroyed.
**
** @param  none
** @return none
*/
ClapTrap::~ClapTrap( void ) {
	std::cout << BOLD_RED"Clap trap " RED << _name << " destroyed !" << std::endl;
}

/*
** ClapTrap's copy constructor, initialize the ClapTrap with the attributes of
** the given ClapTrap.
**
** @param  rhs : the ClapTrap to copy
** @return none
*/
ClapTrap::ClapTrap( ClapTrap const & rhs ) {
	*this = rhs;
	std::cout << BOLD_GREEN"Clap trap " GREEN << _name << " created by copy!" << std::endl;
}

/*
** ClapTrap's assignation operator, assign the attributes of the given ClapTrap
** to the current ClapTrap.
**
** @param  rhs : the ClapTrap to copy
** @return the current ClapTrap
*/
ClapTrap	&ClapTrap::operator=( ClapTrap const & rhs ) {
	if (this == &rhs)
		return (*this);
	_name = rhs._name;
	_hitPoint = rhs._hitPoint;
	_energyPoint = rhs._energyPoint;
	_attackDamage = rhs._attackDamage;
	_maxHitPoint = rhs._maxHitPoint;
	std::cout << BOLD_GREEN"Clap trap " GREEN << _name << " created by assignement!" << std::endl;
	return (*this);
}

/*
** ClapTrap's attack method, attack the given target and display a message to
** say that the ClapTrap has attacked the target. It also decrease the energy
** points of the ClapTrap. If the ClapTrap doesn't have enough energy points,
** it displays an error message.
**
** @param  target : the target of the attack
** @return none
*/
void	ClapTrap::attack( const std::string &target) {
	if (_energyPoint) {
		std::cout << BOLD_CYAN"Attacked " << target << CYAN" and dealt " << _attackDamage << " damages !" << std::endl;
		_energyPoint -= 1;
	} else
		std::cout << BOLD_RED"ERROR " RED << _name << " doesn't have enough energy points to attack ! " << std::endl;
}

/*
** ClapTrap's takeDamage method, decrease the hit points of the ClapTrap by the
** given amount. If the ClapTrap is already dead, it displays an error message.
** To avoid negative hit points, the hit points are set to 0 if the amount is
** greater than the current hit points.
**
** @param  amount : the amount of damages taken
** @return none
*/
void	ClapTrap::takeDamage( unsigned int amount ) {
	if (_hitPoint > 0) {
		std::cout << BOLD_YELLOW"OOUCH ! " YELLOW << _name << " took " << amount << " damages " << std::endl;
		if (_hitPoint - (int)amount < 0)
			_hitPoint = 0;
		else
			_hitPoint -= amount;
	} else {
		std::cout << BOLD_RED"WTF ? " RED << " do you really want to kick a dead ?!" << std::endl;
	}
}

/*
** ClapTrap's beRepaired method, increase the hit points of the ClapTrap by the
** given amount. If the ClapTrap is already at the max of his capacity, it
** displays an error message. To avoid overloading the hit points, the hit points
** are set to the max hit points if the amount is greater than the difference
** between the max hit points and the current hit points.
**
** @param  amount : the amount of life points regained
** @return none
*/
void	ClapTrap::beRepaired( unsigned int amount) {
	if (_energyPoint) {
		if (_hitPoint != _maxHitPoint) {
			std::cout << BOLD_MAGENTA"Wow ! " MAGENTA << _name << " regains " << (_hitPoint + (int)amount > _maxHitPoint ? _maxHitPoint - _hitPoint : amount) << " life points !" << std::endl;
			if (_hitPoint + (int)amount > _maxHitPoint)
				_hitPoint = _maxHitPoint;
			else
				_hitPoint += amount;
			_energyPoint -= 1;
		} else {
			std::cout << BOLD_RED"ERROR " RED << _name << " is at the max of his capacity !" << std::endl;
		}
	} else
		std::cout << BOLD_RED"ERROR " RED << _name << " doesn't have enough energy points to be repaired ! " << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 11:37:40 by axlamber          #+#    #+#             */
/*   Updated: 2023/03/14 14:08:39 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*
** FragTrap's default constructor, initialize the name to "Nameless" and the
** other attributes by default. It also display a message to say that the
** FragTrap has been created.
**
** @param  none
** @return none
*/
FragTrap::FragTrap( void ) : ClapTrap() {
	std::cout << BOLD_GREEN"[Frag trap] " GREEN << _name << " created !" << std::endl;
	_hitPoint = 100;
	_maxHitPoint = 100;
	_energyPoint = 100;
	_attackDamage = 30;
}

/*
** FragTrap's constructor, initialize the name to the given parameter and the
** other attributes by default. It also display a message to say that the
** FragTrap has been created.
**
** @param  name : the name of the FragTrap
** @return none
*/
FragTrap::FragTrap( std::string name ) : ClapTrap(name) {
	std::cout << BOLD_GREEN"[Frag trap] " GREEN << _name << " created !" << std::endl;
	_hitPoint = 100;
	_maxHitPoint = 100;
	_energyPoint = 100;
	_attackDamage = 30;
}

/*
** FragTrap's destructor, display a message to say that the FragTrap has been
** destroyed.
**
** @param  none
** @return none
*/
FragTrap::~FragTrap( void ) {
	std::cout << BOLD_RED"[Frag trap] " RED << _name << " destroyed !" << std::endl;
}

/*
** FragTrap's guardGate method, display a message to say that the FragTrap is
** guarding the gate.
**
** @param  none
** @return none
*/
void	FragTrap::highFivesGuys( void ) {
	std::cout << BOLD_BLUE"[Frag trap] " BLUE << _name << " did a hive fives !" << std::endl;
}

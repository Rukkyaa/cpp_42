/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 18:36:15 by axlamber          #+#    #+#             */
/*   Updated: 2023/03/13 19:19:47 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) :
	_name("Nameless"),
	_hitPoint(10),
	_energyPoint(10),
	_attackDamage(0){
		std::cout << BOLD_GREEN"Clap trap " GREEN << _name << " created !" << std::endl;
}

ClapTrap::ClapTrap( std::string name ) :
	_name(name),
	_hitPoint(10),
	_energyPoint(10),
	_attackDamage(0),
	_maxHitPoint(10){
		std::cout << BOLD_GREEN"Clap trap " GREEN << _name << " created !" << std::endl;
}

ClapTrap::~ClapTrap( void ) {
	(void)_hitPoint;
	(void)_energyPoint;
	(void)_attackDamage;
	std::cout << BOLD_RED"Clap trap " RED << _name << " destroyed !" << std::endl;
}

void	ClapTrap::attack( const std::string &target) {
	if (_energyPoint) {
		std::cout << BOLD_CYAN"Attacked " << target << CYAN" and dealt " << _attackDamage << " damages !" << std::endl;
		_energyPoint -= 1;
	} else
		std::cout << BOLD_RED"ERROR " RED << _name << " doesn't have enough energy points to attack ! " << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount ) {
	if (_hitPoint > 0) {
		std::cout << BOLD_YELLOW"OOUCH ! " YELLOW << _name << " took " << amount << " damages " << std::endl;
		if (_hitPoint - amount < 0)
			_hitPoint = 0;
		else
			_hitPoint -= amount;
	} else {
		std::cout << BOLD_RED"WTF ? " RED << " do you really want to kick a dead ?!" << std::endl;
	}
}

void	ClapTrap::beRepaired( unsigned int amount) {
	if (_energyPoint) {
		if (_hitPoint + amount < _maxHitPoint) {
			std::cout << BOLD_MAGENTA"Wow ! " MAGENTA << _name << " regains life points !" << std::endl;
			_energyPoint -= 1;
			_hitPoint += amount;
		} else {
			std::cout << BOLD_RED"ERROR " RED << _name << " is at the max of his capacity !" << std::endl;
		}
	} else
		std::cout << BOLD_RED"ERROR " RED << _name << " doesn't have enough energy points to attack ! " << std::endl;
}

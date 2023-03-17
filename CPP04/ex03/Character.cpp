/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 10:55:38 by axlamber          #+#    #+#             */
/*   Updated: 2023/03/17 13:21:32 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*
** Character's default constructor, set type to Default.
** a message to say that the Character is created is displayed if DEBUG is defined.
**
** @param void
** @return void
*/
Character::Character( void ) : _name("Default"), _materiaCount(0) {
	for (int i = 0; i < MAX_MATERIA; i++)
		_inventory[i] = NULL;
	#ifdef DEBUG
		cout << BOLD_GREEN << "[" << typeid(*this).name() + 1 << "] " RESET UNDERLINE_WHITE;
		cout <<  _name << GREEN" created !" << RESET << endl;
	#endif
}

/*
** Character's constructor, set type to the given type.
** a message to say that the Character is created is displayed if DEBUG is defined.
**
** @param string name
** @return void
*/
Character::Character( string name ) : _name(name), _materiaCount(0) {
	for (int i = 0; i < MAX_MATERIA; i++)
		_inventory[i] = NULL;
	#ifdef DEBUG
		cout << BOLD_GREEN << "[" << typeid(*this).name() + 1 << "] " RESET UNDERLINE_WHITE;
		cout <<  _name << GREEN" created !" << RESET << endl;
	#endif
}

/*
** Character's copy constructor, set type to the given type.
** a message to say that the Character is created is displayed if DEBUG is defined.
**
** @param Character const &rhs
** @return void
*/
Character::Character( Character const &rhs ) {
	*this = rhs;
	#ifdef DEBUG
		cout << BOLD_GREEN << "[" << typeid(*this).name() + 1 << "] " RESET UNDERLINE_WHITE;
		cout <<  _name << GREEN" created by copy !" << RESET << endl;
	#endif
}

/*
** Character's assignation operator, set type to the given type.
** a message to say that the Character is created is displayed if DEBUG is defined.
**
** @param Character const &rhs
** @return Character
*/
Character	&Character::operator=( Character const &rhs ) {
	if (this != &rhs) {
		_name = rhs._name;
		_materiaCount = rhs._materiaCount;
		for (int i = 0; i < MAX_MATERIA; i++)
		{
			if (rhs._inventory[i])
				_inventory[i] = rhs._inventory[i]->clone();
			else
				_inventory[i] = NULL;
		}
	}
	#ifdef DEBUG
		cout << BOLD_GREEN << "[" << typeid(*this).name() + 1 << "] " RESET UNDERLINE_WHITE;
		cout <<  _name << GREEN" created by assignation !" << RESET << endl;
	#endif
	return (*this);
}

/*
** Character's destructor, set type to the given type.
** a message to say that the Character is destroyed is displayed if DEBUG is defined.
**
** @param void
** @return void
*/
Character::~Character( void ) {
	for (int i = 0; i < MAX_MATERIA; i++)
		if (_inventory[i])
			delete _inventory[i];
	#ifdef DEBUG
		cout << BOLD_RED << "[" << typeid(*this).name() + 1 << "] " RESET UNDERLINE_WHITE;
		cout <<  _name << RED" destroyed !" << RESET << endl;
	#endif
}

/*
** Character's getName method, return the name of the Character.
**
** @param void
** @return string const &name
*/
string const	&Character::getName( void ) const {
	return (_name);
}

/*
** Character's equip method, equip a materia to the Character.
**
** @param AMateria *materia
** @return void
*/
void			Character::equip( AMateria *materia ) {
	if (_materiaCount >= MAX_MATERIA) {
		cout << BOLD_RED << "[" << typeid(*this).name() + 1 << "] " RESET UNDERLINE_WHITE;
		cout <<  _name << RED" can't equip more materia !" << RESET << endl;
		return ;
	} else if (!materia) {
		cout << BOLD_RED << "[" << typeid(*this).name() + 1 << "] " RESET UNDERLINE_WHITE;
		cout <<  _name << RED" can't equip NULL materia !" << RESET << endl;
		return ;
	}
	for (int i = 0; i < MAX_MATERIA; i++) {
		if (!_inventory[i]) {
			_inventory[i] = materia;
			_materiaCount++;
			cout << BOLD_YELLOW << "[" << typeid(*this).name() + 1 << "] " RESET UNDERLINE_WHITE;
			cout <<  _name << YELLOW" equiped materia at index " << i << RESET << endl;
			return ;
		}
	}
}

/*
** Character's unequip method, unequip a materia to the Character.
**
** @param int idx
** @return void
*/
void			Character::unequip( int idx ) {
	if (idx < 0 || idx >= MAX_MATERIA) {
		cout << BOLD_RED << "[" << typeid(*this).name() + 1 << "] " RESET UNDERLINE_WHITE;
		cout <<  _name << RED" can't unequip materia at index " << idx << RESET << endl;
	} else if (!_inventory[idx]) {
		cout << BOLD_RED << "[" << typeid(*this).name() + 1 << "] " RESET UNDERLINE_WHITE;
		cout <<  _name << RED" can't unequip NULL materia !" << RESET << endl;
	} else {
		_inventory[idx] = NULL;
		_materiaCount--;
		cout << BOLD_YELLOW << "[" << typeid(*this).name() + 1 << "] " RESET UNDERLINE_WHITE;
		cout <<  _name << YELLOW" unequiped materia at index " << idx << RESET << endl;
	}
}

/*
** Character's use method, use a materia to the Character.
**
** @param int idx
** @param ICharacter &target
** @return void
*/
void			Character::use( int idx, ICharacter &target ) {
	if (idx < 0 || idx >= MAX_MATERIA) {
		cout << BOLD_RED << "[" << typeid(*this).name() + 1 << "] " RESET UNDERLINE_WHITE;
		cout <<  _name << RED" can't use materia at index " << idx << RESET << endl;
	} else if (!_inventory[idx]) {
		cout << BOLD_RED << "[" << typeid(*this).name() + 1 << "] " RESET UNDERLINE_WHITE;
		cout <<  _name << RED" can't use NULL materia !" << RESET << endl;
	} else {
		_inventory[idx]->use(target);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 12:23:45 by axlamber          #+#    #+#             */
/*   Updated: 2023/03/16 16:05:11 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/*
** WrongAnimal's default constructor, set type to "WrongAnimal" and name to "Wild WrongAnimal" and print
** a message to say that the WrongAnimal is alive. 
**
** @param void
** @return void
*/
WrongAnimal::WrongAnimal( void ) {
	_type = "WrongAnimal";
	_name = "Wild wrong animal";
	cout << BOLD_GREEN"[WrongAnimal] " GREEN << _name << " created !" << endl;
}

/*
** WrongAnimal's constructor, set type to "WrongAnimal" and name to the given parameter and print
** a message to say that the WrongAnimal is alive.
**
** @param string name
** @return void
*/
WrongAnimal::WrongAnimal( string name ) {
	_type = "WrongAnimal";
	_name = name;
	cout << BOLD_GREEN"[WrongAnimal] " GREEN << _name << " created !" << endl;
}

/*
** WrongAnimal's copy constructor, set type to "WrongAnimal" and name to the given parameter and print
** a message to say that the WrongAnimal is alive.
**
** @param WrongAnimal const & src
** @return void
*/
WrongAnimal::WrongAnimal( WrongAnimal const & src ) {
	*this = src;
	cout << BOLD_GREEN"[WrongAnimal] " GREEN << _name << " created by copy" << endl;
}

/*
** WrongAnimal's assignation operator overload, set type to "WrongAnimal" and name to the given parameter and print
** a message to say that the WrongAnimal is alive.
**
** @param WrongAnimal const & src
** @return WrongAnimal
*/
WrongAnimal	&WrongAnimal::operator=( WrongAnimal const & src ) {
	if (this != &src) {
		_type = src.getType();
		_name = src.getName();
	}
	cout << BOLD_GREEN"[WrongAnimal] " GREEN << _name << " created by assignation" << endl;
	return (*this);
}

/*
** WrongAnimal's destructor, print a message to say that the WrongAnimal is dead.
**
** @param void
** @return void
*/
WrongAnimal::~WrongAnimal( void ) {
	cout << BOLD_RED"[WrongAnimal] " RED << _name << " destroyed !" RESET << endl;
}

/*
** WrongAnimal's getter for type attribute.
**
** @param void
** @return string
*/
string	WrongAnimal::getType( void ) const {
	return (_type);
}

/*
** WrongAnimal's getter for name attribute.
**
** @param void
** @return string
*/
string	WrongAnimal::getName( void ) const {
	return (_name);
}

/*
** WrongAnimal's makeSound method, print a random animal sound.
**
** @param void
** @return void
*/
void	WrongAnimal::makeSound( void ) const {
	cout << BOLD_MAGENTA << "[WrongAnimal] " << _name << ": \033[3m*random wrong animal sound*" RESET << endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 12:23:45 by axlamber          #+#    #+#             */
/*   Updated: 2023/03/16 15:36:28 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*
** Animal's default constructor, set type to "Animal" and name to "Wild Animal" and print
** a message to say that the Animal is alive. 
**
** @param void
** @return void
*/
Animal::Animal( void ) {
	_type = "Animal";
	_name = "Wild animal";
	cout << BOLD_GREEN"[Animal] " GREEN << _name << " created !" << endl;
}

/*
** Animal's constructor, set type to "Animal" and name to the given parameter and print
** a message to say that the Animal is alive.
**
** @param string name
** @return void
*/
Animal::Animal( string name ) {
	_type = "Animal";
	_name = name;
	cout << BOLD_GREEN"[Animal] " GREEN << _name << " created !" << endl;
}

/*
** Animal's copy constructor, set type to "Animal" and name to the given parameter and print
** a message to say that the Animal is alive.
**
** @param Animal const & src
** @return void
*/
Animal::Animal( Animal const & src ) {
	*this = src;
	cout << BOLD_GREEN"[Animal] " GREEN << _name << " created by copy" << endl;
}

/*
** Animal's assignation operator overload, set type to "Animal" and name to the given parameter and print
** a message to say that the Animal is alive.
**
** @param Animal const & src
** @return Animal
*/
Animal	&Animal::operator=( Animal const & src ) {
	if (this != &src) {
		_type = src.getType();
		_name = src.getName();
	}
	cout << BOLD_GREEN"[Animal] " GREEN << _name << " created by assignation" << endl;
	return (*this);
}

/*
** Animal's destructor, print a message to say that the Animal is dead.
**
** @param void
** @return void
*/
Animal::~Animal( void ) {
	cout << BOLD_RED"[Animal] " RED << _name << " destroyed !" RESET << endl;
}

/*
** Animal's getter for type attribute.
**
** @param void
** @return string
*/
string	Animal::getType( void ) const {
	return (_type);
}

/*
** Animal's getter for name attribute.
**
** @param void
** @return string
*/
string	Animal::getName( void ) const {
	return (_name);
}

/*
** Animal's makeSound method, print a random animal sound.
**
** @param void
** @return void
*/
void	Animal::makeSound( void ) const {
	cout << BOLD_MAGENTA << "[Animal] " << _name << ": \033[3m*random animal sound*" RESET << endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:28:31 by axlamber          #+#    #+#             */
/*   Updated: 2023/03/16 16:08:06 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*
** Dog's default constructor, set type to "Dog" and name to "Wild Dog" and print
** a message to say that the Dog is alive. 
**
** @param void
** @return void
*/
Dog::Dog( void ) : Animal("Wild dog"){
	_type = "Dog";
	_name = "Wild Dog";
	cout << BOLD_GREEN"[Dog] " GREEN << _name << " created !" << endl;
}

/*
** Dog's constructor, set type to "Dog" and name to the given parameter and print
** a message to say that the Dog is alive.
**
** @param string name
** @return void
*/
Dog::Dog( string name ) : Animal(name) {
	_type = "Dog";
	_name = name;
	cout << BOLD_GREEN"[Dog] " GREEN << _name << " created !" << endl;
}

/*
** Dog's copy constructor, set type to "Dog" and name to the given parameter and print
** a message to say that the Dog is alive.
**
** @param Dog const & src
** @return void
*/
Dog::Dog( Dog const & src ) : Animal(src){
	*this = src;
	cout << BOLD_GREEN"[Dog] " GREEN << _name << " created by copy" << endl;
}

/*
** Dog's assignation operator overload, set type to "Dog" and name to the given parameter and print
** a message to say that the Dog is alive.
**
** @param Dog const & src
** @return Dog
*/
Dog	&Dog::operator=( Dog const & src ) {
	if (this != &src)
	{
		_type = src.getType();
		_name = src.getName();
	}
	cout << BOLD_GREEN"[Dog] " GREEN << _name << " created by assignation " << endl;
	return (*this);
}

/*
** Dog's destructor, print a message to say that the Dog is dead.
**
** @param void
** @return void
*/
Dog::~Dog( void ) {
	cout << BOLD_RED"[Dog] " RED << _name << " destroyed !" RESET << endl;
}

/*
** Dog's getter for type attribute.
**
** @param void
** @return string
*/
string	Dog::getType( void ) const {
	return (_type);
}

/*
** Dog's getter for name attribute.
**
** @param void
** @return string
*/
string	Dog::getName( void ) const {
	return (_name);
}

/*
** Dog's function to make a sound. Print a message to say that the Dog is making a sound.
**
** @param void
** @return void
*/
void	Dog::makeSound( void ) const {
	cout << BOLD_MAGENTA << "[Dog] " << _name << ": \033[3m*Woafff*" RESET << endl;
}

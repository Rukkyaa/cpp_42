/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:28:31 by axlamber          #+#    #+#             */
/*   Updated: 2023/03/16 15:36:34 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/*
** WrongCat's default constructor, set type to "WrongCat" and name to "Wild cat" and print
** a message to say that the WrongCat is alive. 
**
** @param void
** @return void
*/
WrongCat::WrongCat( void ) : WrongAnimal("Wild wrong cat"){
	_type = "WrongCat";
	_name = "Wild cat";
	cout << BOLD_GREEN"[WrongCat] " GREEN << _name << " created !" << endl;
}

/*
** WrongCat's constructor, set type to "WrongCat" and name to the given parameter and print
** a message to say that the WrongCat is alive.
**
** @param string name
** @return void
*/
WrongCat::WrongCat( string name ) : WrongAnimal(name) {
	_type = "WrongCat";
	_name = name;
	cout << BOLD_GREEN"[WrongCat] " GREEN << _name << " created !" << endl;
}

/*
** WrongCat's copy constructor, set type to "WrongCat" and name to the given parameter and print
** a message to say that the WrongCat is alive.
**
** @param WrongCat const & src
** @return void
*/
WrongCat::WrongCat( WrongCat const & src ) : WrongAnimal(src){
	*this = src;
	cout << BOLD_GREEN"[WrongCat] " GREEN << _name << " created by copy" << endl;
}

/*
** WrongCat's assignation operator overload, set type to "WrongCat" and name to the given parameter and print
** a message to say that the WrongCat is alive.
**
** @param WrongCat const & src
** @return WrongCat
*/
WrongCat&WrongCat::operator=( WrongCat const & src ) {
	if (this != &src)
	{
		_type = src.getType();
		_name = src.getName();
	}
	cout << BOLD_GREEN"[WrongCat] " GREEN << _name << " created by assignation " << endl;
	return (*this);
}

/*
** WrongCat's destructor, print a message to say that the WrongCat is dead.
**
** @param void
** @return void
*/
WrongCat::~WrongCat( void ) {
	cout << BOLD_RED"[WrongCat] " RED << _name << " destroyed !" RESET << endl;
}

/*
** WrongCat's getter for type attribute.
**
** @param void
** @return string
*/
string	WrongCat::getType( void ) const {
	return (_type);
}

/*
** WrongCat's getter for name attribute.
**
** @param void
** @return string
*/
string	WrongCat::getName( void ) const {
	return (_name);
}

/*
** WrongCat's function to make a sound. Print a message to say that the WrongCat is making a sound.
**
** @param void
** @return void
*/
void	WrongCat::makeSound( void ) const {
	cout << BOLD_MAGENTA << "[WrongCat] " << _name << ": \033[3m*CuiCui*" RESET << endl;
}

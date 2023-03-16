/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:28:31 by axlamber          #+#    #+#             */
/*   Updated: 2023/03/16 15:36:34 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*
** Cat's default constructor, set type to "Cat" and name to "Wild cat" and print
** a message to say that the Cat is alive. 
**
** @param void
** @return void
*/
Cat::Cat( void ) : Animal("Wild cat"){
	_type = "Cat";
	_name = "Wild cat";
	cout << BOLD_GREEN"[Cat] " GREEN << _name << " created !" << endl;
}

/*
** Cat's constructor, set type to "Cat" and name to the given parameter and print
** a message to say that the Cat is alive.
**
** @param string name
** @return void
*/
Cat::Cat( string name ) : Animal(name) {
	_type = "Cat";
	_name = name;
	cout << BOLD_GREEN"[Cat] " GREEN << _name << " created !" << endl;
}

/*
** Cat's copy constructor, set type to "Cat" and name to the given parameter and print
** a message to say that the Cat is alive.
**
** @param Cat const & src
** @return void
*/
Cat::Cat( Cat const & src ) : Animal(src){
	*this = src;
	cout << BOLD_GREEN"[Cat] " GREEN << _name << " created by copy" << endl;
}

/*
** Cat's assignation operator overload, set type to "Cat" and name to the given parameter and print
** a message to say that the Cat is alive.
**
** @param Cat const & src
** @return Cat
*/
Cat&Cat::operator=( Cat const & src ) {
	if (this != &src)
	{
		_type = src.getType();
		_name = src.getName();
	}
	cout << BOLD_GREEN"[Cat] " GREEN << _name << " created by assignation " << endl;
	return (*this);
}

/*
** Cat's destructor, print a message to say that the Cat is dead.
**
** @param void
** @return void
*/
Cat::~Cat( void ) {
	cout << BOLD_RED"[Cat] " RED << _name << " destroyed !" RESET << endl;
}

/*
** Cat's getter for type attribute.
**
** @param void
** @return string
*/
string	Cat::getType( void ) const {
	return (_type);
}

/*
** Cat's getter for name attribute.
**
** @param void
** @return string
*/
string	Cat::getName( void ) const {
	return (_name);
}

/*
** Cat's function to make a sound. Print a message to say that the Cat is making a sound.
**
** @param void
** @return void
*/
void	Cat::makeSound( void ) const {
	cout << BOLD_MAGENTA << "[Cat] " << _name << ": \033[3m*Meowwww*" RESET << endl;
}

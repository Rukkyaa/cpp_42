/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:28:31 by axlamber          #+#    #+#             */
/*   Updated: 2023/03/16 17:37:34 by axlamber         ###   ########.fr       */
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
	_brain = new Brain();
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
	_brain = new Brain();
	cout << BOLD_GREEN"[Cat] " GREEN << _name << " created !" << endl;
}

/*
** Cat's copy constructor, set type to "Cat" and name to the given parameter and print
** a message to say that the Cat is alive.
**
** @param Cat const &rhs
** @return void
*/
Cat::Cat( Cat const &rhs ) : Animal(rhs){
	*this = rhs;
	cout << BOLD_GREEN"[Cat] " GREEN << _name << " created by copy" << endl;
}

/*
** Cat's assignation operator overload, set type to "Cat" and name to the given parameter and print
** a message to say that the Cat is alive.
**
** @param Cat const & rhs
** @return Cat
*/
Cat	&Cat::operator=( Cat const &rhs ) {
	if (this != &rhs)
	{
		_type = rhs.getType();
		_name = rhs.getName();
		_brain = new Brain(*rhs._brain);
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
	delete _brain;
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

/*
** Cat's function to add an idea to the brain. Print a message to say that the Cat is adding an idea.
**
** @param string idea
** @return void
*/
void	Cat::addIdea( string idea ) const {
	_brain->addIdea(idea);
}

/*
** Cat's function to print all the ideas of the brain. Print a message to say that the Cat is printing all the ideas.
**
** @param void
** @return void
*/
void	Cat::printIdeas( void ) const {
	_brain->printIdeas();
}

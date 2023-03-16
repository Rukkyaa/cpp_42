/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:28:31 by axlamber          #+#    #+#             */
/*   Updated: 2023/03/16 18:02:36 by axlamber         ###   ########.fr       */
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
	_brain = new Brain();
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
	_brain = new Brain();
	cout << BOLD_GREEN"[Dog] " GREEN << _name << " created !" << endl;
}

/*
** Dog's copy constructor, set type to "Dog" and name to the given parameter and print
** a message to say that the Dog is alive.
**
** @param Dog const &rhs
** @return void
*/
Dog::Dog( Dog const &rhs ) : Animal(rhs){
	*this = rhs;
	cout << BOLD_GREEN"[Dog] " GREEN << _name << " created by copy" << endl;
}

/*
** Dog's assignation operator overload, set type to "Dog" and name to the given parameter and print
** a message to say that the Dog is alive.
**
** @param Dog const &rhs
** @return Dog
*/
Dog	&Dog::operator=( Dog const &rhs ) {
	if (this != &rhs)
	{
		_type = rhs.getType();
		_name = rhs.getName();
		_brain = new Brain(*rhs._brain);
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
	delete _brain;
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

/*
** Dog's function to add an idea to the brain. Print a message to say that the Dog is adding an idea.
**
** @param string idea
** @return void
*/
void	Dog::addIdea( string idea ) const {
	_brain->addIdea(idea);
}

/*
** Dog's function to print all the ideas of the brain. Print a message to say that the Dog is printing all the ideas.
**
** @param void
** @return void
*/
void	Dog::printIdeas( void ) const {
	_brain->printIdeas();
}

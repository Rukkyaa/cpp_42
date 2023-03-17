/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 12:30:03 by axlamber          #+#    #+#             */
/*   Updated: 2023/03/17 12:56:13 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/*
** Ice's default constructor, set type to "ice".
** a message to say that the Ice is created is displayed if DEBUG is defined.
**
** @param void
** @return void
*/
Ice::Ice( void ) : AMateria("ice") {
	#ifdef DEBUG
		cout << BOLD_GREEN << "[" << typeid(*this).name() + 1 << "] " RESET UNDERLINE_WHITE;
		cout <<  _type << GREEN" created !" << RESET << endl;
	#endif
}

/*
** Ice's copy constructor, copy the given Ice.
** a message to say that the Ice is created is displayed if DEBUG is defined.
**
** @param Ice const &rhs
** @return void
*/
Ice::Ice( Ice const &rhs ) : AMateria(rhs) {
	*this = rhs;
	#ifdef DEBUG
		cout << BOLD_GREEN << "[" << typeid(*this).name() + 1 << "] " RESET UNDERLINE_WHITE;
		cout <<  _type << GREEN" created by copy !" << RESET << endl;
	#endif
}

/*
** Ice's operator= overload, copy the given Ice.
** a message to say that the Ice is created is displayed if DEBUG is defined.
**
** @param Ice const &rhs
** @return Ice
*/
Ice	&Ice::operator=( Ice const &rhs ) {
	if (this != &rhs)
		_type = rhs._type;
	#ifdef DEBUG
		cout << BOLD_GREEN << "[" << typeid(*this).name() + 1 << "] " RESET UNDERLINE_WHITE;
		cout <<  _type << GREEN" assignation operator called !" << RESET << endl;
	#endif
	return (*this);
}

/*
** Ice's default destructor, set type to "ice".
** a message to say that the Ice is destroyed is displayed if DEBUG is defined.
**
** @param void
** @return void
*/
Ice::~Ice( void ) {
	#ifdef DEBUG
		cout << BOLD_RED << "[" << typeid(*this).name() + 1 << "] " RESET UNDERLINE_WHITE;
		cout <<  _type << RED" destroyed !" << RESET << endl;
	#endif
}

/*
** Ice's clone method, create a new Ice.
**
** @param void
** @return AMateria*
*/
AMateria	*Ice::clone( void ) const {
	return (new Ice(*this));
}

/*
** Ice's use method, display a message.
**
** @param ICharacter const &target
** @return void
*/
void		Ice::use( ICharacter &target ) {
	cout << BOLD_BLUE << "[" << typeid(*this).name() + 1 << "] " RESET UNDERLINE_WHITE;
	cout << BLUE << "* shoots an ice bolt at " RESET UNDERLINE_WHITE<< target.getName() << BLUE" *" << RESET << endl;
}

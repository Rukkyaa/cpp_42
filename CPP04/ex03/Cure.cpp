/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 12:30:03 by axlamber          #+#    #+#             */
/*   Updated: 2023/03/17 12:48:50 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

/*
** Cure's default constructor, set type to "cure".
** a message to say that the Cure is created is displayed if DEBUG is defined.
**
** @param void
** @return void
*/
Cure::Cure( void ) : AMateria("cure") {
	#ifdef DEBUG
		cout << BOLD_GREEN << "[" << typeid(*this).name() + 1 << "] " RESET UNDERLINE_WHITE;
		cout <<  _type << GREEN" created !" << RESET << endl;
	#endif
}

/*
** Cure's copy constructor, copy the given Cure.
** a message to say that the Cure is created is displayed if DEBUG is defined.
**
** @param Cure const &rhs
** @return void
*/
Cure::Cure( Cure const &rhs ) : AMateria(rhs) {
	*this = rhs;
	#ifdef DEBUG
		cout << BOLD_GREEN << "[" << typeid(*this).name() + 1 << "] " RESET UNDERLINE_WHITE;
		cout <<  _type << GREEN" created by copy !" << RESET << endl;
	#endif
}

/*
** Cure's operator= overload, copy the given Cure.
** a message to say that the Cure is created is displayed if DEBUG is defined.
**
** @param Cure const &rhs
** @return Cure
*/
Cure	&Cure::operator=( Cure const &rhs ) {
	if (this != &rhs)
		_type = rhs._type;
	#ifdef DEBUG
		cout << BOLD_GREEN << "[" << typeid(*this).name() + 1 << "] " RESET UNDERLINE_WHITE;
		cout <<  _type << GREEN" assignation operator called !" << RESET << endl;
	#endif
	return (*this);
}

/*
** Cure's default destructor, set type to "cure".
** a message to say that the Cure is destroyed is displayed if DEBUG is defined.
**
** @param void
** @return void
*/
Cure::~Cure( void ) {
	#ifdef DEBUG
		cout << BOLD_RED << "[" << typeid(*this).name() + 1 << "] " RESET UNDERLINE_WHITE;
		cout <<  _type << RED" destroyed !" << RESET << endl;
	#endif
}

/*
** Cure's clone method, create a new Cure.
**
** @param void
** @return AMateria*
*/
AMateria	*Cure::clone( void ) const {
	return (new Cure(*this));
}

/*
** Cure's use method, display a message.
**
** @param ICharacter const &target
** @return void
*/
void		Cure::use( ICharacter &target ) {
	cout << BOLD_BLUE << "* heals " << target.getName() << "'s wounds *" << RESET << endl;
}

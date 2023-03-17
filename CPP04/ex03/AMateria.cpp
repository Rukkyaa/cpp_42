/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 08:41:54 by axlamber          #+#    #+#             */
/*   Updated: 2023/03/17 11:12:58 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/*
** AMateria's default constructor, set type to the given type.
** a message to say that the AMateria is created is displayed if DEBUG is defined.
**
** @param string const &type
** @return void
*/
AMateria::AMateria( string const &type) : _type(type) {
	#ifdef DEBUG
		cout << BOLD_GREEN << "[" << typeid(*this).name() + 1 << "] " RESET UNDERLINE_WHITE;
		cout <<  _type << GREEN" created !" << RESET << endl;
	#endif
}

/*
** AMateria's copy constructor, set type to the given type.
** a message to say that the AMateria is created is displayed if DEBUG is defined.
**
** @param const AMateria &rhs
** @return void
*/
AMateria::AMateria( const AMateria &rhs ) {
	*this = rhs;
	#ifdef DEBUG
		cout << BOLD_GREEN << "[" << typeid(*this).name() + 1 << "] " RESET UNDERLINE_WHITE;
		cout <<  _type << GREEN" created by copy !" << RESET << endl;
	#endif
}

/*
** AMateria's assignation operator, set type to the given type.
** a message to say that the AMateria is created is displayed if DEBUG is defined.
**
** @param const AMateria &rhs
** @return AMateria
*/
AMateria	&AMateria::operator=( const AMateria &rhs ) {
	#ifdef DEBUG
		cout << BOLD_GREEN << "[" << typeid(*this).name() + 1 << "] " RESET UNDERLINE_WHITE;
		cout <<  _type << GREEN" created by assignation !" << RESET << endl;
	#endif
	if (this != &rhs) {
		_type = rhs._type;
	}
	return (*this);
}

/*
** AMateria's destructor, set type to the given type.
** a message to say that the AMateria is created is displayed if DEBUG is defined.
**
** @param void
** @return void
*/
AMateria::~AMateria( void ) {
	#ifdef DEBUG
		cout << BOLD_RED << "[" << typeid(*this).name() + 1 << "] " RESET UNDERLINE_WHITE;
		cout <<  _type << RED" destroyed !" << RESET << endl;
	#endif
}

/*
** AMateria's getType method, return the type of the AMateria.
**
** @param void
** @return string const &
*/
string const	&AMateria::getType() const {
	return (_type);
}

/*
** AMateria's use method, display a message to say that the AMateria is used.
**
** @param ICharacter &target
** @return void
*/
void	AMateria::use(ICharacter& target) {
	cout << BOLD_YELLOW << "[" << typeid(*this).name() + 1 << "] " RESET UNDERLINE_WHITE;
	cout << _type << YELLOW" use on " << target.getName() << endl;
}

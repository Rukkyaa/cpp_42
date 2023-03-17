/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 13:05:59 by axlamber          #+#    #+#             */
/*   Updated: 2023/03/17 13:34:35 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/*
** MateriaSource's default constructor, set count to 0.
** a message to say that the MateriaSource is created is displayed if DEBUG is defined.
**
** @param void
** @return void
*/
MateriaSource::MateriaSource( void ) : _count(0) {
	#ifdef DEBUG
		cout << BOLD_GREEN << "[" << typeid(*this).name() + 1 << "] " RESET UNDERLINE_WHITE;
		cout <<  "MateriaSource created !" << RESET << endl;
	#endif
	for (int i = 0; i < MAX_MATERIA; i++)
		_materia[i] = NULL;
}

/*
** MateriaSource's copy constructor, set type to the given type.
** a message to say that the MateriaSource is created is displayed if DEBUG is defined.
**
** @param MateriaSource const &rhs
** @return void
*/
MateriaSource::MateriaSource( MateriaSource const &rhs ) {
	*this = rhs;
	#ifdef DEBUG
		cout << BOLD_GREEN << "[" << typeid(*this).name() + 1 << "] " RESET UNDERLINE_WHITE;
		cout <<  "MateriaSource created by copy !" << RESET << endl;
	#endif
}

/*
** MateriaSource's assignation operator, set type to the given type.
** a message to say that the MateriaSource is created is displayed if DEBUG is defined.
**
** @param MateriaSource const &rhs
** @return void
*/
MateriaSource	&MateriaSource::operator=( MateriaSource const &rhs ) {
	if (this != &rhs) {
		for (int i = 0; i < MAX_MATERIA; i++)
			_materia[i] = rhs._materia[i];
		_count = rhs._count;
	}
	#ifdef DEBUG
		cout << BOLD_GREEN << "[" << typeid(*this).name() + 2 << "] " RESET UNDERLINE_WHITE;
		cout <<  "MateriaSource assignation operator called !" << RESET << endl;
	#endif
	return (*this);
}

/*
** MateriaSource's destructor.
** a message to say that the MateriaSource is destroyed is displayed if DEBUG is defined.
**
** @param void
** @return void
*/
MateriaSource::~MateriaSource( void ) {
	#ifdef DEBUG
		cout << BOLD_RED << "[" << typeid(*this).name() + 2 << "] " RESET UNDERLINE_WHITE;
		cout <<  "MateriaSource destroyed !" << RESET << endl;
	#endif
	for (int i = 0; i < MAX_MATERIA; i++)
		if (_materia[i])
			delete _materia[i];
}

/*
** MateriaSource's learnMateria method, learn a materia.
** error message is displayed if materia is NULL or if MateriaSource is full.
**
** @param AMateria *materia
** @return void
*/
void	MateriaSource::learnMateria( AMateria *materia ) {
	if (_count >= MAX_MATERIA) {
		cout << BOLD_RED << "MateriaSource is full !" << RESET << endl;
		return ;
	} else if (!materia) {
		cout << BOLD_RED << "MateriaSource can't learn NULL !" << RESET << endl;
		return ;
	}
	if (_count < MAX_MATERIA && materia) {
		_materia[_count] = materia;
		_count++;
	}
}

/*
** MateriaSource's createMateria method, create a materia.
** error message is displayed if MateriaSource can't create the materia.
**
** @param string const &type
** @return AMateria*
*/
AMateria	*MateriaSource::createMateria( string const &type ) {
	for (int i = 0; i < MAX_MATERIA; i++) {
		if (_materia[i] && _materia[i]->getType() == type)
			return (_materia[i]->clone());
	}
	cout << BOLD_RED << "MateriaSource can't create " << type << " !" << RESET << endl;
	return (NULL);
}

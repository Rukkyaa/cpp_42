/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 16:44:16 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/04/11 08:04:50 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ): _name("default"), _grade(150) {
	#ifdef DEBUG
		cout << BOLD_GREEN "[" << typeid(*this).name() + 2 << "] ";
		cout << RESET UNDERLINE_WHITE << _name << GREEN" created by default" RESET << endl;
	#endif
}

Bureaucrat::Bureaucrat( string name, int grade ): _name(name), _grade(grade) {
	if (_grade < MAX_GRADE)
		throw Bureaucrat::GradeTooHighException();
	else if (_grade > MIN_GRADE)
		throw Bureaucrat::GradeTooLowException();
	#ifdef DEBUG
		cout << BOLD_GREEN "[" << typeid(*this).name() + 2 << "] ";
		cout << RESET UNDERLINE_WHITE << _name << GREEN" created" RESET << endl;
	#endif
}

Bureaucrat::Bureaucrat( Bureaucrat const & src ): _name(src._name), _grade(src._grade) {
	#ifdef DEBUG
		cout << BOLD_GREEN "[" << typeid(*this).name() + 2 << "] ";
		cout << RESET UNDERLINE_WHITE << _name << GREEN" created by copy" RESET << endl;
	#endif
}

Bureaucrat	&Bureaucrat::operator=( Bureaucrat const & rhs ) {
	if (this != &rhs) {
		_grade = rhs._grade;
	}
	#ifdef DEBUG
		cout << BOLD_GREEN "[" << typeid(*this).name() + 2 << "] ";
		cout << RESET UNDERLINE_WHITE << _name << GREEN" created by assignation" RESET << endl;
	#endif
	return (*this);
}

Bureaucrat::~Bureaucrat( void ) {
	#ifdef DEBUG
		cout << BOLD_RED "[" << typeid(*this).name() + 2 << "] ";
		cout << RESET UNDERLINE_WHITE << _name << RED" destructed" RESET << endl;
	#endif
}

string	Bureaucrat::getName( void ) const {
	return (_name);
}

int		Bureaucrat::getGrade( void ) const {
	return (_grade);
}

void	Bureaucrat::incrementGrade( void ) {
	if (_grade - 1 < MAX_GRADE)
		throw Bureaucrat::GradeTooHighException();
	_grade -= 1;
}

void	Bureaucrat::decrementGrade( void ) {
	if (_grade + 1 > MIN_GRADE)
		throw Bureaucrat::GradeTooLowException();
	_grade += 1;
}

void	Bureaucrat::signForm( Form & form ) {
	try {
		form.beSigned(*this);
		cout << BOLD_GREEN "[" << typeid(*this).name() + 2 << "] ";
		cout << RESET UNDERLINE_WHITE << _name << GREEN" signs " << UNDERLINE_WHITE << form.getName() << RESET << endl;
	}
	catch (std::exception & e) {
		cout << BOLD_RED "[" << typeid(*this).name() + 2 << "] ";
		cout << RESET UNDERLINE_WHITE << _name << RED" cannot sign " << UNDERLINE_WHITE << form.getName() << RESET RED " because " << e.what() << RESET << endl;
	}
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return (BOLD_RED "[ERROR] " RED "Bureaucrat's grade is too high" RESET);
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return (BOLD_RED "[ERROR] " RED "Bureaucrat's grade is too low" RESET);
}

std::ostream	&operator<<( std::ostream & o, Bureaucrat const & rhs ) {
	o << BOLD_MAGENTA "[" << typeid(rhs).name() + 2 << "] ";
	o << RESET UNDERLINE_WHITE << rhs.getName() << RESET MAGENTA ", bureaucrat grade " << rhs.getGrade() << RESET;
	return (o);
}
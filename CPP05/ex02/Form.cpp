/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 07:06:46 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/04/11 16:54:47 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( void ): _name("default"), _signed(false), _gradeToSign(1), _gradeToExecute(1) {
	#ifdef DEBUG
		cout << BOLD_GREEN "[" << typeid(*this).name() + 1 << "] ";
		cout << RESET UNDERLINE_WHITE << _name << GREEN" created by default" RESET << endl;
	#endif
}

Form::Form( string name, int gradeToSign, int gradeToExecute ): _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
	if (_gradeToSign < MAX_GRADE)
		throw Form::GradeTooHighException();
	else if (_gradeToSign > MIN_GRADE)
		throw Form::GradeTooLowException();
	if (_gradeToExecute < MAX_GRADE)
		throw Form::GradeTooHighException();
	else if (_gradeToExecute > MIN_GRADE)
		throw Form::GradeTooLowException();
	#ifdef DEBUG
		cout << BOLD_GREEN "[" << typeid(*this).name() + 1 << "] ";
		cout << RESET UNDERLINE_WHITE << _name << GREEN" created" RESET << endl;
	#endif
}

Form::Form( Form const & src ): _name(src._name), _signed(src._signed), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute) {
	#ifdef DEBUG
		cout << BOLD_GREEN "[" << typeid(*this).name() + 1 << "] ";
		cout << RESET UNDERLINE_WHITE << _name << GREEN" created by copy" RESET << endl;
	#endif
}

Form	&Form::operator=( Form const & rhs ) {
	if (this != &rhs) {
		_signed = rhs._signed;
	}
	#ifdef DEBUG
		cout << BOLD_GREEN "[" << typeid(*this).name() + 1 << "] ";
		cout << RESET UNDERLINE_WHITE << _name << GREEN" acreated by assignation" RESET << endl;
	#endif
	return *this;
}

Form::~Form( void ) {
	#ifdef DEBUG
		cout << BOLD_GREEN "[" << typeid(*this).name() + 1 << "] ";
		cout << RESET UNDERLINE_WHITE << _name << GREEN" destroyed" RESET << endl;
	#endif
}

string	Form::getName( void ) const {
	return _name;
}

bool	Form::getSigned( void ) const {
	return _signed;
}

int		Form::getGradeToSign( void ) const {
	return _gradeToSign;
}

int		Form::getGradeToExecute( void ) const {
	return _gradeToExecute;
}

void	Form::beSigned( Bureaucrat const & bureaucrat ) {
	if (bureaucrat.getGrade() > _gradeToSign)
		throw Form::GradeTooLowException();
	else {
		_signed = true;
		cout << BOLD_GREEN "[" << typeid(*this).name() + 2 << "] ";
		cout << RESET UNDERLINE_WHITE << _name << GREEN" signed by " << bureaucrat.getName() << RESET << endl;
	}
}

const char	*Form::GradeTooHighException::what() const throw() {
	return (BOLD_RED "[Form] " RED"Bureaucrat's grade is too high" RESET);
}

const char	*Form::GradeTooLowException::what() const throw() {
	return (BOLD_RED "[Form] " RED"Bureaucrat's grade is too low" RESET);
}

const char	*Form::NotSignedException::what() const throw() {
	return (BOLD_RED "[Form] " RED"Form is not signed" RESET);
}

const char	*Form::FileException::what() const throw() {
	return (BOLD_RED "[Form] " RED"Error while opening the file" RESET);
}

void	Form::execute( Bureaucrat const & executor ) const {
	if (executor.getGrade() > _gradeToExecute)
		throw Form::GradeTooLowException();
	else if (!_signed)
		throw Form::NotSignedException();
}

std::ostream	&operator<<( std::ostream & o, Form const & rhs ) {
	o << BOLD_GREEN "[" << typeid(rhs).name() + 1 << "] ";
	o << RESET UNDERLINE_WHITE << rhs.getName() << GREEN" form" RESET << endl;
	o << BOLD_GREEN "Grade to sign: " << RESET << rhs.getGradeToSign() << endl;
	o << BOLD_GREEN "Grade to execute: " << RESET << rhs.getGradeToExecute() << endl;
	o << BOLD_GREEN "Signed: " << RESET << (rhs.getSigned() ? GREEN"Yes" RESET : RED"No" RESET) << endl;
	return o;
}

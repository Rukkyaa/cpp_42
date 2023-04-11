/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 13:52:58 by axlamber          #+#    #+#             */
/*   Updated: 2023/04/11 16:53:14 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) : Form("PresidentialPardonForm", 25, 5), _target("default") {
	#ifdef DEBUG
		cout << BOLD_GREEN "[" << typeid(*this).name() + 1 << "] ";
		cout << RESET UNDERLINE_WHITE << _name << GREEN" created by default" RESET << endl;
	#endif
}

PresidentialPardonForm::PresidentialPardonForm(string target) : Form("PresidentialPardonForm", 25, 5) {
	_target = target;
	#ifdef DEBUG
		cout << BOLD_GREEN "[" << typeid(*this).name() + 1 << "] ";
		cout << RESET UNDERLINE_WHITE << _name << GREEN" created" RESET << endl;
	#endif
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const &rhs ) : Form(rhs) {
	_target = rhs._target;
	#ifdef DEBUG
		cout << BOLD_GREEN "[" << typeid(*this).name() + 1 << "] ";
		cout << RESET UNDERLINE_WHITE << _name << GREEN" created by copy" RESET << endl;
	#endif
}

PresidentialPardonForm	&PresidentialPardonForm::operator=( PresidentialPardonForm const &rhs ) {
	if (this != &rhs) {
		_target = rhs._target;
	}
	#ifdef DEBUG
		cout << BOLD_GREEN "[" << typeid(*this).name() + 1 << "] ";
		cout << RESET UNDERLINE_WHITE << _name << GREEN" acreated by assignation" RESET << endl;
	#endif
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm( void ) {
	#ifdef DEBUG
		cout << BOLD_RED "[" << typeid(*this).name() + 1 << "] ";
		cout << RESET UNDERLINE_WHITE << _name << RED" destroyed" RESET << endl;
	#endif
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	Form::execute(executor);
	
	cout << BOLD_BLUE << _target << " has been pardoned by Zafod Beeblebrox" << RESET << endl;
}
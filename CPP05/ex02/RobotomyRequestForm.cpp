/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 13:52:58 by axlamber          #+#    #+#             */
/*   Updated: 2023/04/15 22:19:54 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ) : Form("RobotomyRequestForm", 72, 45), _target("default") {
	#ifdef DEBUG
		cout << BOLD_GREEN "[" << typeid(*this).name() + 2 << "] ";
		cout << RESET UNDERLINE_WHITE << _name << GREEN" created by default" RESET << endl;
	#endif
}

RobotomyRequestForm::RobotomyRequestForm(string target) : Form("RobotomyRequestForm", 72, 45) {
	_target = target;
	#ifdef DEBUG
		cout << BOLD_GREEN "[" << typeid(*this).name() + 2 << "] ";
		cout << RESET UNDERLINE_WHITE << _name << GREEN" created" RESET << endl;
	#endif
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const &rhs ) : Form(rhs) {
	_target = rhs._target;
	#ifdef DEBUG
		cout << BOLD_GREEN "[" << typeid(*this).name() + 2 << "] ";
		cout << RESET UNDERLINE_WHITE << _name << GREEN" created by copy" RESET << endl;
	#endif
}

RobotomyRequestForm	&RobotomyRequestForm::operator=( RobotomyRequestForm const &rhs ) {
	if (this != &rhs) {
		_target = rhs._target;
	}
	#ifdef DEBUG
		cout << BOLD_GREEN "[" << typeid(*this).name() + 2 << "] ";
		cout << RESET UNDERLINE_WHITE << _name << GREEN" acreated by assignation" RESET << endl;
	#endif
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm( void ) {
	#ifdef DEBUG
		cout << BOLD_RED "[" << typeid(*this).name() + 2 << "] ";
		cout << RESET UNDERLINE_WHITE << _name << RED" destroyed" RESET << endl;
	#endif
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const {
	Form::execute(executor);
	srand(time(NULL));
	cout << BOLD_BLUE << "* drilling noises *" << RESET << endl;
	if (rand() % 2)
		cout << BOLD_GREEN << _target << " has been robotomized successfully" << RESET << endl;
	else
		cout << BOLD_RED << _target << " robotomization failed" << RESET << endl;
}
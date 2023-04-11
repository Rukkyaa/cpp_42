/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 07:06:46 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/04/11 17:18:09 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern( void ) {
	#ifdef DEBUG
		cout << BOLD_GREEN "[" << typeid(*this).name() + 1 << "] ";
		cout << RESET UNDERLINE_WHITE << _name << GREEN" created by default" RESET << endl;
	#endif
}

Intern::Intern( Intern const &rhs ) {
	#ifdef DEBUG
		cout << BOLD_GREEN "[" << typeid(*this).name() + 1 << "] ";
		cout << RESET UNDERLINE_WHITE << _name << GREEN" created by copy" RESET << endl;
	#endif
	*this = rhs;
}

Intern	&Intern::operator=( Intern const &rhs ) {
	#ifdef DEBUG
		cout << BOLD_GREEN "[" << typeid(*this).name() + 1 << "] ";
		cout << RESET UNDERLINE_WHITE << _name << GREEN" acreated by assignation" RESET << endl;
	#endif
	(void)rhs;
	return *this;
}

Intern::~Intern( void ) {
	#ifdef DEBUG
		cout << BOLD_RED "[" << typeid(*this).name() + 1 << "] ";
		cout << RESET UNDERLINE_WHITE << _name << RED" destroyed" RESET << endl;
	#endif
}

const char	*Intern::FormNotFoundException::what() const throw() {
	return (BOLD_RED "[Intern] " RED"Form not found" RESET);
}

Form	*Intern::makeForm( string name, string target ) {
	Form	*ret = NULL;

	string formName[3] = {
		"robotomy request",
		"presidential pardon",
		"shrubbery creation"
	};
	Form	*form[3] = {
		new RobotomyRequestForm(target),
		new PresidentialPardonForm(target),
		new ShrubberyCreationForm(target)
	};
	for (int i = 0; i < 3; i++) {
		if (name == formName[i])
			ret = form[i];
		else
			delete form[i];
	}
	if (ret == NULL)
		throw Intern::FormNotFoundException();
	return ret;
}
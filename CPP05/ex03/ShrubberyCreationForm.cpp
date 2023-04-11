/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 13:52:58 by axlamber          #+#    #+#             */
/*   Updated: 2023/04/11 16:22:30 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ) : Form("ShrubberyCreationForm", 145, 137), _target("default") {
	#ifdef DEBUG
		cout << BOLD_GREEN "[" << typeid(*this).name() + 1 << "] ";
		cout << RESET UNDERLINE_WHITE << _name << GREEN" created by default" RESET << endl;
	#endif
}

ShrubberyCreationForm::ShrubberyCreationForm(string target) : Form("ShrubberyCreationForm", 145, 137) {
	_target = target;
	#ifdef DEBUG
		cout << BOLD_GREEN "[" << typeid(*this).name() + 1 << "] ";
		cout << RESET UNDERLINE_WHITE << _name << GREEN" created" RESET << endl;
	#endif
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const &rhs ) : Form(rhs) {
	_target = rhs._target;
	#ifdef DEBUG
		cout << BOLD_GREEN "[" << typeid(*this).name() + 1 << "] ";
		cout << RESET UNDERLINE_WHITE << _name << GREEN" created by copy" RESET << endl;
	#endif
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=( ShrubberyCreationForm const &rhs ) {
	if (this != &rhs) {
		_target = rhs._target;
	}
	#ifdef DEBUG
		cout << BOLD_GREEN "[" << typeid(*this).name() + 1 << "] ";
		cout << RESET UNDERLINE_WHITE << _name << GREEN" acreated by assignation" RESET << endl;
	#endif
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {
	#ifdef DEBUG
		cout << BOLD_RED "[" << typeid(*this).name() + 1 << "] ";
		cout << RESET UNDERLINE_WHITE << _name << RED" destroyed" RESET << endl;
	#endif
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	char	c;

	if (executor.getGrade() > getGradeToExecute())
		throw Form::GradeTooLowException();
	else if (getSigned() == false)
		throw Form::NotSignedException();
	else {
        ifstream treeFile("tree");
        if (!treeFile.is_open())
            throw Form::FileException();

        ofstream shrubberyFile((_target + "_shrubbery").c_str());
        if (!shrubberyFile.is_open())
            throw Form::FileException();
			
        while (treeFile.get(c)) {
            shrubberyFile << c;
        }

        treeFile.close();
        shrubberyFile.close();
    }
}
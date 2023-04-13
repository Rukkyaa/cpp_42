/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 16:38:49 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/04/13 14:12:26 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	Intern		*intern = new Intern();
	Bureaucrat	*internB = new Bureaucrat("Intern", 1);
	Form		*form;
	Form		*form2;

	try {
		form = intern->makeForm("shrubbery creation", "forest");
		internB->signForm(*form);
		internB->executeForm(*form);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		form2 = intern->makeForm("wrong form", "Bender");
		internB->signForm(*form2);
		internB->executeForm(*form2);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	delete form;
	delete form2;
	delete intern;
	delete internB;
	return (0);
}
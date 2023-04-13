/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 16:38:49 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/04/13 12:01:00 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
// void	lowError(void)
// {
// 	Bureaucrat	waluigi("Waluigi", 150);
// 	Form		mariage("Mariage de peach", 50, 1);

// 	cout << endl << waluigi << endl << endl << mariage << endl;
// 	cout << YELLOW << "Waluigi tries to sign \"Mariage de peach\"..." << RESET << endl;
// 	try {
// 		waluigi.signForm(mariage);
// 	} catch (exception &e) {
// 		cout << e.what() << endl;
// 	} try {
// 		cout << endl << YELLOW << "Creating form \"Looser Form\" with 151 as grade to sign and 1 as grade to execute..." << RESET << endl;
// 		Form		looserForm("Looser Form", 151, 1);
// 	} catch (exception &e) {
// 		cout << e.what() << endl;
// 	} try {
// 		cout << endl << YELLOW << "Creating form \"Looser Form\" with 1 as grade to sign and 151 as grade to execute..." << RESET << endl;
// 		Form		looserForm("Looser Form", 1, 151);
// 	} catch (exception &e) {
// 		cout << e.what() << endl;
// 	}
// }

// void	highError( void )
// {
// 	try {
// 		cout << YELLOW << "Creating form \"Winner Form\" with 0 as grade to sign and 1 as grade to execute..." << RESET << endl;
// 		Form		winnerForm("Winner Form", 0, 1);
// 	} catch (exception &e) {
// 		cout << e.what() << endl;
// 	} try {
// 		cout << endl << YELLOW << "Creating form \"Winner Form\" with 1 as grade to sign and 0 as grade to execute..." << RESET << endl;
// 		Form		winnerForm("Winner Form", 1, 0);
// 	} catch (exception &e) {
// 		cout << e.what() << endl;
// 	}
// }

void	shrubberyHeader(void) {
	cout << "\033[2J\033[1;1H";
	cout << BOLD_WHITE"╔═══════════════════════════════════════════════════╗" << endl;
    cout << BOLD_WHITE"╠═══════════════════════════════════════════════════╣" << endl;
    cout << BOLD_WHITE"║          🌳 SOME TESTS FOR SHRUBBERY 🌳           ║" << endl;
    cout << BOLD_WHITE"╠═══════════════════════════════════════════════════╣" << endl;
    cout << BOLD_WHITE"╚═══════════════════════════════════════════════════╝" << endl << endl;
}

void	robotomyHeader(void) {
	cout << "\033[2J\033[1;1H";
	cout << BOLD_WHITE"╔═══════════════════════════════════════════════════╗" << endl;
    cout << BOLD_WHITE"╠═══════════════════════════════════════════════════╣" << endl;
    cout << BOLD_WHITE"║           🤖 SOME TESTS FOR ROBOTOMY 🤖           ║" << endl;
    cout << BOLD_WHITE"╠═══════════════════════════════════════════════════╣" << endl;
    cout << BOLD_WHITE"╚═══════════════════════════════════════════════════╝" << endl << endl;
}

void	shrubberyDemo(void) {
	shrubberyHeader();
	cout << YELLOW << "Creating bureaucrat with name \"Bowser\" and grade 1..." << RESET << endl;
	Bureaucrat	*Bowser = new Bureaucrat("Bowser", 1);
	cout << YELLOW << "Creating a ShrubberyCreationForm with \"forest\" as destination" << RESET << endl;
	ShrubberyCreationForm	*shrubbery = new ShrubberyCreationForm("forest");
	cout << YELLOW << "Let's see if the form is ok..." << RESET << endl << endl;
	cout << *Bowser << endl << endl << *shrubbery << endl;

	cout << GREEN << "Press enter to continue..." << RESET << endl;
	cin.get();
	shrubberyHeader();

	// No signed form
	cout << YELLOW << "Trying to execute \"ShrubberyCreationForm\" without signing it..." << RESET << endl;
	try {
		Bowser->executeForm(*shrubbery);
	} catch (exception &e) {
		cout << e.what() << endl;
	}
	cin.get();

	// No permission to sign
	cout << YELLOW << "Trying to sign \"ShrubberyCreationForm\" with a bureaucrat of grade 150..." << RESET << endl;
	try {
		Bureaucrat	waluigi = Bureaucrat("Waluigi", 150);
		waluigi.signForm(*shrubbery);
	} catch (exception &e) {
		cout << e.what() << endl;
	}
	cin.get();

	// Sign form
	cout << YELLOW << "Bowser tries to sign \"ShrubberyCreationForm\"..." << RESET << endl;
	try {
		Bowser->signForm(*shrubbery);
	} catch (exception &e) {
		cout << e.what() << endl;
	}
	cin.get();

	cout << YELLOW << "Let's see if it worked..." << RESET << endl;
	cout << *shrubbery;
	cin.get();

	cout << YELLOW << "Trying to execute \"ShrubberyCreationForm\" with a bureaucrat of grade 150..." << RESET << endl;
	try {
		Bureaucrat	waluigi = Bureaucrat("Waluigi", 150);
		waluigi.executeForm(*shrubbery);
	} catch (exception &e) {
		cout << e.what() << endl;
	}
	cin.get();
	
	cout << YELLOW << "Bowser tries to execute \"ShrubberyCreationForm\"..." << RESET << endl;
	try {
		Bowser->executeForm(*shrubbery);
	} catch (exception &e) {
		cout << e.what() << endl;
	}
	cout << endl << YELLOW << "To see the result, open \"forest_shrubbery\" file" << endl << RESET;
	delete Bowser;
	delete shrubbery;
}

int	main(void)
{
	shrubberyDemo();
	// #ifdef LOW_ERROR
	// 	lowError();
	// #elif defined(HIGH_ERROR)
	// 	highError();
	// #else
	// 	bureaucratDemo();
	// #endif
	return (0);
}
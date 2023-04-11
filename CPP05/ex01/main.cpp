/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 16:38:49 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/04/11 07:56:44 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

void	lowError(void)
{
	Bureaucrat	waluigi("Waluigi", 150);
	Form		mariage("Mariage de peach", 50, 1);

	cout << endl << waluigi << endl << endl << mariage << endl;
	cout << YELLOW << "Waluigi tries to sign \"Mariage de peach\"..." << RESET << endl;
	try {
		waluigi.signForm(mariage);
	} catch (exception &e) {
		cout << e.what() << endl;
	} try {
		cout << endl << YELLOW << "Creating form \"Looser Form\" with 151 as grade to sign and 1 as grade to execute..." << RESET << endl;
		Form		looserForm("Looser Form", 151, 1);
	} catch (exception &e) {
		cout << e.what() << endl;
	} try {
		cout << endl << YELLOW << "Creating form \"Looser Form\" with 1 as grade to sign and 151 as grade to execute..." << RESET << endl;
		Form		looserForm("Looser Form", 1, 151);
	} catch (exception &e) {
		cout << e.what() << endl;
	}
}

void	highError( void )
{
	try {
		cout << YELLOW << "Creating form \"Winner Form\" with 0 as grade to sign and 1 as grade to execute..." << RESET << endl;
		Form		winnerForm("Winner Form", 0, 1);
	} catch (exception &e) {
		cout << e.what() << endl;
	} try {
		cout << endl << YELLOW << "Creating form \"Winner Form\" with 1 as grade to sign and 0 as grade to execute..." << RESET << endl;
		Form		winnerForm("Winner Form", 1, 0);
	} catch (exception &e) {
		cout << e.what() << endl;
	}
}

void	bureaucratDemo(void)
{
	cout << "\033[2J\033[1;1H";
	cout << BOLD_WHITE"╔═══════════════════════════════════════════════════╗" << endl;
    cout << BOLD_WHITE"╠═══════════════════════════════════════════════════╣" << endl;
    cout << BOLD_WHITE"║             📝 SOME TESTS FOR FORMS 📝            ║" << endl;
    cout << BOLD_WHITE"╠═══════════════════════════════════════════════════╣" << endl;
    cout << BOLD_WHITE"╚═══════════════════════════════════════════════════╝" << endl << endl;
	cout << YELLOW << "Creating bureaucrat with name \"Luigi\" and grade 42..." << RESET << endl;
	Bureaucrat	luigi("Luigi", 42);
	cout << luigi << endl << endl;
	cout << YELLOW << "Creating form \"Mariage de peach\" with 50 as grade to sign and 1 as grade to execute..." << RESET << endl;
	Form		mariage("Mariage de peach", 50, 1);
	cout << mariage << endl;
	cout << YELLOW << "Luigi tries to sign the form..." << RESET << endl;
	luigi.signForm(mariage);
	cout << mariage << endl;
}

int	main(void)
{
	#ifdef LOW_ERROR
		lowError();
	#elif defined(HIGH_ERROR)
		highError();
	#else
		bureaucratDemo();
	#endif
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 16:38:49 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/04/11 06:53:53 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void	lowError(void)
{
	Bureaucrat	looser("Looser", 150);
	try
	{
		cout << YELLOW << "Trying to create bureaucrat with grade 151..." << RESET << endl;
		Bureaucrat	big_looser("Big Looser", 151);
	}
	catch (exception &e)
	{
		cout << e.what() << endl;
	}
	try
	{
		cout << endl << looser << endl;
		cout << YELLOW << "Trying to decrement his grade..." << RESET << endl;
		looser.decrementGrade();
	}
	catch (exception &e)
	{
		cout << e.what() << endl;
	}
}

void	highError(void)
{
	Bureaucrat	winner("Winner", 1);
	try
	{
		cout << YELLOW << "Trying to create bureaucrat with grade 0..." << RESET << endl;
		Bureaucrat	big_winner("Big Winner", 0);
	}
	catch (exception &e)
	{
		cout << e.what() << endl;
	}
	try
	{
		cout << endl << winner << endl;
		cout << YELLOW << "Trying to increment his grade..." << RESET << endl;
		winner.incrementGrade();
	}
	catch (exception &e)
	{
		cout << e.what() << endl;
	}
}

void	bureaucratDemo(void)
{
	cout << "\033[2J\033[1;1H";
	cout << BOLD_WHITE"╔═══════════════════════════════════════════════════╗" << endl;
    cout << BOLD_WHITE"╠═══════════════════════════════════════════════════╣" << endl;
    cout << BOLD_WHITE"║          👨 SOME TESTS FOR BUREAUCRATS 👩         ║" << endl;
    cout << BOLD_WHITE"╠═══════════════════════════════════════════════════╣" << endl;
    cout << BOLD_WHITE"╚═══════════════════════════════════════════════════╝" << endl << endl;
	cout << YELLOW << "Creating bureaucrat with name \"Mario\" and grade 42..." << RESET << endl;
	Bureaucrat	mario("Mario", 42);
	cout << mario << endl;
	cout << YELLOW << "Trying to increment his grade..." << RESET << endl;
	mario.incrementGrade();
	cout << mario << endl;
	cout << YELLOW << "Trying to decrement his grade..." << RESET << endl;
	mario.decrementGrade();
	cout << mario << endl;
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
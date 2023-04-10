/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 16:38:49 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/04/10 22:22:32 by rukkyaa          ###   ########.fr       */
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
	catch (std::exception &e)
	{
		cout << e.what() << endl;
	}
	try
	{
		cout << endl << looser << endl;
		cout << YELLOW << "Trying to decrement his grade..." << RESET << endl;
		looser.decrementGrade(1);
	}
	catch (std::exception &e)
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
	catch (std::exception &e)
	{
		cout << e.what() << endl;
	}
	try
	{
		cout << endl << winner << endl;
		cout << YELLOW << "Trying to increment his grade..." << RESET << endl;
		winner.incrementGrade(1);
	}
	catch (std::exception &e)
	{
		cout << e.what() << endl;
	}
}

int	main(void)
{
	#ifdef LOW_ERROR
		lowError();
	#elif defined(HIGH_ERROR)
		highError();
	#else
		Bureaucrat	chichi("Chirel", 140);
		cout << chichi << endl;
		chichi.decrementGrade(10);
		cout << chichi << endl;
	#endif
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:28:31 by axlamber          #+#    #+#             */
/*   Updated: 2023/03/16 17:21:53 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/*
** Brain's default constructor, set type to "Brain" and name to "Wild cat" and print
** a message to say that the Brain is alive. 
**
** @param void
** @return void
*/
Brain::Brain( void ) {
	_ideas = new string[100];
	cout << BOLD_GREEN"[Brain] 🧠 " GREEN << "default constructor !" << endl;
}

/*
** Brain's copy constructor, set type to "Brain" and name to the given parameter and print
** a message to say that the Brain is alive.
**
** @param Brain const & rhs
** @return void
*/
Brain::Brain( Brain const &rhs ) {
	*this = rhs;
	cout << BOLD_GREEN"[Brain] 🧠 " GREEN << "created by copy" << endl;
}

/*
** Brain's assignation operator overload, set type to "Brain" and name to the given parameter and print
** a message to say that the Brain is alive.
**
** @param Brain const & rhs
** @return Brain
*/
Brain	&Brain::operator=( Brain const & rhs ) {
	if (this != &rhs)
	{
		_ideas = new string[100];
		for (int i = 0; i < 100; i++)
			_ideas[i] = rhs._ideas[i];
	}
	cout << BOLD_GREEN"[Brain] 🧠 " GREEN << "created by assignation " << endl;
	return (*this);
}

/*
** Brain's destructor, print a message to say that the Brain is dead.
**
** @param void
** @return void
*/
Brain::~Brain( void ) {
	delete [] _ideas;
	cout << BOLD_RED"[Brain] 🧠 " RED << "destroyed !" RESET << endl;
}

/*
** Brain's addIdea method, add an idea to the Brain's ideas array.
**
** @param string idea
** @return void
*/
void	Brain::addIdea(string idea) {
	if (idea == "")
	{
		cout << BOLD_RED"[Brain] 🧠 " RED << "idea is empty !" RESET << endl;
		return ;
	}
	else if (_ideas[99] != "")
	{
		cout << BOLD_RED"[Brain] 🧠 " RED << "the brain is full !" RESET << endl;
		return ;
	}
	for (int i = 0; i < 100; i++)
	{
		if (_ideas[i] == "")
		{
			_ideas[i] = idea;
			cout << BOLD_YELLOW"[Brain] 🧠 " YELLOW << "idea " << idea << " added at the index "<< i << endl;
			return ;
		}
	}
}

/*
** Brain's printIdeas method, print all the ideas of the Brain's ideas array.
**
** @param void
** @return void
*/
void	Brain::printIdeas( void ) {
	if (_ideas[0] == "")
	{
		cout << BOLD_RED"[Brain] 🧠 " RED << "the brain is empty !" RESET << endl;
		return ;
	}

	cout << endl << BOLD_MAGENTA"[Brain] 🧠 " MAGENTA << "ideas :" << endl;
	for (int i = 0; i < 100; i++)
		if (_ideas[i] != "")
			cout << BOLD_MAGENTA"[Brain] 🧠 " MAGENTA << "idea[" << i << "]: " << _ideas[i] << endl;
}

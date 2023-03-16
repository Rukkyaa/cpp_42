/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 12:19:12 by axlamber          #+#    #+#             */
/*   Updated: 2023/03/16 17:40:22 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

void	BrainTest( void ) {
	cin.get();
	cout << "\033[2J\033[1;1H";
	cout << BOLD_WHITE"╔═══════════════════════════════════════════════════╗" << endl;
	cout << BOLD_WHITE"╠═══════════════════════════════════════════════════╣" << endl;
	cout << BOLD_WHITE"║            🧠 SOMES TEST FOR BRAINS 🧠            ║" << endl;
	cout << BOLD_WHITE"╠═══════════════════════════════════════════════════╣" << endl;
	cout << BOLD_WHITE"╚═══════════════════════════════════════════════════╝" << endl << endl;

	cout << BOLD_GREEN"Creation of the cat 😺:" << endl;

	cout << YELLOW"\033[3mNormal constructor" RESET << endl;
	const Cat		*garfield = new Cat("Garfield");

	cin.get();
	cout << BOLD_BLUE"The cat will now introduce himself 😺:" BLUE << endl;
	cout << "Hello ! I am a " << garfield->getType() << " and my name is " << garfield->getName() << " 🧠" << endl;

	cin.get();
	cout << BOLD_MAGENTA"The cat will make a sound 🗣️ :" MAGENTA << endl;
	garfield->makeSound();

	cin.get();
	cout << BOLD_YELLOW"[0\33[3mWhat happens when we print an empty brain ? 🤔 :" RESET << endl;
	garfield->printIdeas();
	cout << BOLD_YELLOW"[0\33[3mWhat happens when we add an empty idea in the brain ? 🤔 :" RESET << endl;
	garfield->addIdea("");
	cout << BOLD_BLUE"Now, we will fill his little brain ! 🧠 :" BLUE << endl;
	// Uncomment the following lines to see how to handle + 100 ideas
	// for (int i = 0; i < 101; i++)
	// 	garfield->addIdea("Idea ");
	// garfield->printIdeas();
	garfield->addIdea("I am a cat");
	garfield->addIdea("I like to eat fish");
	garfield->addIdea("I like to sleep");
	garfield->addIdea("I like to play with my owner");
	
	// cout << YELLOW"\033[3mCopy constructor" RESET << endl;
	// const Cat	norminet_copy(*garfield);
	cout << BOLD_RED"Destruction of the cats:" << endl;
	
	delete garfield;
}

int main()
{
	BrainTest();
	return (0);
}

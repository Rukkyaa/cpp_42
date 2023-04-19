/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 16:35:16 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/04/19 17:02:03 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

MutantStack<int>	fillStack( unsigned int nb ) {
	MutantStack<int>	mstack;

	for (unsigned int i = 0; i < nb; i++)
		mstack.push(rand() % 10 + 42);
	return (mstack);
}

void	printStack( MutantStack<int> mstack ) {
	MutantStack<int>::iterator	it = mstack.begin();
	MutantStack<int>::iterator	ite = mstack.end();

	cout << "Stack content:" << endl;
	while (it != ite) {
		cout << "| " << *it << " |" << endl;
		it++;
	}
}

int main()
{
	srand(time(NULL));

	MutantStack<int>	mstack = fillStack(10);
	MutantStack<int>::iterator	it = find(mstack.begin(), mstack.end(), 42);

	printStack(mstack);
	if (it != mstack.end())
		cout << "Found 42 in the stack !" << endl;
	else
		cout << "42 not found in the stack" << endl;
    return 0;
}
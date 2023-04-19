/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 16:35:57 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/04/19 16:57:12 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

# include <iostream>
# include <stack>
# include <iterator>
# include <cstdlib>
# include <algorithm>

using	std::cout;
using	std::endl;
using	std::stack;
using	std::deque;
using	std::find;

template <typename T>
class	MutantStack : public stack<T> {
	public:
		MutantStack( void ) : stack<T>() {};

		typedef typename deque<T>::iterator iterator;

		iterator	begin( void ) {
			return (this->c.begin());
		}

		iterator	end( void ) {
			return (this->c.end());
		}
};


#endif
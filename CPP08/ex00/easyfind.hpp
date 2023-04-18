/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 23:16:55 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/04/19 00:01:57 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <exception>

using	std::cout;
using	std::endl;
using	std::cin;
using	std::find;
using	std::vector;
using	std::exception;

class	ValueNotFoundException : public exception {
	virtual const char	*what( void ) const throw() {
		return ("\033[1;31m[ERROR]\033[0;31m Value not found in the container\033[0m");
	}
};

template<typename T>
typename T::iterator	easyFind( T &container, int value ) {
	typename T::iterator	it;

	it = find(container.begin(), container.end(), value);
	if (it == container.end())
		throw (ValueNotFoundException());
	return (it);
}

#endif
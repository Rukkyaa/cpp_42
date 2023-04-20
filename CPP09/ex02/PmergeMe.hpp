/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:36:18 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/04/20 12:32:00 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <cstdlib>
# include <vector>
# include <climits>
# include <set>

# include "colors.hpp"

# define BEFORE true
# define AFTER false

using	std::string;
using	std::cout;
using	std::endl;
using	std::vector;
using	std::set;

class	PmergeMe {
	public:
		PmergeMe( int argc, char **argv );
		~PmergeMe( void ) {};
	private:
		class	NotANumberException : public std::exception {
			public:
				virtual const char *what( void ) const throw();
		};

		class	NegativeNumberException : public std::exception {
			public:
				virtual const char *what( void ) const throw();
		};

		class	TooBigNumberException : public std::exception {
			public:
				virtual const char *what( void ) const throw();
		};

		class	DuplicateNumberException : public std::exception {
			public:
				virtual const char *what( void ) const throw();
		};

		PmergeMe						( void );
		PmergeMe		&operator=		( PmergeMe const & rhs );
		PmergeMe						( PmergeMe const & src );

		void			_parseArgs		( int argc, char **argv );
		void			_printArgs		( bool state ) const;
		vector<int>		_args;
};

#endif
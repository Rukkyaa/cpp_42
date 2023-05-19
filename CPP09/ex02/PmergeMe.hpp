/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlamber <axlamber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:36:18 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/05/19 07:48:01 by axlamber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <cstdlib>
# include <vector>
# include <climits>
# include <algorithm>
# include <set>
# include <deque>
# include <sys/time.h>
# include "colors.hpp"

# define BEFORE true
# define AFTER false

using	std::string;
using	std::cout;
using	std::endl;
using	std::vector;
using	std::deque;
using	std::set;
using	std::iter_swap;
using	std::merge;
using	std::advance;


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
		
		long			_getTime( void ) const;

		template <typename T>
		void			_insertionSort	( T &container );

		template <typename T>
		void			_mergeSort(T &left, T &right, T &container);

		template <typename T>
		void			_mergeInsertionSort(T &container);
		vector<int>		_args;
		deque<int>		_args2;
};

#endif
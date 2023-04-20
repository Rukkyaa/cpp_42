/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:36:10 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/04/20 12:33:06 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe( int argc, char **argv ) {
	_parseArgs(argc, argv);
	_printArgs(BEFORE);
	_printArgs(AFTER);
}

void	PmergeMe::_parseArgs( int argc, char **argv ) {
	char		*endptr;
	string		arg;
	long		tmp;
	set<int>	intSet;

	for (int i = 1; i < argc; ++i) {
		arg = argv[i];
		tmp = strtol(arg.c_str(), &endptr, 10);
		if (arg.find('-') != string::npos)
			throw NegativeNumberException();
		if (arg.find_first_not_of("0123456789+") != string::npos)
			throw NotANumberException();
		else if (*endptr != '\0' && tmp > INT_MAX)
			throw TooBigNumberException();
		else if (*endptr != '\0')
			throw NotANumberException();
		if (intSet.find((int)tmp) != intSet.end())
			throw DuplicateNumberException();
		_args.push_back((int)tmp);
		intSet.insert((int)tmp);
	}
}

void	PmergeMe::_printArgs( bool state ) const {
	cout << BOLD_GREEN << (state ? "[BEFORE]" : "[AFTER]") << GREEN": ";
	for (vector<int>::const_iterator it = _args.begin(); it != _args.end(); ++it) {
		cout << *it;
		if (it + 1 != _args.end())
			cout << ", ";
	}
	cout << RESET << endl;
}

const char *PmergeMe::NotANumberException::what( void ) const throw() {
	return (BOLD_RED"[ERROR] " RED"Only numbers are allowed as arguments !");
}

const char *PmergeMe::NegativeNumberException::what( void ) const throw() {
	return (BOLD_RED"[ERROR] " RED"Negative numbers are not allowed as arguments !");
}

const char *PmergeMe::TooBigNumberException::what( void ) const throw() {
	return (BOLD_RED"[ERROR] " RED"Numbers must be a positive integer less than INT_MAX !(2147483647)");
}

const char *PmergeMe::DuplicateNumberException::what( void ) const throw() {
	return (BOLD_RED"[ERROR] " RED"Duplicate numbers are not allowed as arguments !");
}

// ./PmergeMe `shuf -i 1-10 -n 10 | tr "\n" " "`
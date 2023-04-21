/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rukkyaa <rukkyaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:36:10 by rukkyaa           #+#    #+#             */
/*   Updated: 2023/04/21 08:23:40 by rukkyaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe( int argc, char **argv ) {
	long	firstTime;

	_parseArgs(argc, argv);
	_printArgs(BEFORE);
	firstTime = _getTime();
	_mergeInsertionSort(_args);
	firstTime = _getTime() - firstTime;
	_printArgs(AFTER);
	cout << "Time: " << firstTime << " us" << endl;
}

template <typename T>
void	PmergeMe::_insertionSort(T &container)
{
	if (container.size() < 2)
		return ;

	typedef typename T::iterator iterator;

	for (iterator i = container.begin(); i != container.end(); i++)
	{
		iterator j = i;
		while (j != container.begin() && *(j - 1) > *j)
		{
			iter_swap(j, (j - 1));
			--j;
		}
	}
}

template <typename T>
void	PmergeMe::_mergeInsertionSort(T &container) {
	int const	limit = 16;
	T			left;
	T			right;

	if (container.size() < limit)
	{
		_insertionSort(container);
		return ;
	}

	left = T(container.begin(), container.begin() + container.size() / 2);
	right = T(container.begin() + container.size() / 2, container.end());

	_mergeInsertionSort(left);
	_mergeInsertionSort(right);

	merge(left.begin(), left.end(), right.begin(), right.end(), container.begin());
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

long	PmergeMe::_getTime( void ) const {
	struct timeval	tv;

	gettimeofday(&tv, NULL);
	return (tv.tv_sec * 1000000 + tv.tv_usec);
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
